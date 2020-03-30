#include <allegro.h>
#include "Player.h"


#define TEF 120					//tempo entre os frames
#define GRAVIDADE 0.7			//gravidade global
#define CHAO 160				//posição do chão

#define	WALKSPEED 5				//velocidade que o personagem vai andar VELANDAR
#define RUNSPEED 10				//velocidade que o personagem vai correr RUNSPEED
#define WEAKJUMPSTRENGTH 17		//força do pulo fraco
#define STRONGJUMPSTRENGTH 25	//força do pulo forte

#define MINSCENARYWIDTH -200	//posição do fim do cenario a esquerda
#define MAXSCENARYWIDTH 825	  	//posição do fim do cenario a direita


//construtor
Player::Player( int playerNumber )
{
	this->playerNumber = playerNumber;
	StartAttributes(); 
}

//destrutor
Player::~Player()
{
	destroy_bitmap( **sprites );
}


/**
 * Método que inicializa as variaveis
 */
void Player::StartAttributes()
{
	
	y=CHAO;							//posição em Y do player
	speedX=0;						//velocidade em X do player
	speedY=0; 						//velocidade em Y do player
	action=0;						//define a ação que o player está executando
	
	if( playerNumber == 1 )
	{
		toRight=true;				//indica para que lado o personagem está virado
		x=-50;						//posição em X do player
	}
	else
	{
		toRight=false;				//indica para que lado o personagem está virado
		x=680;						//posição em X do player
	}
	
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

	shild = 200;					//quantidade de pontos de defesa atual do personagem
	especialBar = 0;				//quantidade de pontos de especial
	especialQuantity = 0;			//quantos pontos de especial o personagem tem
	powTime = 0;					//tempo restante da barra quando o jogador esroura uma barra
	pow = false;					//se o jogador estourou uma barra
	
	attacking=false;				//indica que o personagema está atacando
	takingDmg=false;				//indica que o personagem foi atacado enquanto estava na defesa
	opponentAttacking=false;		//indica que o oponente está atacando
	
	antLoopBT0 = true;
	antLoopBT2 = true;
	
	for (int a=0; a<8; a++)//iniciando o vetor de tempos
	{
		for(int b=0; b<10; b++)
		{
			btTPress[a][b]=0;
		}
	}
	
	
}END_OF_FUNCTION(StartAttributes);


/**
 * Esse metodo faz a chamada dos outros metodos importantes da classe player
 */
void Player::PlayerRoutine( bool flipCharacter )
{
		//TEMPORARIO
		if( key[ KEY_0_PAD ]  ) opponentAttacking = true;
		if( !key[ KEY_0_PAD ] ) opponentAttacking = false;
		
		if( key[ KEY_1_PAD ]  ) takingDmg = true;
		
		if( key[KEY_MINUS]  ) 
		{
			//lifePoints -=25;
			//shildPoints -=5;
			especialBar -=1;
			//powTime -= 100;
		}
		if( key[KEY_EQUALS] ) 
		{
			//lifePoints +=25;
			//shildPoints +=5;
			especialBar +=1;
			//powTime += 100;
		}
		//TEMPORARIO
		
	//captura os imputs do plauer
	TrackImputs();
	
	//movimenta o player na horizontal
	HorizontalMove();
	
	//movimenta o player na vertical
	VerticalMove();
	
	//motor de imterpletação	
	InterpretationWalkWalkBackRun();
	InterpretationJumpBack();
	InterpretationJump();
	InterpretationStrongDiagonalJump();
	InterpretationCrouch();
	InterpretationDefence();
	InterpretationRolling();
	InterpretationChangeSide( flipCharacter );
	SpecialControl();
		
}END_OF_FUNCTION(PlayerRoutine);


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
}END_OF_FUNCTION(ChangeAction);


/**
 * Logica da movimentação do player na horizontal
 */
void Player::HorizontalMove()
{

//Verificação dos imputs
	if( y >= CHAO )
	{
		if( button02 && antLoopBT2 )
		{
			
			if( btTPress[2][8] - btTPress[2][7] < 100 )
			{
				//correndo
				if( toRight && ValidateAction(100) )
					ChangeAction(100);
			
				//pulando para tras
				else if( !toRight && ValidateAction(110) )
				{
					antLoopBT2 = false;
					speedX = RUNSPEED + 2 ;
					speedY = -10;
					ChangeAction(110);
				}
			
			}
			else if( toRight && ValidateAction(20) ) //andando
				ChangeAction(20);
				
			else if( opponentAttacking && !toRight )//ação de se defender
			{
				if( ValidateAction(120) )//se o personagem está de pé
					ChangeAction(120);
				if( ValidateAction(130) )//se o personagem está agachado
					ChangeAction(130);
			}
			
			else if( !toRight && ValidateAction(30) && !opponentAttacking) //andando para tras
				ChangeAction(30);
			
		}

		if( button00 && antLoopBT0 )
		{
			
			if( btTPress[0][8] - btTPress[0][7] < 150 )
			{
				
				//correndo
				if( !toRight && ValidateAction(100) )
					ChangeAction(100);
				
				//pulando para tras
				else if( toRight && ValidateAction(110) )
				{
					antLoopBT0 = false;
					speedX = -( RUNSPEED + 2 ) ;
					speedY = -10;
					ChangeAction(110);
				}
			}
			else if( !toRight && ValidateAction(20) ) //andando
				ChangeAction(20);
				
			else if( opponentAttacking && toRight )//ação de se defender
			{
				if( ValidateAction(120) )//se o personagem está de pé
					ChangeAction(120);
				if( ValidateAction(130) )//se o personagem está agachado
					ChangeAction(130);
			}
			
			else if( toRight && ValidateAction(30) ) //andando para tras
				ChangeAction(30);
			
		}
		
	}

	//Rolamento
	if( button04 && button06 )
	{
		
		if( toRight && button00 && ValidateAction(150) )//Back Rolling
		{
			ChangeAction(150);
		}
		else if( !toRight && button02 && ValidateAction(150))//Back Rolling
		{
			ChangeAction(150);
		}
		else if( ValidateAction(140) )//Front Rolling
		{
			ChangeAction(140);
		}
		
	}
	
//modificação da velocidade de acordo com a ação
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
		
		//rolamento
		if( action == 140 ) speedX = RUNSPEED;
		if( action == 150 ) speedX = -RUNSPEED;
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
		
		//rolamento
		if( action == 140 ) speedX = -RUNSPEED;
		if( action == 150 ) speedX = RUNSPEED;
	}

//desaceleração
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

//movimentação do personagem (verificando os limites do cenario)
	if( x + speedX > MAXSCENARYWIDTH ) 	    
		x = MAXSCENARYWIDTH;
	
	else if( x + speedX < MINSCENARYWIDTH ) 
		x = MINSCENARYWIDTH;
	
	else 						           
		x += speedX;
	
}END_OF_FUNCTION(HorizontalMove);


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
		if( frame == crouching[1] && clock() - capturaTempo > TEF )
		{
			if( btTPress[3][9] - btTPress[3][8] > 120 || button03 )//pulo forte
	//btTPress[3][7] - btTPress[3][8] > 120 = se o botão ficou pressionado mais tempo que 120 ms
			{
				
				//pulo forte na diagonal com o botão direcional para tras
				if( button00 || ( btTPress[3][8] - btTPress[0][8] >= -30 && btTPress[3][8] - btTPress[0][8] <= 30 ) )
	// se btTPress[3][8] - btTPress[0][8] (botão para cima e botão para tras) foi entre -30 e 30 (60 ms de diferença entre os botões terem sido pressionados)
				{
					if(toRight) { speedX = -RUNSPEED; ChangeAction(91); } //pulando na diagonal para tras
					else 		{ speedX = -RUNSPEED; ChangeAction(71); } //pulando na diagonal para frente
					speedY = -STRONGJUMPSTRENGTH;
				}
				
				//pulo forte na diagonal com o botão direcional para frente
				else if( button02 || ( btTPress[3][8] - btTPress[2][8] >= -30 && btTPress[3][8] - btTPress[2][8] <= 30 ) )
	// se btTPress[3][8] - btTPress[2][8] (botão para cima e botão para frente) foi entre -30 e 30 (60 ms de diferença entre os botões terem sido pressionados)
				{
					if(toRight) {speedX =  RUNSPEED; ChangeAction(71);  } //pulando na diagonal para frente
					else 		{speedX =  RUNSPEED; ChangeAction(91); }  //pulando na diagonal para tras
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
					speedY = -WEAKJUMPSTRENGTH;
					ChangeAction(41);
				}
				
				if( action == 60 )// pulo fraco na diagonal para frente
				{
					if( toRight )	speedX = 10;
					else			speedX = -10;
					speedY = -WEAKJUMPSTRENGTH-5;
					ChangeAction(61);
				}
				
				if( action == 80 )// pulo fraco na diagonal para tras
				{
					if( toRight )	speedX = -10;
					else			speedX = 10;
					speedY = -WEAKJUMPSTRENGTH-5;
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
	
	
}END_OF_FUNCTION(VertivalMove);


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
			if( action == 0 || action == 12 )
				return true;
			else return false;
		break;
	
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
	
		case 120://Defending
			if( action == 0 || action == 30 )
				return true;
			else return false;
		break;
	
		case 123://Defending
			if( action == 120 || action == 121 )
				return true;
			else return false;
		break;
	
		case 130://Defending Crouched
			if( action == 10 || action == 11 )
				return true;
			else return false;
		break;
	
		case 140://Front Rolling
			if( action == 0  || action == 20 )
				return true;
			else return false;
		break;
	
		case 150://Back Rolling
			if( action == 0 || action == 30 )
				return true;
			else return false;
		break;
	
		case 160://changeSide
			if( action == 0 )
				return true;
			else return false;
		break;
	
		case 170://changeSideCrouched
			if( action == 11 )
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
	
		case 120://Defending
			if(	frame < defending[0] || frame > defending[1] ) 
				return true;
		break;
		
		case 121://Defence
			if(	frame <= defence[0] || frame >= defence[1] ) 
				return true;
		break;
	
		case 122://TakingDamage
			if(	frame <= takingDamage[0] || frame >= takingDamage[1] ) 
				return true;
		break;
	
		case 123://Defending
			if(	frame <= defendExit[0] || frame >= defendExit[1] ) 
				return true;
		break;
	
		case 130://DefendingCrouched
			if(	frame < defendingCrouched[0] || frame > defendingCrouched[1] ) 
				return true;
		break;
		
		case 131://DefenceCrouched
			if(	frame <= defenceCrouched[0] || frame >= defenceCrouched[1] ) 
				return true;
		break;
	
		case 132://TakingDamageCrouched
			if(	frame <= takingDamageCrouched[0] || frame >= takingDamageCrouched[1] ) 
				return true;
		break;
	
		case 133://DefendExitCrouched
			if(	frame <= defendExitCrouched[0] || frame >= defendExitCrouched[1] ) 
				return true;
		break;
	
		case 140://FrontRolling
			if(	frame <= frontRolling[0] || frame >= frontRolling[1] ) 
				return true;
		break;
	
		case 141://FrontRollingEnd
			if(	frame <= frontRollingEnd[0] || frame >= frontRollingEnd[1] ) 
				return true;
		break;
	
		case 150://BackRolling
			if(	frame <= backRolling[0] || frame >= backRolling[1] ) 
				return true;
		break;
	
		case 151://BackRollingEnd
			if(	frame <= backRollingEnd[0] || frame >= backRollingEnd[1] ) 
				return true;
		break;
	
		case 160://changeSide
			if(	frame <= changeSide[0] || frame >= changeSide[1] ) 
				return true;
		break;
	
		case 170://changeSideCrouched
			if(	frame <= changeSideCrouched[0] || frame >= changeSideCrouched[1] ) 
				return true;
		break;
	
		default: //ERROR
			return false;
		break;
	}
	return false;
}END_OF_FUNCTION(VerifyFrame);














