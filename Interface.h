#ifndef INTERFACE_H
#define INTERFACE_H

#include <allegro.h>

class Interface
{
	
	public:
		//construtor
		Interface();
		
		//destrutor
		~Interface();
		
		
		BITMAP *GetCompleteInterface();
		
		void Routine();
		
	private:
		
		int gameTime;						//tempo de jogo - ainda n�o usada
		
		//variaveis para imprimir on numeros na tela
		int unitTime;
		int tenTime;
		int unitTimeAnimFrame;				//frame da anima��o das unidades
		int tenTimeAnimFrame;				//frame da anima��o das dezenas
		int capturaTempoParaNumeros;		//captura o tempo para fazer a anima��o dos numeros quando o tempo est� acabando
		bool activeRedNumber;				//faz os numeros vermelhos serem renderizados
		
		//anima��o dos pontos de especial
		int frame;							//frame da anima��o
		int capturaTempo;					//captura o tempo no momento que muda de frame para fazer uma verifica��o de quando deve trocar de frame novamente
		bool startAnimation;				//faz a anima��o iniciar
		
		int p1LifeBarOrangeX;				//variavel para movimentar a barra de vida laramja do player 1
		int p2LifeBarOrangeX;				//variavel para movimentar a barra de vida laramja do player 2
		int p1LifeBarRedX;					//variavel para movimentar a barra de vida vermelha do player 1
		int p2LifeBarRedX;					//variavel para movimentar a barra de vida vermelha do player 2
		int p1ShildBarX;					//variavel para movimentar a barra de escudo do player 1
		int p2ShildBarX;					//variavel para movimentar a barra de escudo do player 2
		
		int specialBarBlueP1X;				//variavel para movimentar a barra de especial da cor azul do player 1
		int specialBarBlueP2X;				//variavel para movimentar a barra de especial da cor azul do player 2
		int specialBarPinkP1X;				//variavel para movimentar a barra de especial da cor rosa do player 1
		int specialBarPinkP2X;				//variavel para movimentar a barra de especial da cor rosa do player 2
		int specialBarYellowP1X;			//variavel para movimentar a barra de especial da cor amarela do player 1
		int specialBarYellowP2X;			//variavel para movimentar a barra de especial da cor amarela do player 2
		int powBarp1X;						//variavel para movimentar a barra de pow do player 1
		int powBarp2X;						//variavel para movimentar a barra de pow do player 2
		
		
		//variavel que vai montar a interface e ser enviada para renderiza��o
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
		BITMAP *powBarPlayer1;				//barra de tempo quando o jogador estora	
		
		//barras de especial do player 2
		BITMAP *specialInterface1Player2;	//interface da barra de especial do player 2
		BITMAP *specialInterface2Player2;	//interface da barra de especial estourada do player 2
		BITMAP *specialBarBluePlayer2;		//barra azul de especial do personagem 2
		BITMAP *specialBarPinkPlayer2;		//barra rosa de especial do personagem 2
		BITMAP *specialBarYellowPlayer2;	//barra amarela de especial do personagem 2
		BITMAP *powBarPlayer2;				//barra de tempo quando o jogador estora
		
		//carregar as imagens das barras de especial
		BITMAP *specialBarBlue;				//barra azul de especial
		BITMAP *specialBarPink;				//barra rosa de especial
		BITMAP *specialBarYellow;			//barra amarela de especial
		BITMAP *powBar;						//barra laranja de especial
		
		//anima��es da barra de especial
		BITMAP *specialAnim[7];				//frames da anima��o dos pontos
		
		BITMAP *specialAnim1;				//anima��o do amostrador 1 de quantidade de especiais do personagem 1
		BITMAP *specialAnim2;				//anima��o do amostrador 2 de quantidade de especiais do personagem 1
		BITMAP *specialAnim3;				//anima��o do amostrador 3 de quantidade de especiais do personagem 1
		BITMAP *specialAnim4;				//anima��o do amostrador 4 de quantidade de especiais do personagem 2
		BITMAP *specialAnim5;				//anima��o do amostrador 5 de quantidade de especiais do personagem 2
		BITMAP *specialAnim6;				//anima��o do amostrador 6 de quantidade de especiais do personagem 2
		
		//frame dos personagens
		BITMAP *framePlayer1;
		BITMAP *framePlayer2;
		
		//Numeros para contagem de tempo
		BITMAP *number[10][4];
		
		//Numeros na cor vermelha para fazer a anima��o de tempo acabando
		BITMAP *redNumber[10];

		//metodos privados
		void LoadSprites();
		void InitializeBitmaps();
		void StartAttributes();
		void BuildPlayerBars();
		void BuildInterface();
		void AnimControl();
		void TimerControl();
		
};
#endif//INTERFACE_H

























