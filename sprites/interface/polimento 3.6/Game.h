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
		
		//texto de inicio e termino
		BITMAP *g;
		BITMAP *o;
		BITMAP *drawGameFrame0;
		BITMAP *drawGameFrame1;
		BITMAP *drawGameFrame2;
		BITMAP *drawGameFrame3;
		BITMAP *drawGameFrame4;
		BITMAP *drawGameFrame5;
		BITMAP *drawGameFrame6;
		BITMAP *readyFrame0;
		BITMAP *readyFrame1;
		BITMAP *readyFrame2;
		BITMAP *readyFrame3;
		BITMAP *readyFrame4;
		BITMAP *roundFrame0;
		BITMAP *roundFrame1;
		BITMAP *roundFrame2;
		BITMAP *roundFrame3;
		BITMAP *roundFrame4;
		BITMAP *timeOverFrame0;
		BITMAP *timeOverFrame1;
		BITMAP *timeOverFrame2;
		BITMAP *timeOverFrame3;
		BITMAP *winnerFrame0;
		BITMAP *winnerFrame1;
		BITMAP *winnerFrame2;
		BITMAP *winnerFrame3;
		BITMAP *winnerFrame4;
		BITMAP *winnerFrame5;
		BITMAP *roundNumber1Frame0;
		BITMAP *roundNumber1Frame1;
		BITMAP *roundNumber1Frame2;
		BITMAP *roundNumber1Frame3;
		BITMAP *roundNumber1Frame4;
		BITMAP *roundNumber2Frame0;
		BITMAP *roundNumber2Frame1;
		BITMAP *roundNumber2Frame2;
		BITMAP *roundNumber2Frame3;
		BITMAP *roundNumber2Frame4;
		BITMAP *roundNumber3Frame0;
		BITMAP *roundNumber3Frame1;
		BITMAP *roundNumber3Frame2;
		BITMAP *roundNumber3Frame3;
		BITMAP *roundNumber3Frame4;
		BITMAP *roundNumber4Frame0;
		BITMAP *roundNumber4Frame1;
		BITMAP *roundNumber4Frame2;
		BITMAP *roundNumber4Frame3;
		BITMAP *roundNumber4Frame4;
		BITMAP *roundNumber5Frame0;
		BITMAP *roundNumber5Frame1;
		BITMAP *roundNumber5Frame2;
		BITMAP *roundNumber5Frame3;
		BITMAP *roundNumber5Frame4;
		
		BITMAP* gameScreen;
		
	//metodos privados
	
		void StartAttributes();
		void AllocateMemoryP1( int p1Index );
		void AllocateMemoryP2( int p2Index );
		void BuildGameScreen();
		void GameTimeControl();
		
		void BuildDebugScreen();
		
		void FlipPlayers();
		
		void LoadSprites();
		void BuildGameText();
};
#endif//GAME_H



















