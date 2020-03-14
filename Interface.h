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
		
		
		int getShildPointsP1();
		
	private:
		
		int gameTime;						//tempo de jogo - ainda não usada
		
		//variaveis para imprimir on numeros na tela
		int unitTime;
		int tenTime;
		int unitTimeAnimFrame;				//frame da animação das unidades
		int tenTimeAnimFrame;				//frame da animação das dezenas
		int capturaTempoParaNumeros;		//captura o tempo para fazer a animação dos numeros quando o tempo está acabando
		bool activeRedNumber;				//faz os numeros vermelhos serem renderizados
		
		//animação dos pontos de especial
		int frame;							//frame da animação
		int capturaTempo;					//captura o tempo no momento que muda de frame para fazer uma verificação de quando deve trocar de frame novamente
		bool startAnimation;				//faz a animação iniciar
		
		float p1LifeBarOrangeX;				//variavel para movimentar a barra de vida laramja do player 1
		float p2LifeBarOrangeX;				//variavel para movimentar a barra de vida laramja do player 2
		float p1LifeBarRedX;				//variavel para movimentar a barra de vida vermelha do player 1
		float p2LifeBarRedX;				//variavel para movimentar a barra de vida vermelha do player 2
		float p1ShildBarX;					//variavel para movimentar a barra de escudo do player 1
		float p2ShildBarX;					//variavel para movimentar a barra de escudo do player 2
		
		float specialBarBlueP1X;			//variavel para movimentar a barra de especial da cor azul do player 1
		float specialBarBlueP2X;			//variavel para movimentar a barra de especial da cor azul do player 2
		float specialBarPinkP1X;			//variavel para movimentar a barra de especial da cor rosa do player 1
		float specialBarPinkP2X;			//variavel para movimentar a barra de especial da cor rosa do player 2
		float specialBarYellowP1X;			//variavel para movimentar a barra de especial da cor amarela do player 1
		float specialBarYellowP2X;			//variavel para movimentar a barra de especial da cor amarela do player 2
		float powBarp1X;					//variavel para movimentar a barra de pow do player 1
		float powBarp2X;					//variavel para movimentar a barra de pow do player 2
		
		
		//VARIAVEIS TEMPORARIAS
		int lifePointsP1Memory;		//variavel para animar a barra vermelha
		int lifePointsP1;			//TEMP
		int lifePointsP1Max;		//TEMP				
		int shildPointsP1;			//TEMP
		int especialBarP1;			//TEMP
		int especialQuantityP1;		//TEMP
		int powTimeP1;				//TEMP
		bool powP1;					//TEMP
		
		
		int lifePointsP2Memory;		//variavel para animar a barra vermelha
		int lifePointsP2;			//TEMP
		int lifePointsP2Max;		//TEMP
		int shildPointsP2;			//TEMP
		int especialBarP2;			//TEMP
		int especialQuantityP2;		//TEMP
		int powTimeP2;				//TEMP
		bool powP2;					//TEMP
		
		
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
		
		//Numeros para contagem de tempo
		BITMAP *number[10][4];
		
		//Numeros na cor vermelha para fazer a animação de tempo acabando
		BITMAP *redNumber[10];

		//metodos privados
		void LoadSprites();
		void InitializeBitmaps();
		void StartAttributes();
		void BuildPlayerBars();
		void BuildInterface();
		void AnimControl();
		void TimerControl();
		void Calculation();
		
};
#endif//INTERFACE_H

























