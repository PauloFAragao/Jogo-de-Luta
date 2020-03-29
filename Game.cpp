#include <allegro.h>
#include "Game.h"

#define COMPLETERENDER true

Game::Game( int p1Index, int p2Index )
{
	this->p1Index = p1Index;
	this->p2Index = p2Index;
	
	StartAttributes();
}

Game::~Game()
{
	//delete terryP1;
	//delete terryP2;
	destroy_bitmap( gameScreen );
}


void Game::StartAttributes()
{
	
	gameTime = 0;
	pauseTime = 0;
	gameStart = false;
	gamePause = false;
	antLoopPause = false;
	
	gameScreen = create_bitmap(SCREEN_W, SCREEN_H);
	
}


void Game::AllocateMemoryP1( int p1Index )
{
	switch(p1Index)
	{
		case 1:
			//terryP1 = new Terry();
		break;
	}
}


void Game::AllocateMemoryP2( int p2Index )
{
	switch(p2Index)
	{
		case 1:
			//terryP2 = new Terry();
		break;
	}
}


void Game::BuildGameScreen()
{
	clear( gameScreen );
	
	//imprimir o cenario
	draw_sprite( gameScreen, scenario.GetScenarioSprite(), scenario.GetX(), scenario.GetY() );
	
	//imprimir o player 1
	switch( p1Index )
	{
		case 1:
			terryP1.Routine();
			draw_sprite( gameScreen, terryP1.GetPlayerSprite( /*gamePause*/ ), terryP1.GetX(), terryP1.GetY() );
		break;
	}
	
	//imprimir o player 2
	switch( p2Index )
	{
		case 1:
			//draw_sprite( gameScreen, terryP2->GetPlayerSprite( /* gamePause */ ), terryP2->GetX(), terryP2->GetY());
		break;
	}
	
	//imprimir a interface
		draw_sprite( gameScreen, ui.GetCompleteInterface( gameTime, terryP1.GetLifePoints(), terryP2.GetLifePoints(), terryP1.GetLifePointsMax(), terryP2.GetLifePointsMax(), terryP1.GetShild(), terryP2.GetShild(), terryP1.GetEspecialBar(), terryP2.GetEspecialBar(), terryP1.GetEspecialQuantity(), terryP2.GetEspecialQuantity(), terryP1.GetPowTime(), terryP2.GetPowTime(), terryP1.GetPow(), terryP2.GetPow() ), 0, 0 );
						
	//texto Game Pause colocado no meio da tela
	if( gamePause ) textprintf_ex(gameScreen, font, 500, 315, makecol(255, 0, 0), -1, "Game Pause" );
	
	if( !gameStart ) textprintf_ex(gameScreen, font, 500, 315, makecol(255, 0, 0), -1, "Press Space To Start" );
}


BITMAP *Game::GetGameScreen()
{
	GameTimeControl();
	
	BuildGameScreen();
	
	if(COMPLETERENDER) BuildDebugScreen();
	
	return gameScreen;
}


void Game::GameTimeControl()
{
	
	if( !gameStart && key[KEY_SPACE] )
	{
		gameStart = true;
		gameTimeStart = clock();
	}
	
	if( gameStart && !gamePause)
	{
		gameTime = clock() - gameTimeStart;
	}
	
	if( !gamePause && gameStart && key[KEY_SPACE] && !antLoopPause )
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
	
	if( antLoopPause && !key[KEY_SPACE])
	{
		antLoopPause = false;
	}
	
}

void Game::BuildDebugScreen()
{
	
	
	
	//imprime o frame
	textprintf_ex(gameScreen, font, 10, 10, makecol(255, 0, 0), -1, " frame: %d ", terryP1.GetFrame());
	
	//posições e velocidade
	textprintf_ex(gameScreen, font, 10, 30, makecol(255, 255, 0), -1, "pos X  %f ", terryP1.GetX());
	textprintf_ex(gameScreen, font, 10, 40, makecol(255, 255, 0), -1, "pos y  %f ", terryP1.GetY());
	textprintf_ex(gameScreen, font, 10, 50, makecol(255, 255, 0), -1, "speed X  %f ", terryP1.GetSpeedX());
	textprintf_ex(gameScreen, font, 10, 60, makecol(255, 255, 0), -1, "speed y  %f ", terryP1.GetSpeedY());
	textprintf_ex(gameScreen, font, 10, 70, makecol(255, 255, 0), -1, "action: %d ", terryP1.GetAction());
	
	if( terryP1.GetToRight() ) 
		textprintf_ex(gameScreen, font, 10, 80, makecol(255, 255, 0), -1, "Virado para a direita");
	else
		textprintf_ex(gameScreen, font, 10, 80, makecol(255, 255, 0), -1, "Virado para a esquerda");
	
}













