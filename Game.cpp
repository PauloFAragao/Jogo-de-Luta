#include "includes.h"
#include "Game.h"

Game::Game( int p1Index, int p2Index )
{
	this->p1Index = p1Index;
	this->p2Index = p2Index;
	
	AllocateMemoryP1(p1Index);
	AllocateMemoryP2(p2Index);
	
	StartAttributes();
	
	LoadSprites();
}

Game::~Game()
{
	delete terryP1;
	delete terryP2;
	
	destroy_bitmap( g );
	destroy_bitmap( o );
	destroy_bitmap( kP );
	destroy_bitmap( oP );
	destroy_bitmap( drawGameFrame0 );
	destroy_bitmap( drawGameFrame1 );
	destroy_bitmap( drawGameFrame2 );
	destroy_bitmap( drawGameFrame3 );
	destroy_bitmap( drawGameFrame4 );
	destroy_bitmap( drawGameFrame5 );
	destroy_bitmap( drawGameFrame6 );
	destroy_bitmap( readyFrame0 );
	destroy_bitmap( readyFrame1 );
	destroy_bitmap( readyFrame2 );
	destroy_bitmap( readyFrame3 );
	destroy_bitmap( readyFrame4 );
	destroy_bitmap( roundFrame0 );
	destroy_bitmap( roundFrame1 );
	destroy_bitmap( roundFrame2 );
	destroy_bitmap( roundFrame3 );
	destroy_bitmap( roundFrame4 );
	destroy_bitmap( timeOverFrame0 );
	destroy_bitmap( timeOverFrame1 );
	destroy_bitmap( timeOverFrame2 );
	destroy_bitmap( timeOverFrame3 );
	destroy_bitmap( winnerFrame0 );
	destroy_bitmap( winnerFrame1 );
	destroy_bitmap( winnerFrame2 );
	destroy_bitmap( winnerFrame3 );
	destroy_bitmap( winnerFrame4 );
	destroy_bitmap( winnerFrame5 );
	destroy_bitmap( perfect0 );
	destroy_bitmap( perfect1 );
	destroy_bitmap( perfect2 );
	destroy_bitmap( perfect3 );
	destroy_bitmap( perfect4 );
	destroy_bitmap( roundNumber1Frame0 );
	destroy_bitmap( roundNumber1Frame1 );
	destroy_bitmap( roundNumber1Frame2 );
	destroy_bitmap( roundNumber1Frame3 );
	destroy_bitmap( roundNumber1Frame4 );
	destroy_bitmap( roundNumber2Frame0 );
	destroy_bitmap( roundNumber2Frame1 );
	destroy_bitmap( roundNumber2Frame2 );
	destroy_bitmap( roundNumber2Frame3 );
	destroy_bitmap( roundNumber2Frame4 );
	destroy_bitmap( roundNumber3Frame0 );
	destroy_bitmap( roundNumber3Frame1 );
	destroy_bitmap( roundNumber3Frame2 );
	destroy_bitmap( roundNumber3Frame3 );
	destroy_bitmap( roundNumber3Frame4 );
	destroy_bitmap( roundNumber4Frame0 );
	destroy_bitmap( roundNumber4Frame1 );
	destroy_bitmap( roundNumber4Frame2 );
	destroy_bitmap( roundNumber4Frame3 );
	destroy_bitmap( roundNumber4Frame4 );
	destroy_bitmap( roundNumber5Frame0 );
	destroy_bitmap( roundNumber5Frame1 );
	destroy_bitmap( roundNumber5Frame2 );
	destroy_bitmap( roundNumber5Frame3 );
	destroy_bitmap( roundNumber5Frame4 );
	destroy_bitmap( gameScreen );
}


void Game::StartAttributes()
{

	pauseTime = 0;
	gameStartCommand = false;
	gameStart = false;
	antLoopGameStart = false;
	gamePause = false;
	antLoopPause = false;
	
	round = 1;
	
	flipPlayer1Comand = false;
	flipPlayer2Comand = false;
	
	gameScreen = create_bitmap(SCREEN_W, SCREEN_H);
	
}END_OF_FUNCTION(StartAttributes);


void Game::AllocateMemoryP1( int p1Index )
{
	switch(p1Index)
	{
		case 1:
			terryP1 = new Terry( 1 );
		break;
	}
}END_OF_FUNCTION(AllocateMemoryP1);


void Game::AllocateMemoryP2( int p2Index )
{
	switch(p2Index)
	{
		case 1:
			terryP2 = new Terry( 2 );
		break;
	}
}END_OF_FUNCTION(AllocateMemoryP2);


void Game::BuildGameScreen()
{

	clear( gameScreen );

//imprimir o cenario
	draw_sprite( gameScreen, scenario.GetScenarioSprite(), scenario.GetX(), scenario.GetY() );

//imprimir o player 2
	switch( p2Index )
	{
		case 1:
			draw_sprite( gameScreen, terryP2->GetPlayerSprite( terryP1->GetX(), terryP1->GetY(), 
																gamePause, gameStart, terryP1->GetAttacking(), 
																false, flipPlayer2Comand ), terryP2->GetX(), terryP2->GetY());
		break;
	}

//imprimir o player 1
	switch( p1Index )
	{
		case 1:
			draw_sprite( gameScreen, terryP1->GetPlayerSprite( terryP2->GetX(), terryP2->GetY(), 
																gamePause, gameStart, terryP2->GetAttacking(), 
																false, flipPlayer1Comand ), terryP1->GetX(), terryP1->GetY() );
		break;
	}

//imprimir a interface
	if( gameStart )
		draw_sprite( gameScreen, ui.GetCompleteInterface( clock() - gameTimeStart,
														terryP1->GetLifePoints(), terryP2->GetLifePoints(),
														terryP1->GetLifePointsMax(), terryP2->GetLifePointsMax(),
														terryP1->GetShild(), terryP2->GetShild(),
														terryP1->GetEspecialBar(), terryP2->GetEspecialBar(),
														terryP1->GetEspecialQuantity(), terryP2->GetEspecialQuantity(),
														terryP1->GetPowTime(), terryP2->GetPowTime(),
														terryP1->GetPow(), terryP2->GetPow() ), 0, 0 );

	else
		draw_sprite( gameScreen, ui.GetCompleteInterface( 0,
														terryP1->GetLifePoints(), terryP2->GetLifePoints(),
														terryP1->GetLifePointsMax(), terryP2->GetLifePointsMax(),
														terryP1->GetShild(), terryP2->GetShild(),
														terryP1->GetEspecialBar(), terryP2->GetEspecialBar(),
														terryP1->GetEspecialQuantity(), terryP2->GetEspecialQuantity(),
														terryP1->GetPowTime(), terryP2->GetPowTime(),
														terryP1->GetPow(), terryP2->GetPow() ), 0, 0 );

	if(gameStartCommand) BuildGameStartText();

//texto Game Pause colocado no meio da tela
	if( gamePause ) textprintf_ex(gameScreen, font, 500, 315, makecol(255, 0, 0), -1, "Game Pause" );

	if( !gameStartCommand && !gameStart ) textprintf_ex(gameScreen, font, 500, 315, makecol(255, 0, 0), -1, "Press Space To Start" );

}END_OF_FUNCTION(BuildGameScreen);


BITMAP *Game::GetGameScreen()
{
	GameTimeControl();

	BuildGameScreen();

	FlipPlayers();

	if(COMPLETERENDER) BuildDebugScreen();

	
		//ready
	//draw_sprite( gameScreen, readyFrame4, READYX, READYY );
	
		//round
	//draw_sprite( gameScreen, roundFrame4, ROUNDX, ROUNDY );
	//draw_sprite( gameScreen, roundNumber1Frame4, ROUNDNUMBER1X, ROUNDNUMBER1Y );
	//draw_sprite( gameScreen, roundNumber2Frame4, ROUNDNUMBER2X, ROUNDNUMBER2Y );
	//draw_sprite( gameScreen, roundNumber3Frame4, ROUNDNUMBER3X, ROUNDNUMBER3Y );
	//draw_sprite( gameScreen, roundNumber4Frame4, ROUNDNUMBER4X, ROUNDNUMBER4Y );
	//draw_sprite( gameScreen, roundNumber5Frame4, ROUNDNUMBER5X, ROUNDNUMBER5Y );
	
		//winner
	//draw_sprite( gameScreen, winnerFrame5, WINNERP1X, WINNERP1Y );
	//draw_sprite( gameScreen, winnerFrame5, WINNERP2X, WINNERP2Y );
	
		//draw game
	//draw_sprite( gameScreen, drawGameFrame6, DRAWGAMEX, DRAWGAMEY );
	
		//time over
	//draw_sprite( gameScreen, timeOverFrame3, TIMEOVERX, TIMEOVERY );
	
		//Letra G
	//draw_sprite( gameScreen, g, GENDX, GOY );
	//draw_sprite( gameScreen, g, GSTARTX, GOY );	Letra G
		//Letra O
	//draw_sprite( gameScreen, o, OENDX, GOY );
	//draw_sprite( gameScreen, o, OSTARTX, GOY );	Letra O
	
		//Letra K
	//draw_sprite( gameScreen, kP, KPENDX, KPY );
		//Letra O
	//draw_sprite( gameScreen, oP, OPENDX, OPY );
	
		//perfect
	//draw_sprite( gameScreen, perfect4, PERFECTX, PERFECTY );
	
	
	return gameScreen;
}END_OF_FUNCTION(GetGameScreen);


void Game::GameTimeControl()
{
	
	if( !gameStartCommand && key[KEY_SPACE] )
	{
		antLoopGameStart = true;
		gameStartCommand = true;
		gameTimeStart = clock();
	}
		
	if( !gamePause && gameStart && key[KEY_SPACE] && !antLoopPause && !antLoopGameStart)
	{
		gamePause = true;
		antLoopPause = true;
		pauseTime = clock();
	}
	
	if( gamePause && gameStart && key[KEY_SPACE] && !antLoopPause )
	{
		gamePause = false;
		antLoopPause = true;
		gameTimeStart += clock() - pauseTime;
	}
	
	if( antLoopPause && !key[KEY_SPACE] )
		antLoopPause = false;

	if( antLoopGameStart && !key[KEY_SPACE] )
		antLoopGameStart = false;

}END_OF_FUNCTION(GameTimeControl);


void Game::FlipPlayers()
{
//mudar o personagem 1 de lado
	if( terryP1->GetToRight() && terryP1->GetX() > terryP2->GetX() )
		flipPlayer1Comand = true;

	else if( !terryP1->GetToRight() && terryP2->GetX() > terryP1->GetX() )
		flipPlayer1Comand = true;

	else
		flipPlayer1Comand = false;

//mudar o personagem 2 de lado
	if( terryP2->GetToRight() && terryP2->GetX() > terryP1->GetX() )
		flipPlayer2Comand = true;

	else if( !terryP2->GetToRight() && terryP1->GetX() > terryP2->GetX() )
		flipPlayer2Comand = true;

	else
		flipPlayer2Comand = false;
	
}END_OF_FUNCTION(FlipPlayers);


void Game::BuildDebugScreen()
{
	
	//imprime o frame
	textprintf_ex(gameScreen, font, 10, 180, makecol(255, 0, 0), -1, "frame: %d ", terryP1->GetFrame());
	
	//posições e velocidade
	textprintf_ex(gameScreen, font, 10, 190, makecol(255, 0, 0), -1, "pos X  %f ", terryP1->GetX());
	textprintf_ex(gameScreen, font, 10, 200, makecol(255, 0, 0), -1, "pos y  %f ", terryP1->GetY());
	textprintf_ex(gameScreen, font, 10, 210, makecol(255, 0, 0), -1, "speed X  %f ", terryP1->GetSpeedX());
	textprintf_ex(gameScreen, font, 10, 220, makecol(255, 0, 0), -1, "speed y  %f ", terryP1->GetSpeedY());
	textprintf_ex(gameScreen, font, 10, 230, makecol(255, 0, 0), -1, "action: %d ", terryP1->GetAction());
	
	if( terryP1->GetToRight() ) 
		textprintf_ex(gameScreen, font, 10, 240, makecol(255, 0, 0), -1, "Virado para a direita");
	else
		textprintf_ex(gameScreen, font, 10, 240, makecol(255, 0, 0), -1, "Virado para a esquerda");
	
	if( terryP1->GetAttacking() )
		textprintf_ex(gameScreen, font, 10, 250, makecol(255, 0, 0), -1, "Atacando");
		
	textprintf_ex(gameScreen, font, 120, 48, makecol(255, 0, 0), -1, "Quantidade de pontos de vida: %d ", terryP1->GetLifePoints() );
	
	
	//imprime o frame
	textprintf_ex(gameScreen, font, 950, 180, makecol(255, 0, 0), -1, "frame: %d ", terryP2->GetFrame());
	
	//posições e velocidade
	textprintf_ex(gameScreen, font, 950, 190, makecol(255, 0, 0), -1, "pos X  %f ", terryP2->GetX());
	textprintf_ex(gameScreen, font, 950, 200, makecol(255, 0, 0), -1, "pos y  %f ", terryP2->GetY());
	textprintf_ex(gameScreen, font, 950, 210, makecol(255, 0, 0), -1, "speed X  %f ", terryP2->GetSpeedX());
	textprintf_ex(gameScreen, font, 950, 220, makecol(255, 0, 0), -1, "speed y  %f ", terryP2->GetSpeedY());
	textprintf_ex(gameScreen, font, 950, 230, makecol(255, 0, 0), -1, "action: %d ", terryP2->GetAction());
	
	if( terryP2->GetToRight() ) 
		textprintf_ex(gameScreen, font, 950, 240, makecol(255, 0, 0), -1, "Virado para a direita");
	else
		textprintf_ex(gameScreen, font, 950, 240, makecol(255, 0, 0), -1, "Virado para a esquerda");
	
	if( terryP2->GetAttacking() )
		textprintf_ex(gameScreen, font, 950, 250, makecol(255, 0, 0), -1, "Atacando");
	

	
	textprintf_ex(gameScreen, font, 640, 48, makecol(255, 0, 0), -1, "Quantidade de pontos de vida: %d ", terryP1->GetLifePoints() );
	textprintf_ex(gameScreen, font, 500, 10, makecol(255, 0, 0), -1, "Distancia  %f ", ( terryP1->GetX() - terryP2->GetX() )   );

	
	
	if( terryP1->GetX() - terryP2->GetX()>= -140 && terryP1->GetX() - terryP2->GetX()<= 140 )
		textprintf_ex(gameScreen, font, 500, 20, makecol(255, 0, 0), -1, " dentro da distancia");

	else
		textprintf_ex(gameScreen, font, 500, 20, makecol(255, 0, 0), -1, " fora da distancia");
	

	
}END_OF_FUNCTION(BuildDebugScreen);












