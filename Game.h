#ifndef GAME_H
#define GAME_H

#include "includes.h"
#include "Scenario.h"
#include "Interface.h"
#include "Terry.h"

class Game
{
	
	public:
	//construtor
	Game( int p1Index, int p2Index );
	//destrutor
	~Game();
	
	//metodos publicos
	
	BITMAP *GetGameScreen();
	
	private:
	
	//atributos privados
		
		bool gameStart;
		bool antLoopGameStart;		//VARIAVEL TEMPORARIA
		bool gamePause;
		bool antLoopPause;
		
		bool flipPlayer1Comand;
		bool flipPlayer2Comand;
		
		int gameTime;
		int gameTimeStart;
		int pauseTime;
		
		int p1Index;
		int p2Index;
		
		Scenario scenario;
		Interface ui;
		
		Terry *terryP1;
		Terry *terryP2;
		
		BITMAP* gameScreen;
		
	//metodos privados
	
		void StartAttributes();
		void AllocateMemoryP1( int p1Index );
		void AllocateMemoryP2( int p2Index );
		void BuildGameScreen();
		void GameTimeControl();
		
		void BuildDebugScreen();
		
		void FlipPlayers();
};
#endif//GAME_H










