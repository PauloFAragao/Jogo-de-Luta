#include <allegro.h>
#include "Player.h"


#define TEF 120					//tempo entre os frames
#define GRAVIDADE 0.7			//gravidade global
#define CHAO 80					//posi��o do ch�o

#define	WALKSPEED 7				//velocidade que o personagem vai andar VELANDAR
#define RUNSPEED 13				//velocidade que o personagem vai correr RUNSPEED
#define WEAKJUMPSTRENGTH 17		//for�a do pulo fraco
#define STRONGJUMPSTRENGTH 25	//for�a do pulo forte

#define MINSCENARYWIDTH -290	  //posi��o do fim do cenario a esquerda
#define MAXSCENARYWIDTH 1242	  //posi��o do fim do cenario a direita


//construtor
Player::Player() { StartAttributes(); }


//destrutor
Player::~Player()
{
	destroy_bitmap( *sprites );
}


/**
 * M�todo que inicializa as variaveis
 */
void Player::StartAttributes()
{
	
	x=0;							//posi��o em X do player
	y=CHAO;							//posi��o em Y do player
	speedX=0;						//velocidade em X do player
	speedY=0; 						//velocidade em Y do player
	action=0;						//define a a��o que o player est� executando
	capturaTempoParaOUltimoFrame=0;	//para todas as vezes que o ultimo frame precisa ser renderizado por algum tempo mais n�o pode ser controlado dentro da fun��o especifica da anima��o
	toRight=true;					//indica para que lado o personagem est� virado
	button00=false;					//esquerda
	button01=false;					//baixo
	button02=false;					//direita
	button03=false;					//cima
	button04=false;					//soco fraco
	button05=false;					//soco forte
	button06=false;					//chute fraco
	button07=false;					//chute forte
	bt0TimeCapture=false;			//variavel para captura de tempo do bot�o 00
	bt1TimeCapture=false;			//variavel para captura de tempo do bot�o 01
	bt2TimeCapture=false;			//variavel para captura de tempo do bot�o 02
	bt3TimeCapture=false;			//variavel para captura de tempo do bot�o 03
	bt4TimeCapture=false;			//variavel para captura de tempo do bot�o 04
	bt5TimeCapture=false;			//variavel para captura de tempo do bot�o 05
	bt6TimeCapture=false;			//variavel para captura de tempo do bot�o 06
	bt7TimeCapture=false;			//variavel para captura de tempo do bot�o 07
	
	antLoopBT0 = true;
	antLoopBT2 = true;
	
	
	for (int a=0; a<8; a++)//iniciando o vetor de tempos
	{
		for(int b=0; b<10; b++)
		{
			btTPress[a][b]=0;
		}
	}
	
	
}END_OF_FUNCTION(StartAttributes)


/**
 * Esse metodo faz a chamada dos outros metodos importantes da classe player
 */
void Player::PlayerRoutine()
{
	//captura os imputs do plauer
	TrackImputs();
	
	//movimenta o player na horizontal
	HorizontalMove();
	
	//movimenta o player na vertical
	VerticalMove();
		
}END_OF_FUNCTION(PlayerRoutine)


/**
 * Esse metodo escreve os tempos em que o jogador pressiona e solta os bot�es.
 * Nos espa�os com valores pares s�o escritos os tempos em que o jogador pressionou os bot�es
 * Nos espa�os com valores impares s�o escritos os tempos em que o jogador soltou os bot�es.
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
 * Esse metodo muda o valor da a��o que o personagem est� executando e altera o valor de startAnimation
 * se a anima��o referente a a��o ainda n�o estiver sendo executada.
 */
void Player::ChangeAction(int value)
{
	action = value;	
	if( VerifyFrame( value ) ) startAnimation = false;
}


/**
 * Esse metodo captura os imputs do player e os tempos em que o jogador pressiona e solta os bot�es.
*/
void Player::TrackImputs()
{
	//bot�o 0
	if(key[KEY_A] && !bt0TimeCapture)//captura o tempo em que o bot�o foi pressionado
	{
		button00 = true;
		bt0TimeCapture=true;
		writeOnBtTmPress(0,true);
	}
	if(bt0TimeCapture && !key[KEY_A])//captura o tempo em que o bot�o foi solto
	{
		button00 = false;
		bt0TimeCapture=false;
		writeOnBtTmPress(0,false);
	}
	
	//bot�o 1
	if(key[KEY_S] && !bt1TimeCapture)//captura o tempo em que o bot�o foi pressionado
	{
		button01 = true;
		bt1TimeCapture=true;
		writeOnBtTmPress(1,true);
	}
	if(bt1TimeCapture && !key[KEY_S])//captura o tempo em que o bot�o foi solto
	{
		button01 = false;
		bt1TimeCapture=false;
		writeOnBtTmPress(1,false);
	}
	
	//bot�o 2
	if(key[KEY_D] && !bt2TimeCapture)//captura o tempo em que o bot�o foi pressionado
	{
		button02 = true;
		bt2TimeCapture=true;
		writeOnBtTmPress(2,true);
	}
	if(bt2TimeCapture && !key[KEY_D])//captura o tempo em que o bot�o foi solto
	{
		button02 = false;
		bt2TimeCapture=false;
		writeOnBtTmPress(2,false);
	}
	
	//bot�o 3
	if(key[KEY_W] && !bt3TimeCapture)//captura o tempo em que o bot�o foi pressionado
	{
		button03 = true;
		bt3TimeCapture=true;
		writeOnBtTmPress(3,true);
	}
	if(bt3TimeCapture && !key[KEY_W])//captura o tempo em que o bot�o foi solto
	{
		button03 = false;
		bt3TimeCapture=false;
		writeOnBtTmPress(3,false);
	}
	
	//bot�o 4
	if(key[KEY_U] && !bt4TimeCapture)//captura o tempo em que o bot�o foi pressionado
	{
		button04 = true;
		bt4TimeCapture=true;
		writeOnBtTmPress(4,true);
	}
	if(bt4TimeCapture && !key[KEY_U])//captura o tempo em que o bot�o foi solto
	{
		button04 = false;
		bt4TimeCapture=false;
		writeOnBtTmPress(4,false);
	}
	
	//bot�o 5
	if(key[KEY_J] && !bt5TimeCapture)//captura o tempo em que o bot�o foi pressionado
	{
		button05 = true;
		bt5TimeCapture=true;
		writeOnBtTmPress(5,true);
	}
	if(bt5TimeCapture && !key[KEY_J])//captura o tempo em que o bot�o foi solto
	{
		button05 = false;
		bt5TimeCapture=false;
		writeOnBtTmPress(5,false);
	}
	
	//bot�o 6
	if(key[KEY_I] && !bt6TimeCapture)//captura o tempo em que o bot�o foi pressionado
	{
		button06 = true;
		bt6TimeCapture=true;
		writeOnBtTmPress(6,true);
	}
	if(bt6TimeCapture && !key[KEY_I])//captura o tempo em que o bot�o foi solto
	{
		button06 = false;
		bt6TimeCapture=false;
		writeOnBtTmPress(6,false);
	}
	
	//bot�o 7
	if(key[KEY_K] && !bt7TimeCapture)//captura o tempo em que o bot�o foi pressionado
	{
		button07 = true;
		bt7TimeCapture=true;
		writeOnBtTmPress(7,true);
	}
	if(bt7TimeCapture && !key[KEY_K])//captura o tempo em que o bot�o foi solto
	{
		button07 = false;
		bt7TimeCapture=false;
		writeOnBtTmPress(7,false);
	}
	
}END_OF_FUNCTION(trackImputs);


/**
 * Logica da movimenta��o do player na horizontal
 */
void Player::HorizontalMove()
{

//Verifica��o dos imputs
	if( y >= CHAO )
	{
		if( button02 && antLoopBT2 )
		{
			antLoopBT2 = false;
			if( btTPress[2][8] - btTPress[2][7] < 100 )
			{
				//correndo
				if( toRight && ValidateAction(100) )
					ChangeAction(100);
			
				//pulando para tras
				else if( !toRight && ValidateAction(110) )
				{
					speedX = RUNSPEED + 2 ;
					speedY = -10;
					ChangeAction(110);
				}
			
			}
			else if( toRight && ValidateAction(20) ) //andando
				ChangeAction(20);
				
			else if( !toRight && ValidateAction(30) ) //andando para tras
				ChangeAction(30);
			
			else antLoopBT2 = true;
		}

		if( button00 && antLoopBT0 )
		{
			antLoopBT0 = false;
			if( btTPress[0][8] - btTPress[0][7] < 150 )
			{
				
				//correndo
				if( !toRight && ValidateAction(100) ) 
					ChangeAction(100);
				
				//pulando para tras
				else if( toRight && ValidateAction(110) )
				{
					speedX = -( RUNSPEED + 2 ) ;
					speedY = -10;
					ChangeAction(110);
				}
			}
			else if( !toRight && ValidateAction(20) ) //andando
				ChangeAction(20);
				
			else if( toRight && ValidateAction(30) ) //andando para tras
				ChangeAction(30);
			
			else antLoopBT0 = true;
		}
		
	}

//modifica��o da velocidade de acordo com a a��o
	if( toRight )
	{
		//movimentar da esquerda para a direita
		if( button00 && action == 30) speedX = -WALKSPEED;
		
		//movimentar da direita para a esquerda
		if( button02 )
		{
			if( action == 100 ) speedX =  RUNSPEED;
			if( action == 20  ) speedX =  WALKSPEED;
		}
	}
	else
	{
		//movimentar da esquerda para a direita
		if( button00 )
		{
			if( action == 100 ) speedX = -RUNSPEED;
			if( action == 20  ) speedX = -WALKSPEED;
		}
	
		//movimentar da direita para a esquerda
		if( button02 && action == 30 )speedX =  WALKSPEED;
	}

	if( !button00 || !button02 )
	{
		if( y >= CHAO && speedX < 0 )
		{
			speedX += 0.8;
			if( speedX > 0 ) speedX =0;
		}
		if( y >= CHAO && speedX > 0 )
		{
			speedX -= 0.8;
			if( speedX < 0 ) speedX =0;
		}
	}
	
//alterando os valores das variaveis para evitar loop
	if( !antLoopBT0 && !button00 ) antLoopBT0 = true;

	if( !antLoopBT2 && !button02 ) antLoopBT2 = true;

//movimenta��o do personagem (verificando os limites do cenario)
	if( x + speedX > MAXSCENARYWIDTH ) 	    
		x = MAXSCENARYWIDTH;
	
	else if( x + speedX < MINSCENARYWIDTH ) 
		x = MINSCENARYWIDTH;
	
	else 						           
		x += speedX;
	
}END_OF_FUNCTION(HorizontalMove)


/**
 * logica de movimenta��o do player na vertical
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
	//btTPress[3][7] - btTPress[3][8] > 120 = se o bot�o ficou pressionado mais tempo que 120 ms
			{
				
				//pulo forte na diagonal com o bot�o direcional para tras
				if( button00 || ( btTPress[3][8] - btTPress[0][8] >= -30 && btTPress[3][8] - btTPress[0][8] <= 30 ) )
	// se btTPress[3][8] - btTPress[0][8] (bot�o para cima e bot�o para tras) foi entre -30 e 30 (60 ms de diferen�a entre os bot�es terem sido pressionados)
				{
					if(toRight) { speedX = -RUNSPEED; ChangeAction(91); } //pulando na diagonal para tras
					else 		{ speedX = RUNSPEED;  ChangeAction(71); } //pulando na diagonal para frente
					speedY = -STRONGJUMPSTRENGTH;
				}
				
				//pulo forte na diagonal com o bot�o direcional para frent
				else if( button02 || ( btTPress[3][8] - btTPress[2][8] >= -30 && btTPress[3][8] - btTPress[2][8] <= 30 ) )
	// se btTPress[3][8] - btTPress[2][8] (bot�o para cima e bot�o para frente) foi entre -30 e 30 (60 ms de diferen�a entre os bot�es terem sido pressionados)
				{
					if(toRight) {speedX = RUNSPEED;  ChangeAction(71);  } //pulando na diagonal para frente
					else 		{speedX = -RUNSPEED; ChangeAction(91); } //pulando na diagonal para tras
					speedY = -STRONGJUMPSTRENGTH;
				}
				
				else//pulo apenas na vertical
				{
					speedX = 0;
					speedY = -STRONGJUMPSTRENGTH;
					ChangeAction(51);
				}
				
			}
			
			else//pulo fraco
			{
				   
				if( action == 40 )//pulo normal
				{
					//verifica se depois que o comando de pulo foi criado houve um input em tempo proxido do bot�o 0
					if( button00 || ( btTPress[0][8] - btTPress[3][8] <= 30 ) )
					{
						if( toRight )	ChangeAction(80);
						else			ChangeAction(60);
					}
				
					//verifica se depois que o comando de pulo foi criado houve um input em tempo proxido do bot�o 2
					if( button00 || ( btTPress[2][8] - btTPress[3][8] <= 30 ) )
					{
						if( toRight )	ChangeAction(60);
						else			ChangeAction(80);
					}
					
					speedX = 0;
					speedY = -WEAKJUMPSTRENGTH;
					ChangeAction(41);
				}
				
				if( action == 60 )// pulo fraco na diagonal para frente
				{
					speedX = 10;
					speedY = -WEAKJUMPSTRENGTH-5;
					ChangeAction(61);
				}
				
				if( action == 80 )// pulo fraco na diagonal para tras
				{
					speedX = -10;
					speedY = -WEAKJUMPSTRENGTH-5;
					ChangeAction(81);
				}
				
			}
			
		}
	}
	
	
	speedY+=GRAVIDADE;//a��o da gravidade
	
	
	if( y >= CHAO && speedY > 0)//colis�o com o ch�o
	{
		speedY = 0;
		y=CHAO;
	}
	
	
	y+=speedY;//movimenta o personagem
	
	
}END_OF_FUNCTION(VertivalMove)


//>>>>>>>>>>>>>>>>>>>>>>>>>>>> Validadores <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<


/**
 * Esse metodo vai ajudar a verificar se a a��o atual pode ser cancelada
 * Recebe o valor da a��o que se pretende cancelar a a��o atual
 * 		ValidateAction(-5) - verifica se um comando de pulo j� foi gerado
 */
bool Player::ValidateAction(int value)
{
	
	switch(value)
	{	
		case -5://verifica se j� est� fazendo alguma dessas a��es quando o personagem vai pular
			if( action != 80 || action != 60 || action != 40 )
				return true;
			else return false;
		break;
		
		case 10: //Crouched
		case 40: //Weak Jump
			if( action == 0 )
				return true;
			else return false;
		break;
	
		case 20: //Walk
			if( action == 0 || action == 30 || action == 101 )
				return true;
			else return false;
		break;
	
		case 30: //WalkBack
			if( action == 0 || action == 20 || action == 100 || action == 101 )
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
			if( action == 0 || action == 20 || action == 101  )
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
 * verifica se o a anima��o j� foi iniciada
 */
bool Player::VerifyFrame(int value)
{

	switch( value )
	{
		case 0://idle
			if( frame < idle[0] || frame > idle[1] )
				return true;
		break;
		
		case 10://Crouching
		case 12://Raise Crouched - Crouching ao contrario
		case 40://Jump Start
		case 60://Jump Start
		case 80://Jump Start
			if(	frame < crouching[0] || frame > crouching[1] )
				return true;
		break;
		
		case 11://Crouched Idle
			if( frame < crouchedIdle[0] || frame > crouchedIdle[1] )
				return true;
		break;
		
		case 20://Walk
			if( frame < walk[0] || frame > walk[1]  )
				return true;
		break;
		
		case 30://Walk Back
			if( frame < walkBack[0] || frame > walkBack[1] )
				return true;
		break;
		
		case 41://Rising
		case 51://Rising
		case 61://Rising
		case 81://Rising
			if( frame < rising[0] ||  frame > rising[1] )
				return true;
		break;
		
		case 42://End of Climp
		case 52://End of Climp
		case 62://End of Climp
		case 82://End of Climp
			if(	frame < endOfClimp[0] || frame > endOfClimp[1] )
				return true;
		break;
		
		case 43://Falling
		case 53://Falling
		case 63://Falling
		case 73://Falling
		case 83://Falling
		case 93://Falling
			if(	frame < falling[0] || frame > falling[1] )
				return true;
		break;
		
		case 44://Fall
		case 54://Fall
		case 64://Fall
		case 74://Fall
		case 84://Fall
		case 94://Fall
			if(	frame < fall[0] || frame > fall[1] )
				return true;
		break;
		
		case 71://Strong Frontal Diagonal Jump
			if(	frame < strongFrontalDJ[0] || frame > strongFrontalDJ[1] )
				return true;
		break;
		
		case 91://Strong Back Diagonal Jump
			if(	frame < strongBackDJ[0] || frame > strongBackDJ[1] )
				return true;
		break;
		
		case 100://Run
			if(	frame < run[0] || frame > run[1] )
				return true;
		break;
		
		case 110://Jumping Back
			if(	frame < jumpBack[0] || frame > jumpBack[1]) 
				return true;
		break;
		
		case 111://Fall - depois de Jumping Back
			if(	frame < jumpBackFall[0] || frame > jumpBackFall[1] ) 
				return true;
		break;
		
		case 101://slide
			if(	frame < slide[0] || frame > slide[1] ) 
				return true;
		break;
		
		default: //ERROR
			frame = 0;
		break;
	}
	
	return false;
}END_OF_FUNCTION(VerifyFrame);


/*
* BUG DA CORRIDA - pressionar varias vezes para frente faz o personagem continuar correndo ao invez de trocar de corrida para andar
* 	o bug acontece por que action passa de 100 para 101 quando o jogador solta o bot�o, quando volta a pressinar de 101 passa para 20
*	e ent�o se verifica que btTPress[2][8] - btTPress[2][7] � verdeadeiro e pasa de 20 para 101
* 
*/










