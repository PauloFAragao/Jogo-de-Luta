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

//bitmaps para manipulação
	destroy_bitmap( completeInterface );
	destroy_bitmap( player1LifeBarGreen );
	destroy_bitmap( player2LifeBarGreen );
	destroy_bitmap( shildBarPlayer1 );
	destroy_bitmap( powBarPlayer1 );
	destroy_bitmap( powBarPlayer2 );
	destroy_bitmap( specialNumberP1 );
	destroy_bitmap( specialNumberP2 );
	
//bitmaps com imagens carregadas
	destroy_bitmap( framePlayer1 );
	destroy_bitmap( framePlayer2 );
	destroy_bitmap( lifeBarsInterface );
	destroy_bitmap( LifeBarGreen );
	destroy_bitmap( shildBar );
	destroy_bitmap( specialInterface1Player1 );
	destroy_bitmap( specialInterface2Player1 );
	destroy_bitmap( specialInterface1Player2 );
	destroy_bitmap( specialInterface2Player2 );
	destroy_bitmap( powBarP1 );
	destroy_bitmap( powBarP2 );
	destroy_bitmap( specialNumber0 );
	destroy_bitmap( specialNumber1 );
	destroy_bitmap( specialNumber2 );
	destroy_bitmap( specialNumber3 );
	destroy_bitmap( specialNumber4 );
	destroy_bitmap( specialNumber5 );
	destroy_bitmap( number0RedFrame );
	destroy_bitmap( number0Frame0 );
	destroy_bitmap( number0Frame1 );
	destroy_bitmap( number0Frame2 );
	destroy_bitmap( number0Frame3 );
	destroy_bitmap( number1RedFrame );
	destroy_bitmap( number1Frame0 );
	destroy_bitmap( number1Frame1 );
	destroy_bitmap( number1Frame2 );
	destroy_bitmap( number1Frame3 );
	destroy_bitmap( number2RedFrame );
	destroy_bitmap( number2Frame0 );
	destroy_bitmap( number2Frame1 );
	destroy_bitmap( number2Frame2 );
	destroy_bitmap( number2Frame3 );
	destroy_bitmap( number3RedFrame );
	destroy_bitmap( number3Frame0 );
	destroy_bitmap( number3Frame1 );
	destroy_bitmap( number3Frame2 );
	destroy_bitmap( number3Frame3 );
	destroy_bitmap( number4RedFrame );
	destroy_bitmap( number4Frame0 );
	destroy_bitmap( number4Frame1 );
	destroy_bitmap( number4Frame2 );
	destroy_bitmap( number4Frame3 );
	destroy_bitmap( number5RedFrame );
	destroy_bitmap( number5Frame0 );
	destroy_bitmap( number5Frame1 );
	destroy_bitmap( number5Frame2 );
	destroy_bitmap( number5Frame3 );
	destroy_bitmap( number6RedFrame );
	destroy_bitmap( number6Frame0 );
	destroy_bitmap( number6Frame1 );
	destroy_bitmap( number6Frame2 );
	destroy_bitmap( number6Frame3 );
	destroy_bitmap( number7RedFrame );
	destroy_bitmap( number7Frame0 );
	destroy_bitmap( number7Frame1 );
	destroy_bitmap( number7Frame2 );
	destroy_bitmap( number7Frame3 );
	destroy_bitmap( number8RedFrame );
	destroy_bitmap( number8Frame0 );
	destroy_bitmap( number8Frame1 );
	destroy_bitmap( number8Frame2 );
	destroy_bitmap( number8Frame3 );
	destroy_bitmap( number9RedFrame );
	destroy_bitmap( number9Frame0 );
	destroy_bitmap( number9Frame1 );
	destroy_bitmap( number9Frame2 );
	destroy_bitmap( number9Frame3 );
	
}

/**
 * Esse metodo inicializa os atributos da classe interface
 */
void Interface::StartAttributes()
{
	unitTimeAnimFrame = 3;		//frame da animação das unidades
	tenTimeAnimFrame  = 3;		//frame da animação das dezenas
	gameTime = clock();			//momento que o jogo começa
	

	
	
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

/**
 * Esse metodo faz os calculos de porcentagem para movimentação das barras
 */
void Interface::Calculation()
{
	if( key[KEY_MINUS]  ) 
	{
		//lifePointsP1 -=25;
		//lifePointsP2 -=25;
		//shildPointsP1 -=5;
		//shildPointsP2 -=5;
		especialBarP1 -=1;
		especialBarP2 -=1;
		//powTimeP1 -= 100;
		//powTimeP2 -= 100;
	}
	if( key[KEY_EQUALS] ) 
	{
		//lifePointsP1 +=25;
		//lifePointsP2 +=25;
		//shildPointsP1 +=5;
		//shildPointsP2 +=5;
		especialBarP1 +=1;
		especialBarP2 +=1;
		//powTimeP1 += 100;
		//powTimeP2 += 100;
	}
	//controle temporario << esse controle deve destar dentro da classe player
	if( especialBarP1 >= 100 )
	{
		especialBarP1 = 0;
		if( especialQuantityP1 < 5 ) especialQuantityP1++;
	}
	if( especialBarP2 >= 100 )
	{
		especialBarP2 = 0;
		if( especialQuantityP2 < 5 ) especialQuantityP2++;
	}

}END_OF_FUNCTION(Calculation);

/**
 * Esse metodo chama todos os metodos necessarios para construir a interface e 
 * retorna um bitmap com a interface para ser renderizada
 */
BITMAP *Interface::GetCompleteInterface()
{

	//calculos para movimentar as barras
	Calculation();
	
	//metodo responsavel por construir graficamente a interface do jogo
	BuildInterface();
	
	//metodo responsavel por animar e controlar o timer
	TimerControl();

	
	//retorna a interface completa
	return completeInterface;
	
	
}END_OF_FUNCTION(GetSprites);













