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
	destroy_bitmap(*sprites);
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
	playerControl=true;			//indica se os comandos do player podem influenciar o personagem
	toRight=true;					//indica para que lado o personagem está virado
	jumpComand=false;				//comando para o personagem pular
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
	if(toRight && playerControl)//personagem virado para a direita
	{
	//com o personagem virado para a direita aqui ele se move para tras
		if(button00 && y >= CHAO)
		{
			//pulo para tras
			if( btTPress[0][8] - btTPress[0][7] < 150 && !antLoopJumpBack)
//btTPress[0][8] - btTPress[0][7] = se a difenreça de tempo entre o botão ter cido solto e pressionado é menor que 150 ms
			{
				antLoopJumpBack=true;
				speedX = -12;
				speedY = -10;
				ChangeAction(131);
			}
			//andando para tras
			else
			{
				speedX = -VELANDAR;
				ChangeAction(50);
			}
		}
		
	//com o personagem virado para a direita aqui ele se move para frente
		if(button02 && y >= CHAO)
		{
			//correndo para frente
			if( btTPress[2][8] - btTPress[2][7] < 150)
//btTPress[2][8] - btTPress[2][7] = se a difenreça de tempo entre o botão ter cido solto e pressionado é menor que 150 ms
			{
				 speedX = VELCORRIDA;
				 ChangeAction(120);
			}
			//andando para frente
			else 
			{
				speedX = VELANDAR;
				ChangeAction(40);
			} 
		}
		
	}
	else if(playerControl)//personagem virado para a esquerda
	{

	}
	
	
	//reset da variavel antLoopJumpBack
	if(antLoopJumpBack &&  toRight && !button00) antLoopJumpBack=false;
	if(antLoopJumpBack && !toRight && !button02) antLoopJumpBack=false;
	
	
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
	
	//cria o comando para o personagem pular
	if( button03 && y >= CHAO && !jumpComand ) 
	{
		jumpComand=true;
		playerControl = false;
		ChangeAction(10);
	}
	
	
	/*
	*	Aqui faz o personagem pular depois de  um delay entre o momento que o jogador pressinou o botão e o personagem 
	*	realizar o pulo para dar tempo do personagem realizar a animação de se preparar para pular
	*/
	if( jumpComand && frame == 41 && clock() - capturaTempo > TEF )
	{
		if( btTPress[3][7] - btTPress[3][8] > 120 || button03 )//pulo forte<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//btTPress[3][7] - btTPress[3][8] > 120 = se o botão ficou pressionado mais tempo que 120 ms
		{
			if( button00 || ( btTPress[3][8] - btTPress[0][8] >= -30 && btTPress[3][8] - btTPress[0][8] <= 30 ) )//pulo forte na diagonal com o botão direcional para tras
// se btTPress[3][8] - btTPress[0][8] (botão para cima e botão para tras) foi entre -30 e 30 (60 ms de diferença entre os botões terem sido pressionados)
			{
				if(toRight) {speedX = -10; ChangeAction(112); } //pulando na diagonal para tras
				else 		{speedX = 10;  ChangeAction(92);  } //pulando na diagonal para frente
				speedY = -20;
			}
			else if( button02 || ( btTPress[3][8] - btTPress[2][8] >= -30 && btTPress[3][8] - btTPress[2][8] <= 30 ) )//pulo forte na diagonal com o botão direcional para frente
// se btTPress[3][8] - btTPress[2][8] (botão para cima e botão para frente) foi entre -30 e 30 (60 ms de diferença entre os botões terem sido pressionados)
			{
				if(toRight) {speedX = 10;  ChangeAction(92);  } //pulando na diagonal para frente
				else 		{speedX = -10; ChangeAction(112); } //pulando na diagonal para tras
				speedY = -20;
			}
			else//pulo apenas na vertical
			{
				speedX = 0;
				speedY = -20;
				ChangeAction(72);
			}
		}
		else//pulo fraco<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
		{
			if( button00 || (btTPress[3][8] - btTPress[0][8] >= -30 && btTPress[3][8] - btTPress[0][8] <= 30) )//pulo fraco na diagonal com o botão direcional para tras
// se btTPress[3][8] - btTPress[0][8] (botão para cima e botão para tras) foi entre -30 e 30 (60 ms de diferença entre os botões terem sido pressionados)
			{
				if(toRight) {speedX = -10; ChangeAction(102); } //pulando na diagonal para tras
				else 		{speedX = 10;  ChangeAction(82);  } //pulando na diagonal para frente
				speedY = -15;
			}
			else if( button02 || (btTPress[3][8] - btTPress[2][8] >= -30 && btTPress[3][8] - btTPress[2][8] <= 30) )//pulo fraco na diagonal com o botão direcional para frente
// se btTPress[3][8] - btTPress[2][8] (botão para cima e botão para frente) foi entre -30 e 30 (60 ms de diferença entre os botões terem sido pressionados)
			{
				if(toRight) {speedX = 10;  ChangeAction(82); }  //pulando na diagonal para frente
				else 		{speedX = -10; ChangeAction(102); } //pulando na diagonal para tras
				speedY = -15;
			}
			else//pulo apenas na vertical
			{
				speedX = 0;
				speedY = -15;
				ChangeAction(62);
			}
		}
		jumpComand=false;
	}
	
	speedY+=GRAVIDADE;//ação da gravidade
	
	if( y >= CHAO && speedY > 0)//colisão com o chão
	{
		speedY = 0;
		y=CHAO;
	}
	
	y+=speedY;//movimenta o personagem
	
}END_OF_FUNCTION(VertivalMove)


//>>>>>>>>>>>>>>>>>>>>>>>>>>>> Validadores <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<


/**
 * Esse metodo vai ajudar a verificar se a ação atual pode ser cancelada
 * Recebe o valor da ação que se pretende cancelar a ação atual
 */
bool Player::ValidateAction(int value)
{
	switch( value )
	{
		
		case 10:
			if( action == 0 || action == 40 || action == 50 || action == 120 ) return true;
			else return false;
		break;
		
		case 40:
			if( action == 0 || action == 50 || action == 120 ) return true;
			else return false;
		break;
	
		case 50:
			if( action == 0 || action == 40 || action == 120 ) return true;
			else return false;
		break;
	
		case 120:
			if( action == 0 || action == 40 || action == 50 ) return true;
			else return false;
		break;
	
	}
	
	return false;
}


/**
 * verifica se o a animação já foi iniciada
 */
bool Player::VerifyFrame( int value )
{
	//animação idle
	if( value == 0 && frame != 0 && frame != 1 && frame != 2 
	&& frame != 3 && frame != 4 && frame != 5 && frame !=6 
	&& frame != 7 ) return true;
	
	if( value == 10 && frame != 68 && frame != 69 && frame != 70
	&& frame != 71 && frame != 72 && frame !=73 ) return true;
	
	//animação crouching && raiseCrouched
	if( ( value == 20 || value == 30 ) && frame != 40 && frame != 41 ) return true;
	
	//animação walk
	if( value == 40 && frame != 8 && frame != 9 && frame != 10 
	&& frame != 11 && frame != 12 && frame != 13 && frame !=14 
	&& frame != 15 && frame != 16) return true;
	
	//animação walkBack
	if( value == 50 && frame != 17 && frame != 18 && frame != 19 
	&& frame != 20 && frame != 21 && frame != 22 && frame != 23 
	&& frame != 24 && frame != 25) return true;
	
	//animação jumpDelay
	if( ( value == 61 || action == 71 || action == 81 || action == 101 )
	&& frame != 40 && frame != 41 ) return true;
	
	//animação rising
	if( ( value == 62 || action == 72 || action == 82 || action == 102 )
	&& frame != 42 ) return true;
	
	//animação endOfClimp
	if( ( value == 63 || action == 73 || action == 83 || action == 103 )
	&& frame != 43 && frame != 44 ) return true;

	//animação falling
	if( ( value == 64 || action == 74 || action == 84 || action == 104 )
	&& frame != 45 && frame != 46 ) return true;

	//animação fall
	if( ( value == 65 || action == 75 || action == 85 || action == 105 )
	&& frame != 47 && frame != 48 && frame != 49 && frame != 50 ) return true;
	
	//animação strongFrontalDiagonalJump
	if( value == 92 && frame != 51 && frame !=  52 && frame != 53 
	&& frame != 54 && frame != 55 && frame != 56 && frame != 57 
	&& frame != 58 && frame != 59 ) return true;
	
	//animação strongBackDiagonalJump
	if( value == 112 && frame != 60 && frame != 61 && frame != 62
	&& frame !=63 && frame != 64 && frame != 65 && frame != 66 
	&& frame != 67 ) return true;

	//animação run
	if( value == 120 && frame != 26 && frame != 27 && frame != 28
	&& frame != 29 && frame != 30 && frame != 31 && frame != 32 
	&& frame != 33 && frame != 34 ) return true;
	
	//animação jumpingBack
	if( value == 131 && frame != 35 && frame != 36 && frame != 37 ) return true;
	
	//animação fallDelay-jumpingBack
	if( value == 132 && frame != 38 && frame != 39 ) return true;
	
	return false;
}


//>>>>>>>>>>>>>>>>>>>>>>>>>>>> Motor de interpretação <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<


/**
 * Esse metodo é responsavel por imterpletar as situações em que o personagem se encontra e mudar os valores de action
 */
void Player::InterpretationEngine()
{
	//walk - walkBack - run
	if( speedX == 0 && VerifyFrame( 0 ) && ( action == 40 || action == 50 || action == 120 ) )
	{
		action = 0;
		startAnimation = false;
	}
	
	
	//jumpBack
	if( action == 131 && y >= CHAO )//animação do personagem pulando para tras em quando está no ar
	{
		ChangeAction(132);
		capturaTempoParaOUltimoFrame = clock();
		//if( VerifyFrame( 132 ) ) startAnimation = false;
	}
	if( action == 132 )//animação do personagem caindo no chão e se recuperando da queda
	{
		if( (button00 && toRight) || (button02 && !toRight) )//o personagem continua andando para tras
		{
			ChangeAction(50);
		}
		if(speedX == 0 && capturaTempoParaOUltimoFrame > TEF )//o personagem parou de andar para tras
		{
			ChangeAction(0);
		}
	}
	
	
	//jump
	if( ( action == 62 || action == 72 || action == 82 || action == 102 ) && speedY > - 3)//rising
	{
		//aqui deve verificar se a velocidade de subida está acabando e mudar para a animação endOfClimp
		if( action == 62  ) ChangeAction(63);
		if( action == 72  ) ChangeAction(73);
		if( action == 82  ) ChangeAction(83);
		if( action == 102 ) ChangeAction(103);
	}
	if( ( action == 63 || action == 73 || action == 83 || action == 103 ) && speedY > 5)//endOfClimp
	{
		//aqui deve verificar se a velocidade de descida já está alta e alterar para a animação falling
		if( action == 63  ) ChangeAction(64);
		if( action == 73  ) ChangeAction(74);
		if( action == 83  ) ChangeAction(84);
		if( action == 103 ) ChangeAction(104);
	}
	if( ( action == 64 || action == 74 || action == 84 || action == 104 ) && y >= CHAO)//falling
	{
		//aqui deve verificar se o personagem encostou no chão e alterar para a animação fall
		if( action == 64  ) ChangeAction(65);
		if( action == 74  ) ChangeAction(75);
		if( action == 84  ) ChangeAction(85);
		if( action == 104 ) ChangeAction(95);
	}
	if( ( action == 65 || action == 75 || action == 84 || action == 104 ) )//fall
	{
		//aqui a animação deve ser completamente executada e depois mudar para a animação idle
		if( frame == 50 ) capturaTempoParaOUltimoFrame = clock();
		if( frame == 50 && capturaTempoParaOUltimoFrame > TEF-20 )
		{
			ChangeAction(0);
		}
	}
	

	//strongFrontalDiagonalJump
	if( action == 92 )//strongFrontalDiagonalJump
	{
		//essa animação deve rodar até o ultimo frame e entao mudar para a animação falling
		if( frame == 59 ) capturaTempoParaOUltimoFrame = clock();
		if( frame == 59 && capturaTempoParaOUltimoFrame > TEF-20)
		{
			ChangeAction(64);
		}
	}
	
	
	//strongBackDiagonalJump
	if( action == 112 )//strongFrontalDiagonalJump
	{
		//essa animação deve rodar até o ultimo frame e entao mudar para a animação falling
		if( frame == 67 ) capturaTempoParaOUltimoFrame = clock();
		if( frame == 67 && capturaTempoParaOUltimoFrame > TEF-20)
		{
			ChangeAction(64);
		}
	}
	
	
	//weak jump - strong jump ISSO SÓ ESTÀ QUEBRANDO UM GALHO
	if( speedY == 0 && y >= CHAO &&  VerifyFrame( 0 ) && ( action == 82 ||action == 92 || action == 102 || action == 112 ) )
	{
		ChangeAction(0);
	}
	
	
	//crouched
	if( button01 && action != 10 && ValidateAction( 10 ) )//crouching
	{
		ChangeAction(20);
	}
	if(button01 && action == 20 && frame == 41)//crouchedIdle
	{
		ChangeAction(10);
	}
	if( !button01 && action == 10 )//raiseCrouched
	{
		ChangeAction(30);
	}
	if( !button01 && action == 30 && frame == 40)//idle
	{
		ChangeAction(0);
	}
	

}END_OF_FUNCTION(InterpretationEngine);


//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Animações <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<


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
		
		case 10://crouchedIdle
			Anim01();
		break;
	
		case 20://crouching
			Anim02();
		break;
			
		case 30://raiseCrouched
			Anim03();
		break;
	
		case 40://walk
			Anim04();
		break;
		
		case 50://walkBack
			Anim05();
		break;
	
		//jumpDelay
		case 61:
		case 71:
		case 81:
		case 91:
		case 101:
		case 111:
			Anim02();
		break;
	
		//rising
		case 62:
		case 72:
		case 82:
		case 102:
			Anim072();
		break;
		
		//endOfClimp 
		case 63:
		case 73:
		case 83:
		case 103:
			Anim073();
		break;
	
		//falling
		case 64:
		case 74:
		case 84:
		case 104:
			Anim074();
		break;
	
		//fall
		case 65:
		case 75:
		case 85:
		case 95:
		case 105:
		case 115:
			Anim075();
		break;
	
		case 92://strongFrontalDiagonalJump
			Anim092();
		break;
	
		case 112://strongBackDiagonalJump
			Anim112();
		break;
	
		case 120://run
			Anim12();
		break;
		
		case 131://jumpingBack
			Anim131();
		break;
	
		case 132://fallDelay-jumpingBack
			Anim132();
		break;
	
		default:
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

void Player::Anim01()//crouchedIdle
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
}END_OF_FUNCTION(anim01);

void Player::Anim02()//crouching 
{
	if( !startAnimation )//frame 0
	{ frame = 40; startAnimation = true; capturaTempo = clock(); }
	if(startAnimation)
	{
		if( frame == 40 && clock() - capturaTempo > TEF )//frame 1
		{ frame = 41; capturaTempo = clock(); }
		
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

void Player::Anim072()//rising 
{
	if( !startAnimation )//frame 0
	{ frame = 42; startAnimation = true;capturaTempo = clock(); }

}END_OF_FUNCTION(anim072);

void Player::Anim073()//endOfClimp
{
	if( !startAnimation )//frame 0
	{ frame = 43; startAnimation = true; capturaTempo = clock(); }
	if(startAnimation)
	{
		if( frame == 43 && clock() - capturaTempo > TEF )//frame 1
		{ frame = 44; capturaTempo = clock(); }
	}
}END_OF_FUNCTION(anim073);

void Player::Anim074()//falling
{
	if( !startAnimation )//frame 0
	{ frame = 45; startAnimation = true; capturaTempo = clock(); }
	if(startAnimation)
	{
		if( frame == 45 && clock() - capturaTempo > TEF+50 )//frame 1
		{ frame = 46; capturaTempo = clock(); }
	}
}END_OF_FUNCTION(anim074);

void Player::Anim075()//fall
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
}END_OF_FUNCTION(anim075);

void Player::Anim092()//strongFrontalDiagonalJump
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
}END_OF_FUNCTION(anim092);

void Player::Anim112()//strongBackDiagonalJump
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
}END_OF_FUNCTION(Anim112);

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

void Player::Anim131()//jumpingBack
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
}END_OF_FUNCTION(Anim131);

void Player::Anim132()//fallDelay-jumpingBack
{
	if( !startAnimation )//frame 0
	{ frame = 38; startAnimation = true; capturaTempo = clock(); }
	if(startAnimation)
	{
		if( frame == 38 && clock() - capturaTempo > TEF )//frame 1
		{ frame = 39; capturaTempo = clock(); }
	}
}END_OF_FUNCTION(Anim132);


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



/*
*	Observação a variavel playerControl é um quebra galho até a implementação da função ValidateAction
*
*	Necessidade de implementação
*		Terminar de implementar playerControl
*
*	BUGS
*		quando o personagem está dando um pulo para tras é possivel canselar a animação e fazer o personagem correr para frente (possiveis outros cancelamentos)
*			enquando o personagem estiver pulando para tras mudar o status de playerControl (não deu certo)
*			BUG FRENTE TRAS FRENTE O PERSONAGEM PULA E ANDA PARA FRENTE
*
*/







