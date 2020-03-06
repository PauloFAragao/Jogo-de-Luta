#include <allegro.h>
#include "Player.h"


#define TEF 120			//tempo entre os frames
#define GRAVIDADE 0.5	//gravidade global
#define CHAO 400		//posição do chão
#define VELANDAR 4		//velocidade que o personagem vai andar
#define VELCORRIDA 10	//velocidade que o personagem vai correr


//construtor
Player::Player() { StartAttributes(); }


//destrutor
Player::~Player()
{
	destroy_bitmap( *sprites );
}


/**
 * Método que inicializa as variaveis
 */
void Player::StartAttributes()
{
	x=500;							//posição em X do player
	y=CHAO;							//posição em Y do player
	speedX=0;						//velocidade em X do player
	speedY=0; 						//velocidade em Y do player
	action=0;						//define a ação que o player está executando
	capturaTempoParaOUltimoFrame=0;	//para todas as vezes que o ultimo frame precisa ser renderizado por algum tempo mais não pode ser controlado dentro da função especifica da animação
	capturaTempo=0;					//captura o tempo
	frame=0;						//frame da animação
	startAnimation=false;			//booleana para verificar se a animação iniciou
	toRight=true;					//indica para que lado o personagem está virado
	//jumpComand=false;				//comando para o personagem pular
	antLoopJumpBack=false;			//para criar um controle e evitar loop quando o personagem pula para tras
	button00=false;					//esquerda
	button01=false;					//baixo
	button02=false;					//direita
	button03=false;					//cima
	button04=false;					//soco fraco
	button05=false;					//soco forte
	button06=false;					//chute fraco
	button07=false;					//chute forte
	bt0TimeCapture=false;			//variavel para captura de tempo do botão 00
	bt1TimeCapture=false;			//variavel para captura de tempo do botão 01
	bt2TimeCapture=false;			//variavel para captura de tempo do botão 02
	bt3TimeCapture=false;			//variavel para captura de tempo do botão 03
	bt4TimeCapture=false;			//variavel para captura de tempo do botão 04
	bt5TimeCapture=false;			//variavel para captura de tempo do botão 05
	bt6TimeCapture=false;			//variavel para captura de tempo do botão 06
	bt7TimeCapture=false;			//variavel para captura de tempo do botão 07

	for (int a=0; a<8; a++)//iniciando o vetor de tempos
	{
		for(int b=0; b<10; b++)
		{
			btTPress[a][b]=0;
		}
	}
	
}END_OF_FUNCTION(StartAttributes)


/**
 * função para ser chamada na rotina principal do alegro
 */
void Player::Routine()
{
	//captura os imputs do plauer
	TrackImputs();
	
	//movimenta o player na horizontal
	HorizontalMove();
	
	//movimenta o player na vertical
	VerticalMove();
	
	//motor de imterpletação
	InterpretationEngine();
	
	//chamada das animações basicas do personagem
	PlayerBasicAnimations();
	
}END_OF_FUNCTION(routine)


/**
 * Esse metodo escreve os tempos em que o jogador pressiona e solta os botões.
 * Nos espaços com valores pares são escritos os tempos em que o jogador pressionou os botões
 * Nos espaços com valores impares são escritos os tempos em que o jogador soltou os botões.
 */
void Player::writeOnBtTmPress(int pos, bool valor)
{
	if(valor){
		for(int i=0; i<9; i++)
		{
			if(i!=8)	btTPress[pos][i] = btTPress[pos][i+2];
			else		btTPress[pos][8] = clock();			
		}
	}
	else btTPress[pos][9] = clock();
}END_OF_FUNCTION(writeOnBtTmPress);


/**
 * Esse metodo muda o valor da ação que o personagem está executando e altera o valor de startAnimation
 * se a animação referente a ação ainda não estiver sendo executada.
 */
void Player::ChangeAction(int value)
{
	action = value;
	if( VerifyFrame( value ) ) startAnimation = false;
}


/**
 * Esse metodo captura os imputs do player e os tempos em que o jogador pressiona e solta os botões.
*/
void Player::TrackImputs()
{
	//botão 0
	if(key[KEY_A] && !bt0TimeCapture)//captura o tempo em que o botão foi pressionado
	{
		button00 = true;
		bt0TimeCapture=true;
		writeOnBtTmPress(0,true);
	}
	if(bt0TimeCapture && !key[KEY_A])//captura o tempo em que o botão foi solto
	{
		button00 = false;
		bt0TimeCapture=false;
		writeOnBtTmPress(0,false);
	}
	//botão 1
	if(key[KEY_S] && !bt1TimeCapture)//captura o tempo em que o botão foi pressionado
	{
		button01 = true;
		bt1TimeCapture=true;
		writeOnBtTmPress(1,true);
	}
	if(bt1TimeCapture && !key[KEY_S])//captura o tempo em que o botão foi solto
	{
		button01 = false;
		bt1TimeCapture=false;
		writeOnBtTmPress(1,false);
	}	
	//botão 2
	if(key[KEY_D] && !bt2TimeCapture)//captura o tempo em que o botão foi pressionado
	{
		button02 = true;
		bt2TimeCapture=true;
		writeOnBtTmPress(2,true);
	}
	if(bt2TimeCapture && !key[KEY_D])//captura o tempo em que o botão foi solto
	{
		button02 = false;
		bt2TimeCapture=false;
		writeOnBtTmPress(2,false);
	}
	//botão 3
	if(key[KEY_W] && !bt3TimeCapture)//captura o tempo em que o botão foi pressionado
	{
		button03 = true;
		bt3TimeCapture=true;
		writeOnBtTmPress(3,true);
	}
	if(bt3TimeCapture && !key[KEY_W])//captura o tempo em que o botão foi solto
	{
		button03 = false;
		bt3TimeCapture=false;
		writeOnBtTmPress(3,false);
	}
	//botão 4
	if(key[KEY_U] && !bt4TimeCapture)//captura o tempo em que o botão foi pressionado
	{
		button04 = true;
		bt4TimeCapture=true;
		writeOnBtTmPress(4,true);
	}
	if(bt4TimeCapture && !key[KEY_U])//captura o tempo em que o botão foi solto
	{
		button04 = false;
		bt4TimeCapture=false;
		writeOnBtTmPress(4,false);
	}
	//botão 5
	if(key[KEY_J] && !bt5TimeCapture)//captura o tempo em que o botão foi pressionado
	{
		button05 = true;
		bt5TimeCapture=true;
		writeOnBtTmPress(5,true);
	}
	if(bt5TimeCapture && !key[KEY_J])//captura o tempo em que o botão foi solto
	{
		button05 = false;
		bt5TimeCapture=false;
		writeOnBtTmPress(5,false);
	}	
	//botão 6
	if(key[KEY_I] && !bt6TimeCapture)//captura o tempo em que o botão foi pressionado
	{
		button06 = true;
		bt6TimeCapture=true;
		writeOnBtTmPress(6,true);
	}
	if(bt6TimeCapture && !key[KEY_I])//captura o tempo em que o botão foi solto
	{
		button06 = false;
		bt6TimeCapture=false;
		writeOnBtTmPress(6,false);
	}
	//botão 7
	if(key[KEY_K] && !bt7TimeCapture)//captura o tempo em que o botão foi pressionado
	{
		button07 = true;
		bt7TimeCapture=true;
		writeOnBtTmPress(7,true);
	}
	if(bt7TimeCapture && !key[KEY_K])//captura o tempo em que o botão foi solto
	{
		button07 = false;
		bt7TimeCapture=false;
		writeOnBtTmPress(7,false);
	}
	
}END_OF_FUNCTION(trackImputs);


/**
 * Logica da movimentação do player na horizontal
 */
void Player::HorizontalMove()
{
	//desaceleração do player
	if( !button00 && speedX<0 && y >= CHAO )
	{
		speedX += 1.8;
		if(speedX>0) speedX =0;
	} 
	if( !button02 && speedX>0 && y >= CHAO ) 
	{
		speedX -= 1.8;
		if(speedX<0) speedX =0;
	}

	
	//verifica para qual lado o personagem está virado
	if(toRight)//personagem virado para a direita
	{
		
		if(button00 && y >= CHAO)//com o personagem virado para a direita aqui ele se move para tras
		{
			//pulo para tras
			if( btTPress[0][8] - btTPress[0][7] < 150 && ValidateAction(110) && !antLoopJumpBack )
//btTPress[0][8] - btTPress[0][7] = se a difenreça de tempo entre o botão ter cido solto e pressionado é menor que 150 ms
			{
				speedX = -12;
				speedY = -10;
				antLoopJumpBack = true;
				ChangeAction(110);
			}
			//andando para tras
			else if( ValidateAction(30) )
			{
				speedX = -VELANDAR;
				ChangeAction(30);
			}
		}
		
	
		if(button02 && y >= CHAO)//com o personagem virado para a direita aqui ele se move para frente
		{
			//correndo para frente
			if( btTPress[2][8] - btTPress[2][7] < 150 && ValidateAction(100))
//btTPress[2][8] - btTPress[2][7] = se a difenreça de tempo entre o botão ter cido solto e pressionado é menor que 150 ms
			{
				 speedX = VELCORRIDA;
				 ChangeAction(100);
			}
			//andando para frente
			else if( ValidateAction(20) )
			{
				speedX = VELANDAR;
				ChangeAction(20);
			} 
		}
		
	}
	else//personagem virado para a esquerda
	{

	}	
	
	//calcula se o peronagem está colidindo com o fim da cena e então movimenta o personagem
	if( x + speedX > 1142 ) 	 x = 1142;
	else if( x + speedX < -167 ) x = -167;
	else 						 x += speedX;

	
}END_OF_FUNCTION(HorizontalMove)


/**
 * logica de movimentação do player na vertical
 */
void Player::VerticalMove()
{
	
	if( button03 && y >= CHAO && ValidateAction(-5) ) 
	{
		speedX = 0;
		if( button00 && !button02 ) 
		{
			if(toRight && ValidateAction(80) )	ChangeAction(80);
			else if( ValidateAction(60) )		ChangeAction(60);
		}
		else if( button02 && !button00 )
		{
			if(toRight && ValidateAction(60) )	ChangeAction(60);
			else if( ValidateAction(80) )		ChangeAction(80);
		}
		else if( ValidateAction(40) ) ChangeAction(40);
	}
	

	if(  action == 40 || action == 60 || action == 80 )
	{
		if( frame == 41 && clock() - capturaTempo > TEF )
		{
			
			if( btTPress[3][9] - btTPress[3][8] > 120 || button03 )//pulo forte
	//btTPress[3][7] - btTPress[3][8] > 120 = se o botão ficou pressionado mais tempo que 120 ms
			{
				
				//pulo forte na diagonal com o botão direcional para tras
				if( button00 || ( btTPress[3][8] - btTPress[0][8] >= -30 && btTPress[3][8] - btTPress[0][8] <= 30 ) )
	// se btTPress[3][8] - btTPress[0][8] (botão para cima e botão para tras) foi entre -30 e 30 (60 ms de diferença entre os botões terem sido pressionados)
				{
					if(toRight) { speedX = -10; ChangeAction(91); } //pulando na diagonal para tras
					else 		{ speedX = 10;  ChangeAction(71); } //pulando na diagonal para frente
					speedY = -20;
				}
				
				//pulo forte na diagonal com o botão direcional para frent
				else if( button02 || ( btTPress[3][8] - btTPress[2][8] >= -30 && btTPress[3][8] - btTPress[2][8] <= 30 ) )
	// se btTPress[3][8] - btTPress[2][8] (botão para cima e botão para frente) foi entre -30 e 30 (60 ms de diferença entre os botões terem sido pressionados)
				{
					if(toRight) {speedX = 10;  ChangeAction(71);  } //pulando na diagonal para frente
					else 		{speedX = -10; ChangeAction(91); } //pulando na diagonal para tras
					speedY = -20;
				}
				
				else//pulo apenas na vertical
				{
					speedX = 0;
					speedY = -20;
					ChangeAction(51);
				}
				
			}
			
			else//pulo fraco
			{
				   
				if( action == 40 )//pulo normal
				{
					//verifica se depois que o comando de pulo foi criado houve um input em tempo proxido do botão 0
					if( button00 || ( btTPress[0][8] - btTPress[3][8] <= 30 ) )
					{
						if( toRight )	ChangeAction(80);
						else			ChangeAction(60);
					}
				
					//verifica se depois que o comando de pulo foi criado houve um input em tempo proxido do botão 2
					if( button00 || ( btTPress[2][8] - btTPress[3][8] <= 30 ) )
					{
						if( toRight )	ChangeAction(60);
						else			ChangeAction(80);
					}
					
					speedX = 0;
					speedY = -15;
					ChangeAction(41);
				}
				
				if( action == 60 )// pulo fraco na diagonal para frente
				{
					speedX = 10;
					speedY = -15;
					ChangeAction(61);
				}
				
				if( action == 80 )// pulo fraco na diagonal para tras
				{
					speedX = -10;
					speedY = -15;
					ChangeAction(81);
				}
				

			}
			
		}
	}
	
	
	speedY+=GRAVIDADE;//ação da gravidade
	
	
	if( y >= CHAO && speedY > 0)//colisão com o chão
	{
		speedY = 0;
		y=CHAO;
	}
	
	
	y+=speedY;//movimenta o personagem
	
	
}END_OF_FUNCTION(VertivalMove)


//>>>>>>>>>>>>>>>>>>>>>>>>>>>> Motor de interpretação <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<


/**
 * Esse metodo é responsavel por imterpletar as situações em que o personagem se encontra e mudar os valores de action
 */
void Player::InterpretationEngine()
{
	
//walk - walkBack - run
	if( speedX == 0 && VerifyFrame( 0 ) && ( action == 20 || action == 30 || action == 100 )  )
	{
		action = 0;
		startAnimation = false;
	}	
	
	
//jumpBack
	if( action == 110 && y >= CHAO )//animação do personagem pulando para tras em quando está no ar
	{
		ChangeAction(111);
		capturaTempoParaOUltimoFrame = clock();
	}
	if( action == 111 && capturaTempoParaOUltimoFrame > TEF )//animação do personagem caindo no chão e se recuperando da queda
	{
		//continua antando para tras
		if( button00 && toRight)
		{
			speedX = -VELANDAR;
			ChangeAction(30);
		}
		if( button02 && !toRight)
		{
			speedX = VELANDAR;
			ChangeAction(30);
		}
	
		if( speedX == 0 )//o personagem parou de andar para tras
		{
			ChangeAction(0);
		}
	}
	if(antLoopJumpBack &&  toRight && !button00) antLoopJumpBack=false;
	if(antLoopJumpBack && !toRight && !button02) antLoopJumpBack=false;
	
	
//jump
	//muda de rising para endOfClimp
	if( action == 41 && speedY > - 3 ) ChangeAction( 42 );
	if( action == 51 && speedY > - 3 ) ChangeAction( 52 );
	if( action == 61 && speedY > - 3 ) ChangeAction( 62 );
	if( action == 81 && speedY > - 3 ) ChangeAction( 82 );

	//muda de endOfClimp para falling
	if( action == 42 && speedY > 5 ) ChangeAction( 43 );
	if( action == 52 && speedY > 5 ) ChangeAction( 53 );
	if( action == 62 && speedY > 5 ) ChangeAction( 63 );
	if( action == 82 && speedY > 5 ) ChangeAction( 83 );
	
	//muda de falling para fall
	if( action == 43 && y >= CHAO ) ChangeAction( 44 );
	if( action == 53 && y >= CHAO ) ChangeAction( 54 );
	if( action == 63 && y >= CHAO ) ChangeAction( 64 );
	if( action == 83 && y >= CHAO ) ChangeAction( 84 );
	
	//muda de fall para idle
	if( action == 44 || action == 54 || action == 64 || action == 84 )
	{
		//aqui a animação deve ser completamente executada e depois mudar para a animação idle
		if( frame == 50 ) capturaTempoParaOUltimoFrame = clock();
		if( frame == 50 && capturaTempoParaOUltimoFrame > TEF-20 )
		{
			ChangeAction(0);
		}
	}
	
//strongFrontalDiagonalJump
	if( action == 71 )//strongFrontalDiagonalJump
	{
		//essa animação deve rodar até o ultimo frame e entao mudar para a animação falling
		if( frame == 59 ) capturaTempoParaOUltimoFrame = clock();
		if( frame == 59 && capturaTempoParaOUltimoFrame > TEF-20)
		{
			ChangeAction(43);
		}
	}
	
	
//strongBackDiagonalJump
	if( action == 91 )//strongFrontalDiagonalJump
	{
		//essa animação deve rodar até o ultimo frame e entao mudar para a animação falling
		if( frame == 67 ) capturaTempoParaOUltimoFrame = clock();
		if( frame == 67 && capturaTempoParaOUltimoFrame > TEF-20)
		{
			ChangeAction(43);
		}
	}
	
	
//crouched
	if( button01 && ValidateAction( 10 ) )//crouching
	{
		ChangeAction( 10 );
	}
	if(button01 && action == 10 && frame == 41)//crouchedIdle
	{
		ChangeAction( 20 );
	}
	if( !button01 && action == 20 )//raiseCrouched
	{
		ChangeAction( 30 );
	}
	if( !button01 && action == 30 && frame == 40)//idle
	{
		ChangeAction( 0 );
	}
	
	
}END_OF_FUNCTION(InterpretationEngine);


//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Animações <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<


/**
 * controle central da animação do player
 */
/**
 * controle central da animação do player
 */
void Player::PlayerBasicAnimations()
{
	switch( action )
	{
		case 0://idle
			Anim00();
		break;
		
		case 10://Crouching
		case 40://Jump Start
		case 60://Jump Start
		case 80://Jump Start
			Anim01();
		break;
		
		case 11://Crouched Idle
			Anim02();
		break;
		
		case 12://Raise Crouched
			Anim03();
		break;
		
		case 20://Walk
			Anim04();
		break;
		
		case 30://Walk Back
			Anim05();
		break;
		
		case 41://Rising
		case 51://Rising
		case 61://Rising
		case 81://Rising
			Anim06();
		break;
		
		case 42://End of Climp
		case 52://End of Climp
		case 62://End of Climp
		case 82://End of Climp
			Anim07();
		break;
		
		case 43://Falling
		case 53://Falling
		case 63://Falling
		case 73://Falling
		case 83://Falling
		case 93://Falling
			Anim08();
		break;
		
		case 44://Fall
		case 54://Fall
		case 64://Fall
		case 74://Fall
		case 84://Fall
		case 94://Fall
			Anim09();
		break;
		
		case 71://Strong Frontal Diagonal Jump
			Anim10();
		break;
		
		case 91://Strong Back Diagonal Jump
			Anim11();
		break;
		
		case 100://Run
			Anim12();
		break;
		
		case 110://Jumping Back
			Anim13();
		break;
		
		case 111://Fall - depois de Jumping Back
			Anim14();
		break;
		
		default: //ERROR
			frame = 0;
		break;
	}
	
}END_OF_FUNCTION(PlayerBasicAnimations)

void Player::Anim00()//idle
{
	if( !startAnimation )//frame 0
	{ frame = 0; startAnimation = true; capturaTempo = clock(); }
	if(startAnimation)
	{
		if( frame == 0 && clock() - capturaTempo > TEF )//frame 1
		{ frame = 1; capturaTempo = clock(); }
		if( frame == 1 && clock() - capturaTempo > TEF )//frame 2
		{ frame = 2; capturaTempo = clock(); }
		if( frame == 2 && clock() - capturaTempo > TEF )//frame 3
		{ frame = 3; capturaTempo = clock(); }
		if( frame == 3 && clock() - capturaTempo > TEF )//frame 4
		{ frame = 4; capturaTempo = clock(); }
		if( frame == 4 && clock() - capturaTempo > TEF )//frame 5
		{ frame = 5; capturaTempo = clock(); }
		if( frame == 5 && clock() - capturaTempo > TEF )//frame 6
		{ frame = 6; capturaTempo = clock(); }
		if( frame == 6 && clock() - capturaTempo > TEF )//frame 7
		{ frame = 7; capturaTempo = clock(); }
		if( frame == 7 && clock() - capturaTempo > TEF )//frame 0
		{ frame = 0; capturaTempo = clock(); }
	}
}END_OF_FUNCTION(anim00);

void Player::Anim01()//crouching 
{
	if( !startAnimation )//frame 0
	{ frame = 40; startAnimation = true; capturaTempo = clock(); }
	if(startAnimation)
	{
		if( frame == 40 && clock() - capturaTempo > TEF )//frame 1
		{ frame = 41; capturaTempo = clock(); }
		
	}
}END_OF_FUNCTION(anim01);

void Player::Anim02()//crouchedIdle
{
	if( !startAnimation )//frame 0
	{ frame = 68; startAnimation = true; capturaTempo = clock(); }
	if(startAnimation)
	{
		if( frame == 68 && clock() - capturaTempo > TEF+10 )//frame 1
		{ frame = 69; capturaTempo = clock(); }
		if( frame == 69 && clock() - capturaTempo > TEF+10 )//frame 2
		{ frame = 70; capturaTempo = clock(); }
		if( frame == 70 && clock() - capturaTempo > TEF+10 )//frame 3
		{ frame = 71; capturaTempo = clock(); }
		if( frame == 71 && clock() - capturaTempo > TEF+10 )//frame 4
		{ frame = 72; capturaTempo = clock(); }
		if( frame == 72 && clock() - capturaTempo > TEF+10 )//frame 5
		{ frame = 73; capturaTempo = clock(); }
		if( frame == 73 && clock() - capturaTempo > TEF+10 )//frame 0
		{ frame = 68; capturaTempo = clock(); }
	}
}END_OF_FUNCTION(anim02);

void Player::Anim03()//raiseCrouched  
{
	if( !startAnimation )//frame 0
	{ frame = 41; startAnimation = true; capturaTempo = clock(); }
	if(startAnimation)
	{
		if( frame == 41 && clock() - capturaTempo > TEF )//frame 1
		{ frame = 40; capturaTempo = clock(); }
		
	}
}END_OF_FUNCTION(anim03);

void Player::Anim04()//walk
{
	if( !startAnimation )//frame 0
	{ frame = 8; startAnimation = true; capturaTempo = clock(); }
	if(startAnimation)
	{
		if(frame == 8 && clock() - capturaTempo > TEF )//frame 1
		{ frame = 9; capturaTempo = clock(); }
		if(frame == 9 && clock() - capturaTempo > TEF )//frame 2
		{ frame = 10; capturaTempo = clock(); }
		if(frame == 10 && clock() - capturaTempo > TEF )//frame 3
		{ frame = 11; capturaTempo = clock(); }
		if(frame == 11 && clock() - capturaTempo > TEF )//frame 4
		{ frame = 12; capturaTempo = clock(); }
		if(frame == 12 && clock() - capturaTempo > TEF )//frame 5
		{ frame = 13; capturaTempo = clock(); }
		if(frame == 13 && clock() - capturaTempo > TEF )//frame 6
		{ frame = 14; capturaTempo = clock(); }
		if(frame == 14 && clock() - capturaTempo > TEF )//frame 7
		{ frame = 15; capturaTempo = clock(); }
		if(frame == 15 && clock() - capturaTempo > TEF )//frame 8
		{ frame = 16; capturaTempo = clock(); }
		if(frame == 16 && clock() - capturaTempo > TEF )//frame 0
		{ frame = 8; capturaTempo = clock(); }
	}
}END_OF_FUNCTION(anim04);

void Player::Anim05()//walkBack
{
	if( !startAnimation )//frame 0
	{ frame = 17; startAnimation = true; capturaTempo = clock(); }
	if(startAnimation)
	{
		if( frame == 17 && clock() - capturaTempo > TEF )//frame 1
		{ frame = 18; capturaTempo = clock(); }
		if( frame == 18 && clock() - capturaTempo > TEF )//frame 2
		{ frame = 19; capturaTempo = clock(); }
		if( frame == 19 && clock() - capturaTempo > TEF )//frame 3
		{ frame = 20; capturaTempo = clock(); }
		if( frame == 20 && clock() - capturaTempo > TEF )//frame 4
		{ frame = 21; capturaTempo = clock(); }
		if( frame == 21 && clock() - capturaTempo > TEF )//frame 5
		{ frame = 22; capturaTempo = clock(); }
		if( frame == 22 && clock() - capturaTempo > TEF )//frame 6
		{ frame = 23; capturaTempo = clock(); }
		if( frame == 23 && clock() - capturaTempo > TEF )//frame 7
		{ frame = 24; capturaTempo = clock(); }
		if( frame == 24 && clock() - capturaTempo > TEF )//frame 8
		{ frame = 25; capturaTempo = clock(); }
		if( frame == 25 && clock() - capturaTempo > TEF )//frame 0
		{ frame = 17; capturaTempo = clock(); }
	}
}END_OF_FUNCTION(anim05);

void Player::Anim06()//rising 
{
	if( !startAnimation )//frame 0
	{ frame = 42; startAnimation = true;capturaTempo = clock(); }

}END_OF_FUNCTION(anim06);

void Player::Anim07()//endOfClimp
{
	if( !startAnimation )//frame 0
	{ frame = 43; startAnimation = true; capturaTempo = clock(); }
	if(startAnimation)
	{
		if( frame == 43 && clock() - capturaTempo > TEF )//frame 1
		{ frame = 44; capturaTempo = clock(); }
	}
}END_OF_FUNCTION(anim07);

void Player::Anim08()//falling
{
	if( !startAnimation )//frame 0
	{ frame = 45; startAnimation = true; capturaTempo = clock(); }
	if(startAnimation)
	{
		if( frame == 45 && clock() - capturaTempo > TEF+50 )//frame 1
		{ frame = 46; capturaTempo = clock(); }
	}
}END_OF_FUNCTION(anim08);

void Player::Anim09()//fall
{
	if( !startAnimation )//frame 0
	{ frame = 47; startAnimation = true; capturaTempo = clock(); }
	if(startAnimation)
	{
		if( frame == 47 && clock() - capturaTempo > TEF-20 )//frame 1
		{ frame = 48; capturaTempo = clock(); }
		if( frame == 48 && clock() - capturaTempo > TEF-20 )//frame 2
		{ frame = 49; capturaTempo = clock(); }
		if( frame == 49 && clock() - capturaTempo > TEF-20 )//frame 3
		{ frame = 50; capturaTempo = clock(); }
	}
}END_OF_FUNCTION(anim09);


void Player::Anim10()//strongFrontalDiagonalJump
{
	if( !startAnimation )//frame 0
	{ frame = 51; startAnimation = true; capturaTempo = clock(); }
	if(startAnimation)
	{
		if( frame == 51 && clock() - capturaTempo > TEF-20 )//frame 1
		{ frame = 52; capturaTempo = clock(); }
		if( frame == 52 && clock() - capturaTempo > TEF-20 )//frame 2
		{ frame = 53; capturaTempo = clock(); }
		if( frame == 53 && clock() - capturaTempo > TEF-20 )//frame 3
		{ frame = 54; capturaTempo = clock(); }
		if( frame == 54 && clock() - capturaTempo > TEF-20 )//frame 4
		{ frame = 55; capturaTempo = clock(); }
		if( frame == 55 && clock() - capturaTempo > TEF-20 )//frame 5
		{ frame = 56; capturaTempo = clock(); }
		if( frame == 56 && clock() - capturaTempo > TEF-20 )//frame 6
		{ frame = 57; capturaTempo = clock(); }
		if( frame == 57 && clock() - capturaTempo > TEF-20 )//frame 7
		{ frame = 58; capturaTempo = clock(); }
		if( frame == 58 && clock() - capturaTempo > TEF-20 )//frame 8
		{ frame = 59; capturaTempo = clock(); }
	}
}END_OF_FUNCTION(anim10);

void Player::Anim11()//strongBackDiagonalJump
{
	if( !startAnimation )//frame 0
	{ frame = 60; startAnimation = true; capturaTempo = clock(); }
	if(startAnimation)
	{
		if( frame == 60 && clock() - capturaTempo > TEF-20 )//frame 1
		{ frame = 61; capturaTempo = clock(); }
		if( frame == 61 && clock() - capturaTempo > TEF-20 )//frame 2
		{ frame = 62; capturaTempo = clock(); }
		if( frame == 62 && clock() - capturaTempo > TEF-20 )//frame 3
		{ frame = 63; capturaTempo = clock(); }
		if( frame == 63 && clock() - capturaTempo > TEF-20 )//frame 4
		{ frame = 64; capturaTempo = clock(); }
		if( frame == 64 && clock() - capturaTempo > TEF-20 )//frame 5
		{ frame = 65; capturaTempo = clock(); }
		if( frame == 65 && clock() - capturaTempo > TEF-20 )//frame 6
		{ frame = 66; capturaTempo = clock(); }
		if( frame == 66 && clock() - capturaTempo > TEF-20 )//frame 7
		{ frame = 67; capturaTempo = clock(); }
	}
}END_OF_FUNCTION(Anim11);

void Player::Anim12()//run
{
	if( !startAnimation )//frame 0
	{ frame = 26; startAnimation = true; capturaTempo = clock(); }
	if(startAnimation)
	{
		if( frame == 26 && clock() - capturaTempo > TEF )//frame 1
		{ frame = 27; capturaTempo = clock(); }
		if( frame == 27 && clock() - capturaTempo > TEF )//frame 2
		{ frame = 28; capturaTempo = clock(); }
		if( frame == 28 && clock() - capturaTempo > TEF )//frame 3
		{ frame = 29; capturaTempo = clock(); }
		if( frame == 29 && clock() - capturaTempo > TEF )//frame 4
		{ frame = 30; capturaTempo = clock(); }
		if( frame == 30 && clock() - capturaTempo > TEF )//frame 5
		{ frame = 31; capturaTempo = clock(); }
		if( frame == 31 && clock() - capturaTempo > TEF )//frame 6
		{ frame = 32; capturaTempo = clock(); }
		if( frame == 32 && clock() - capturaTempo > TEF )//frame 7
		{ frame = 33; capturaTempo = clock(); }
		if( frame == 33 && clock() - capturaTempo > TEF )//frame 8
		{ frame = 34; capturaTempo = clock(); }
		if( frame == 34 && clock() - capturaTempo > TEF )//frame 1
		{ frame = 27; capturaTempo = clock(); }
	}
}END_OF_FUNCTION(Anim12);

void Player::Anim13()//jumpingBack
{
	if( !startAnimation )//frame 0
	{ frame = 35; startAnimation = true; capturaTempo = clock(); }
	if(startAnimation)
	{
		if( frame == 35 && clock() - capturaTempo > TEF+50 )//frame 1
		{ frame = 36; capturaTempo = clock(); }
		if( frame == 36 && clock() - capturaTempo > TEF+50 )//frame 2
		{ frame = 37; capturaTempo = clock(); }
	}
}END_OF_FUNCTION(Anim13);

void Player::Anim14()//fall
{
	if( !startAnimation )//frame 0
	{ frame = 38; startAnimation = true; capturaTempo = clock(); }
	if(startAnimation)
	{
		if( frame == 38 && clock() - capturaTempo > TEF )//frame 1
		{ frame = 39; capturaTempo = clock(); }
	}
}END_OF_FUNCTION(Anim14);

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> sets && gets <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<


//sprites
BITMAP *Player::GetPlayerSprite()//esse metodo retorna o frame que deve ser renderizado
{
	return sprites[ frame ];
}END_OF_FUNCTION(GetPlayerSprite);

//sprites
BITMAP *Player::GetSprites(int index)
{
	return sprites[index];
}END_OF_FUNCTION(GetSprites)

//sprites
void Player::SetSrites(BITMAP *sprite, int index)
{
	sprites[index] = sprite;
}END_OF_FUNCTION(SetSrite)

//x
float Player::GetX()
{
	return x;
}END_OF_FUNCTION(GetX);
void  Player::SetX(float x)
{
	this->x = x;
}END_OF_FUNCTION(SetX);

//y
float Player::GetY()
{
	return y;
}END_OF_FUNCTION(GetY);
void  Player::SetY(float y)
{
	this->y = y;
}END_OF_FUNCTION(SetY);

//speedX
float Player::GetSpeedX()
{
	return speedX;
}END_OF_FUNCTION(GetSpeedX);
void  Player::SetSpeedX(float speedX)
{
	this->speedX = speedX;
}END_OF_FUNCTION(SetSpeedX);

//speedY
float Player::GetSpeedY()
{
	return speedY;
}END_OF_FUNCTION(GetSpeedY);
void  Player::SetSpeedY(float speedY)
{
	this->speedY = speedY;
}END_OF_FUNCTION(SetSpeedY);

//action
int   Player::GetAction()
{
	return action;
}END_OF_FUNCTION(GetAction);
void  Player::SetAction(int action)
{
	this->action = action;
}END_OF_FUNCTION(SetAction);

//frame
int Player::GetFrame()
{
	return frame;
}END_OF_FUNCTION(GetFrame);
void Player::SetFrame(int frame)
{
	this->frame = frame;
}END_OF_FUNCTION(SetFrame);

//toRight
bool  Player::GetToRight()
{
	return toRight;
}END_OF_FUNCTION(GetToRight);
void  Player::SetToRight(bool toRight)
{
	this->toRight = toRight;
}END_OF_FUNCTION(SetToRight);

//button00
bool Player::GetButton00()
{
	return button00;
}END_OF_FUNCTION(GetButton00);

//button01
bool Player::GetButton01()
{
	return button01;
}END_OF_FUNCTION(GetButton01);

//button02
bool Player::GetButton02()
{
	return button02;
}END_OF_FUNCTION(GetButton02);

//button03
bool Player::GetButton03()
{
	return button03;
}END_OF_FUNCTION(GetButton03);

//button04
bool Player::GetButton04()
{
	return button04;
}END_OF_FUNCTION(GetButton04);

//button05
bool Player::GetButton05()
{
	return button05;
}END_OF_FUNCTION(GetButton05);

//button06
bool Player::GetButton06()
{
	return button06;
}END_OF_FUNCTION(GetButton06);

//button07
bool Player::GetButton07()
{
	return button07;
}END_OF_FUNCTION(GetButton07);

//btTPress
int Player::GetBtTPress(int botao, int pos)
{
	return btTPress[botao][pos];
}END_OF_FUNCTION(getBtTPress);

//lifePoints
void Player::SetLifePoints(int lifePoints)
{
	this->lifePoints = lifePoints;
}END_OF_FUNCTION(SetLifePoints);
int Player::GetLifePoints()
{
	return lifePoints;
}END_OF_FUNCTION(GetLifePoints);

//lifePointsMax
void Player::SetLifePointsMax(int lifePointsMax)
{
	this->lifePointsMax = lifePointsMax;
}END_OF_FUNCTION(SetLifePointsMax);
int Player::GetLifePointsMax()
{
	return lifePointsMax;
}END_OF_FUNCTION(GetLifePointsMax);

//defence
void Player::SetDefence(int defence)
{
	this->defence = defence;
}END_OF_FUNCTION(SetDefence);
int Player::GetDefence()
{
	return defence;
}END_OF_FUNCTION(GetDefence);

//especialBar
void Player::SetEspecialBar(int especialBar)
{
	this->especialBar = especialBar;
}END_OF_FUNCTION(SetEspecialBar);
int Player::GetEspecialBar()
{
	return especialBar;
}END_OF_FUNCTION(GetEspecialBar);

//especialQuantity
void Player::SetEspecialQuantity(int especialQuantity)
{
	this->especialQuantity = especialQuantity;
}END_OF_FUNCTION(SetEspecialQuantity);
int Player::GetEspecialQuantity()
{
	return especialQuantity;
}END_OF_FUNCTION(GetEspecialQuantity);

//powTime
void Player::SetPowTime(int powTime)
{
	this->powTime = powTime;
}END_OF_FUNCTION(SetPowTime);
int Player::GetPowTime()
{
	return powTime;
}END_OF_FUNCTION(GetPowTime);

//pow
void Player::SetPow(int pow)
{
	this->pow = pow;
}END_OF_FUNCTION(SetPow);
bool Player::GetPow()
{
	return pow;
}END_OF_FUNCTION(GetPow);

//>>>>>>>>>>>>>>>>>>>>>>>>>>>> Validadores <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<


/**
 * Esse metodo vai ajudar a verificar se a ação atual pode ser cancelada
 * Recebe o valor da ação que se pretende cancelar a ação atual
 * 		ValidateAction(-5) - verifica se um comando de pulo já foi gerado
 */
bool Player::ValidateAction(int value)
{
	
	switch(value)
	{	
		case -5://verifica se já está fazendo alguma dessas ações quando o personagem vai pular
			if( action != 80 || action != 60 || action != 40 )
				return true;
			else return false;
		break;
		
		case 10: //Crouched
		case 20: //Walk
		case 30: //Walk Back
		case 40: //Weak Jump
			if( action == 0 )
				return true;
			else return false;
		break;
	
		case 60://Weak Frontal Diagonal Jump
			if( action == 0 || action == 20 || action == 100 )
				return true;
			else return false;
		break;
	
		case 80://Weak Back Diagonal Jump
			if( action == 0 || action == 30 )
				return true;
			else return false;
		break;
	
		case 100: //Run
			if( action == 0 || action == 20 )
				return true;
			else return false;
		break;
	
		case 110: //Jump Back
			if( action == 0 || action == 30 )
				return true;
			else return false;
		break;
	
		default:
			return false;
		break;
	}
	
	return true;
}END_OF_FUNCTION(ValidateAction);


/**
 * verifica se o a animação já foi iniciada
 */
/**
 * verifica se o a animação já foi iniciada
 */
bool Player::VerifyFrame( int value )
{
	switch( value )
	{
		case 0://idle
			if(frame != 0 && frame != 1 && frame != 2 
			&& frame != 3 && frame != 4 && frame != 5 && frame !=6 
			&& frame != 7 ) 
				return true;
		break;
		
		case 10://Crouching
		case 12://Raise Crouched - Crouching ao contrario
		case 40://Jump Start
		case 60://Jump Start
		case 80://Jump Start
			if(	frame != 40 && frame != 41 ) 
				return true;
		break;
		
		case 11://Crouched Idle
			//crouchedIdle
			if(frame != 68 && frame != 69 && frame != 70 && 
			frame != 71 && frame != 72 && frame != 73 ) 
				return true;
		break;
		
		case 20://Walk
			if( frame != 8 && frame != 9 && frame != 10 && 
			frame != 11 && frame != 12 && frame != 13 &&
			frame != 14 && frame != 15 && frame != 16 )
				return true;
		break;
		
		case 30://Walk Back
			if( frame != 17 && frame != 18 && frame != 19 && 
			frame != 20 && frame != 21 && frame != 22 &&
			frame != 23 && frame != 24 && frame != 25 )
				return true;
		break;
		
		case 41://Rising
		case 51://Rising
		case 61://Rising
		case 81://Rising
			if( frame != 42 )
				return true;
		break;
		
		case 42://End of Climp
		case 52://End of Climp
		case 62://End of Climp
		case 82://End of Climp
			if(	frame != 43 && frame != 44 ) 
				return true;
		break;
		
		case 43://Falling
		case 53://Falling
		case 63://Falling
		case 73://Falling
		case 83://Falling
		case 93://Falling
			if(	frame != 45 && frame != 46 ) 
				return true;
		break;
		
		case 44://Fall
		case 54://Fall
		case 64://Fall
		case 74://Fall
		case 84://Fall
		case 94://Fall
			if(	frame != 47 && frame != 48 && frame != 49 && 
			frame != 50 ) 
				return true;
		break;
		
		case 71://Strong Frontal Diagonal Jump
			if(	frame != 51 && frame != 52 && frame != 53 && 
			frame != 54 && frame != 55 && frame != 56 && 
			frame != 57 && frame != 58 && frame != 59 ) 
				return true;
		break;
		
		case 91://Strong Back Diagonal Jump
			if(	frame != 60 && frame != 61 && frame != 62 && 
			frame != 63 && frame != 64 && frame != 65 && 
			frame != 66 && frame != 67 ) 
				return true;
		break;
		
		case 100://Run
			if(	frame != 27 && frame != 28 && frame != 29 && 
			frame != 30 && frame != 31 && frame != 32 && 
			frame != 34 ) 
				return true;
		break;
		
		case 110://Jumping Back
			if(	frame != 35 && frame != 36 && frame != 37 ) 
				return true;
		break;
		
		case 111://Fall - depois de Jumping Back
			if(	frame != 38 && frame != 39 ) 
				return true;
		break;
		
		default: //ERROR
			frame = 0;
		break;
	}
	
	return false;
}END_OF_FUNCTION(VerifyFrame);

/*
*
*	a action crouche não terminou de ser implementada
*
*/







