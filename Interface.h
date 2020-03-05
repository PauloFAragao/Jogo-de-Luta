#ifndef INTERFACE_H
#define INTERFACE_H

#include <allegro.h>

class Interface
{
	
	public:
		//construtor
		Interface();
		
		BITMAP *GetCompleteInterface();
		
		void Routine();
		
	private:
		
		int gameTime;						//tempo de jogo
		
		int frame;							//frame da animação
		int capturaTempo;					//captura o tempo no momento que muda de frame para fazer uma verificação de quando deve trocar de frame novamente
		bool startAnimation;				//faz a animação iniciar
		
		int p1LifeBarOrangeX;				//variavel para movimentar a barra de vida laramja do player 1
		int p2LifeBarOrangeX;				//variavel para movimentar a barra de vida laramja do player 2
		int p1LifeBarRedX;					//variavel para movimentar a barra de vida vermelha do player 1
		int p2LifeBarRedX;					//variavel para movimentar a barra de vida vermelha do player 2
		int p1ShildBarX;					//variavel para movimentar a barra de escudo do player 1
		int p2ShildBarX;					//variavel para movimentar a barra de escudo do player 2
		
		int specialBarBlueP1X;				//
		int specialBarBlueP2X;				//
		int specialBarPinkP1X;				//
		int specialBarPinkP2X;				//
		int specialBarYellowP1X;			//
		int specialBarYellowP2X;			//
		
		//variavel que vai montar a interface e ser enviada para renderização
		BITMAP *completeInterface;
		
		//barras de vida
		BITMAP *lifeBarsInterface;			//interface das barras de vida
		
		BITMAP *LifeBarOrange;				//carregar a barra de vida laramja
		BITMAP *player1LifeBarOrange;		//barra laranja de vida do do player 1
		BITMAP *player2LifeBarOrange;		//barra laranja de vida do do player 2
		
		BITMAP *LifeBarRed;					//carregar a barra de vida vermelha
		BITMAP *player1LifeBarRed;			//barra laranja de vida do do player 1
		BITMAP *player2LifeBarRed;			//barra laranja de vida do do player 2
		
		BITMAP *shildBar;					//carregar a barra de escudo na memoria
		BITMAP *shildBarPlayer1;			//barra de escudo do jogador 1
		BITMAP *shildBarPlayer2;			//barra de escudo do jogador 2
		
		//barras de especial do player 1
		BITMAP *specialInterface1Player1;	//interface da barra de especial do player 1
		BITMAP *specialInterface2Player1;	//interface da barra de especial estourada do player 1
		BITMAP *specialBarBluePlayer1;		//barra azul de especial do personagem 1
		BITMAP *specialBarPinkPlayer1;		//barra rosa de especial do personagem 1
		BITMAP *specialBarYellowPlayer1;	//barra amarela de especial do personagem 1
		
		//barras de especial do player 2
		BITMAP *specialInterface1Player2;	//interface da barra de especial do player 2
		BITMAP *specialInterface2Player2;	//interface da barra de especial estourada do player 2
		BITMAP *specialBarBluePlayer2;		//barra azul de especial do personagem 2
		BITMAP *specialBarPinkPlayer2;		//barra rosa de especial do personagem 2
		BITMAP *specialBarYellowPlayer2;	//barra amarela de especial do personagem 2
		
		//carregar as imagens das barras de especial
		BITMAP *specialBarBlue;		//barra azul de especial do personagem 2
		BITMAP *specialBarPink;		//barra rosa de especial do personagem 2
		BITMAP *specialBarYellow;	//barra amarela de especial do personagem 2
		
		//animações da barra de especial
		BITMAP *specialAnim[7];				//frames da animação dos pontos
		
		BITMAP *specialAnim1;				//animação do amostrador 1 de quantidade de especiais do personagem 1
		BITMAP *specialAnim2;				//animação do amostrador 2 de quantidade de especiais do personagem 1
		BITMAP *specialAnim3;				//animação do amostrador 3 de quantidade de especiais do personagem 1
		BITMAP *specialAnim4;				//animação do amostrador 4 de quantidade de especiais do personagem 2
		BITMAP *specialAnim5;				//animação do amostrador 5 de quantidade de especiais do personagem 2
		BITMAP *specialAnim6;				//animação do amostrador 6 de quantidade de especiais do personagem 2
		
		//frame dos personagens
		BITMAP *framePlayer1;
		BITMAP *framePlayer2;
		
		//tempo do game
		BITMAP *number0[4];
		BITMAP *number1[4];
		BITMAP *number2[4];
		BITMAP *number3[4];
		BITMAP *number4[4];
		BITMAP *number5[4];
		BITMAP *number6[4];
		BITMAP *number7[4];
		BITMAP *number8[4];
		BITMAP *number9[4];

		//metodos privados
		void LoadSprites();
		void InitializeBitmaps();
		void BuildPlayerBars();
		void BuildInterface();
		void AnimControl();
		void TimerControl();
		
};
#endif//INTERFACE_H

























