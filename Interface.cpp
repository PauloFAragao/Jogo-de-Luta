#include <allegro.h>
#include "Interface.h"


//construtor
Interface::Interface()
{
	LoadSprites();
	InitializeBitmaps();
	StartAttributes();
}


//destrutor
Interface::~Interface()
{
	
	destroy_bitmap( completeInterface );
	destroy_bitmap( lifeBarsInterface );
	destroy_bitmap( LifeBarOrange );
	destroy_bitmap( player1LifeBarOrange );
	destroy_bitmap( player2LifeBarOrange );
	destroy_bitmap( LifeBarRed );
	destroy_bitmap( player1LifeBarRed );
	destroy_bitmap( player2LifeBarRed );
	destroy_bitmap( shildBar );
	destroy_bitmap( shildBarPlayer1 );
	destroy_bitmap( specialInterface1Player1 );
	destroy_bitmap( specialInterface2Player1 );
	destroy_bitmap( specialBarBluePlayer1 );
	destroy_bitmap( specialBarPinkPlayer1 );
	destroy_bitmap( specialBarYellowPlayer1 );
	destroy_bitmap( powBarPlayer1 );
	destroy_bitmap( specialInterface1Player2 );
	destroy_bitmap( specialInterface2Player2 );
	destroy_bitmap( specialBarBluePlayer2 );
	destroy_bitmap( specialBarPinkPlayer2 );
	destroy_bitmap( specialBarYellowPlayer2 );
	destroy_bitmap( powBarPlayer2 );
	destroy_bitmap( specialBarBlue );
	destroy_bitmap( specialBarPink );
	destroy_bitmap( specialBarYellow );
	destroy_bitmap( powBar );
	destroy_bitmap( *specialAnim );
	destroy_bitmap( specialAnim1 );
	destroy_bitmap( specialAnim2 );
	destroy_bitmap( specialAnim3 );
	destroy_bitmap( specialAnim4 );
	destroy_bitmap( specialAnim5 );
	destroy_bitmap( specialAnim6 );
	destroy_bitmap( framePlayer1 );
	destroy_bitmap( framePlayer2 );
	destroy_bitmap( **number );
	
}


void Interface::InitializeBitmaps()
{

	completeInterface =	create_bitmap(SCREEN_W, SCREEN_H);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( completeInterface, 0, 0, SCREEN_W, SCREEN_H, makecol(255,0,255) );
	
//barra de vida
	player1LifeBarOrange = create_bitmap(582, 31);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( player1LifeBarOrange, 0, 0, 582, 31, makecol(255,0,255) );
	
	
	player2LifeBarOrange = create_bitmap(582, 31);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( player2LifeBarOrange, 0, 0, 582, 31, makecol(255,0,255) );
	
	
	player1LifeBarRed = create_bitmap(582, 31);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( player1LifeBarRed, 0, 0, 582, 31, makecol(255,0,255) );
	
	
	player2LifeBarRed = create_bitmap(582, 31);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( player2LifeBarRed, 0, 0, 582, 31, makecol(255,0,255) );
	
	
	shildBarPlayer1 = create_bitmap(239, 22);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( shildBarPlayer1, 0, 0, 239, 22, makecol(255,0,255) );
	
	
	shildBarPlayer2 = create_bitmap(239, 22);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( shildBarPlayer2, 0, 0, 239, 22, makecol(255,0,255) );
	
//barra de especial - animações
	specialAnim1 = create_bitmap(22, 23);
	specialAnim2 = create_bitmap(22, 23);
	specialAnim3 = create_bitmap(22, 23);
	specialAnim4 = create_bitmap(22, 23);
	specialAnim5 = create_bitmap(22, 23);
	specialAnim6 = create_bitmap(22, 23);
	
//barra de especial - barras coloridas
	specialBarBluePlayer1 = create_bitmap(362, 23);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( specialBarBluePlayer1, 0, 0, 362, 23, makecol(255,0,255) );
	
	
	specialBarBluePlayer2 = create_bitmap(362, 23);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( specialBarBluePlayer2, 0, 0, 362, 23, makecol(255,0,255) );
	
	
	specialBarPinkPlayer1 = create_bitmap(362, 23);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( specialBarPinkPlayer1, 0, 0, 362, 23, makecol(255,0,255) );
	
	
	specialBarPinkPlayer2 = create_bitmap(362, 23);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( specialBarPinkPlayer2, 0, 0, 362, 23, makecol(255,0,255) );
	
	
	specialBarYellowPlayer1 = create_bitmap(362, 23);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( specialBarYellowPlayer1, 0, 0, 362, 23, makecol(255,0,255) );
	
	
	specialBarYellowPlayer2 = create_bitmap(362, 23);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( specialBarYellowPlayer2, 0, 0, 362, 23, makecol(255,0,255) );
	

	powBarPlayer1 = create_bitmap(151, 20);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( powBarPlayer1, 0, 0, 151, 20, makecol(255,0,255) );
	
	
	powBarPlayer2 = create_bitmap(151, 20);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( powBarPlayer2, 0, 0, 151, 20, makecol(255,0,255) );
	
}END_OF_FUNCTION(InitializeBitmaps);


void Interface::StartAttributes()
{
	frame =0;					//frame atual da animação
	unitTimeAnimFrame = 3;		//frame da animação das unidades
	tenTimeAnimFrame  = 3;		//frame da animação das dezenas
	gameTime = clock();			//momento que o jogo começa
	startAnimation = false; 	//faz a animação iniciar
	
	
	p1LifeBarOrangeX = 400;		//variavel para movimentar a barra de vida laramja do player 1
	p2LifeBarOrangeX = -50;		//variavel para movimentar a barra de vida laramja do player 2
	p1LifeBarRedX = 0;			//variavel para movimentar a barra de vida vermelha do player 1
	p2LifeBarRedX = 0;			//variavel para movimentar a barra de vida vermelha do player 2
	p1ShildBarX = 0;			//variavel para movimentar a barra de escudo do player 1
	p2ShildBarX = 0;			//variavel para movimentar a barra de escudo do player 2
	
	
	specialBarBlueP1X = 0;		//variavel para movimentar a barra de especial azul do player 1
	specialBarBlueP2X = 0;		//variavel para movimentar a barra de especial azul do player 2
	specialBarPinkP1X = 0;		//variavel para movimentar a barra de especial roza do player 1
	specialBarPinkP2X = 0;		//variavel para movimentar a barra de especial roza do player 2
	specialBarYellowP1X = 0;	//variavel para movimentar a barra de especial amarelo do player 1
	specialBarYellowP2X = 0;	//variavel para movimentar a barra de especial amarelo do player 2
	powBarp1X = 0;				//variavel para movimentar a barra de pow do player 1
	powBarp2X = 0;				//variavel para movimentar a barra de pow do player 2
	
	
	//variaveis para imprimir on numeros na tela
	unitTime = 0;				
	tenTime  = 0;					
	capturaTempoParaNumeros = 0;//captura o tempo para fazer a animação dos numeros quando o tempo está acabando
	activeRedNumber = false;
	
	
	lifePointsP1 = 1000;
	lifePointsP1Memory = 1000;
	lifePointsP1Max = 1000;
	shildPointsP1 = 200;
	especialBarP1 = 0;
	especialQuantityP1 = 0;
	powTimeP1 = 0;
	powP1 = false;
	
	lifePointsP2 = 1000;
	lifePointsP2Memory = 1000;
	lifePointsP2Max = 1000;
	shildPointsP2 = 200;
	especialBarP2 = 0;
	especialQuantityP2 = 0;
	powTimeP2 = 0;
	powP2 = false;
	
}END_OF_FUNCTION(StartAttributes);


void Interface::Routine()
{
	//calculos para movimentar as barras
	Calculation();
	
	//metodo responsavel por construir graficamente a interface do jogo
	BuildInterface();
	
	//metodo responsavel por construir algumas barras que devem se mover
	BuildPlayerBars();
	
	//metodo responsavel por mudar a animação
	AnimControl();
	
	//metodo responsavel por animar e controlar o timer
	TimerControl();
	
}END_OF_FUNCTION(routine);


void Interface::Calculation()
{
	/*if( key[KEY_MINUS]  ) lifePointsP1 -=100;
	if( key[KEY_EQUALS] ) lifePointsP1 +=50;*/
	
//barra de vida laranja do player 1
	p1LifeBarOrangeX = ( 582 * ( 100 * ( lifePointsP1Max - lifePointsP1 ) ) / lifePointsP1Max ) / 100 ;
	
//barra de vida vermelha do player 1
	if( lifePointsP1 != lifePointsP1Memory )
	{
		lifePointsP1Memory -= 10;
		if( lifePointsP1Memory < lifePointsP1 )
			lifePointsP1Memory = lifePointsP1;
	}
	p1LifeBarRedX = ( 582 * ( 100 * ( lifePointsP1Max - lifePointsP1Memory ) ) / lifePointsP1Max ) / 100;
	
//barra de escudo do player 1
	p1ShildBarX =  ( 237 * ( 100 * ( 200 - shildPointsP1 ) ) / 200 ) / 100;
	
//Barra de especial do player 1
	//specialBarBlueP1X
	if( especialQuantityP1 == 0 ) specialBarBlueP1X = ( ( 361 * especialBarP1 ) / 100 ) - 361 ;
	else specialBarBlueP1X = 0;
	
	//specialBarPinkP1X
	if( especialQuantityP1 == 1 )  specialBarPinkP1X = ( ( 361 * especialBarP1 ) / 100 ) - 361 ;
	else specialBarPinkP1X = 0;
		
	//specialBarYellowP1X
	if( especialQuantityP1 >= 2 )  specialBarYellowP1X = ( ( 361 * especialBarP1 ) / 100 ) - 361 ;
	specialBarYellowP1X = 0;
	
	//Barra de tempo quando o pow está ativo
	if( powP1 ) powBarp1X = ( ( 148 * ( ( powTimeP1 * 100 ) / 15000 ) ) / 100 ) - 148;
	else powBarp1X = -149;
	
	
//barra de vida laranja do player 2
	p2LifeBarOrangeX = -1 * ( 582 * ( 100 * ( lifePointsP2Max - lifePointsP2 ) ) / lifePointsP2Max ) / 100;
//barra de vida vermelha do player 2
	if( lifePointsP2 != lifePointsP2Memory )
	{
		lifePointsP2Memory -= 10;
		if( lifePointsP2Memory < lifePointsP2 )
			lifePointsP2Memory = lifePointsP2;
	}
	p2LifeBarRedX = -1 * ( 582 * ( 100 * ( lifePointsP2Max - lifePointsP2Memory ) ) / lifePointsP2Max ) / 100;	
//barra de escudo do player 2
	p2ShildBarX = -1 * ( 237 * ( 100 * ( 200 - shildPointsP2 ) ) / 200 ) / 100;
	
//Barra de especial do player 2
	//specialBarBlueP2X
	if( especialQuantityP2 == 0 ) specialBarBlueP2X = 361 - ( ( 361 * especialBarP2 ) / 100 );
	else specialBarBlueP2X = 0;
	
	//specialBarPinkP2X
	if( especialQuantityP2 == 1 ) specialBarPinkP2X = 361 - ( ( 361 * especialBarP2 ) / 100 );
	else specialBarPinkP2X = 0;
		
	//specialBarYellowP2X
	if( especialQuantityP2 >= 2 ) specialBarYellowP2X = 361 - ( ( 361 * especialBarP2 ) / 100 );
	else specialBarYellowP2X = 0;
	
	//Barra de tempo quando o pow está ativo
	if( powP2 ) powBarp2X = 148 - ( ( 148 * ( ( powTimeP2 * 100 ) / 15000 ) ) / 100 );
	else powBarp1X = -149;
	
	
	//controle temporario << esse controle deve destar dentro da classe player
	if( especialBarP1 >= 100 )
	{
		especialBarP1 = 0;
		if( especialQuantityP1 < 3 ) especialQuantityP1++;
	}
	if( especialBarP2 >= 100 )
	{
		especialBarP2 = 0;
		if( especialQuantityP2 < 3 ) especialQuantityP2++;
	}

}END_OF_FUNCTION(Calculation);


//completeInterface
BITMAP *Interface::GetCompleteInterface()
{
	return completeInterface;
}END_OF_FUNCTION(GetSprites);



int Interface::getShildPointsP1()
{
	return shildPointsP1;
}






