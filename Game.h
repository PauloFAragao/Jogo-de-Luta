#ifndef GAME_H
#define GAME_H

#include <allegro.h>
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
		bool gamePause;
		bool antLoopPause;
		
		int gameTime;
		int gameTimeStart;
		int pauseTime;
		
		int p1Index;
		int p2Index;
		
		Scenario scenario;
		Interface ui;
		
		//Terry *terryP1;
		//Terry *terryP2;
		
		Terry terryP1;
		Terry terryP2;
		
		BITMAP* gameScreen;
		
	//metodos privados
	
		void StartAttributes();
		void AllocateMemoryP1( int p1Index );
		void AllocateMemoryP2( int p2Index );
		void BuildGameScreen();
		void GameTimeControl();
		
		void BuildDebugScreen();
};
#endif//GAME_H










