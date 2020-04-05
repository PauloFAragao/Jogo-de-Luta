#include "includes.h"
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
	numberAnimation = false;
	lifePointsP1Memory = 1000;		//<<<<<<<<<<<<<TEMP
	lifePointsP2Memory = 1000;		//<<<<<<<<<<<<<TEMP
	
}END_OF_FUNCTION(StartAttributes);


/**
 * Esse metodo chama todos os metodos necessarios para construir a interface e 
 * retorna um bitmap com a interface para ser renderizada
 */
BITMAP *Interface::GetCompleteInterface( int gameTime, int lifePointsP1, int lifePointsP2, int lifePointsMaxP1, int lifePointsMaxP2, int shildP1, int shildP2, int especialBarP1, int especialBarP2, int especialQuantityP1, int especialQuantityP2, int powTimeP1, int powTimeP2, bool powP1, bool powP2 )
{
	//metodo responsavel por construir graficamente a interface do jogo
	BuildInterface( gameTime, 
					lifePointsP1, lifePointsP2, 
					lifePointsMaxP1, lifePointsMaxP2, 
					shildP1, shildP2, 
					especialBarP1, especialBarP2, 
					especialQuantityP1, especialQuantityP2, 
					powTimeP1, powTimeP2, 
					powP1, powP2 );
	
	//	textprintf_ex(completeInterface, font, 10, 315, makecol(255, 0, 0), -1, "gameTime: %d", gameTime );
	
	//retorna a interface completa
	return completeInterface;

	
}END_OF_FUNCTION(GetSprites);















