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

	private:

		int gameTime;						//tempo de jogo - ainda n�o usada
		
		//variaveis para imprimir on numeros na tela
		int unitTime;
		int tenTime;
		int unitTimeAnimFrame;				//frame da anima��o das unidades
		int tenTimeAnimFrame;				//frame da anima��o das dezenas
		int capturaTempoParaNumeros;		//captura o tempo para fazer a anima��o dos numeros quando o tempo est� acabando
		bool activeRedNumber;				//faz os numeros vermelhos serem renderizados
		
		
		//VARIAVEIS TEMPORARIAS
		int lifePointsP1Memory;				//variavel para animar a barra vermelha
		int lifePointsP1;			//TEMP
		int lifePointsP1Max;		//TEMP				
		int shildPointsP1;			//TEMP
		int especialBarP1;			//TEMP
		int especialQuantityP1;		//TEMP
		int powTimeP1;				//TEMP
		bool powP1;					//TEMP
		
		
		int lifePointsP2Memory;				//variavel para animar a barra vermelha
		int lifePointsP2;			//TEMP
		int lifePointsP2Max;		//TEMP
		int shildPointsP2;			//TEMP
		int especialBarP2;			//TEMP
		int especialQuantityP2;		//TEMP
		int powTimeP2;				//TEMP
		bool powP2;					//TEMP
		
//BitMaps que v�o ser manipuladas
		//variavel que vai montar a interface e ser enviada para renderiza��o
		BITMAP *completeInterface;
		
		BITMAP *player1LifeBarGreen;		//barra laranja de vida do do player 1
		BITMAP *player2LifeBarGreen;		//barra laranja de vida do do player 2
		
		BITMAP *shildBarPlayer1;			//barra de escudo do jogador 1
		BITMAP *shildBarPlayer2;			//barra de escudo do jogador 2
		
		//barras de especial do player 1
		BITMAP *maximumSpecialBarP1;		//barra de especial no maximo do player 1
		BITMAP *powBarPlayer1;				//barra de tempo quando o jogador estora
		
		//barras de especial do player 2
		BITMAP *maximumSpecialBarP2;		//barra de especial no maximo do player 2
		BITMAP *powBarPlayer2;				//barra de tempo quando o jogador estora
		
		BITMAP *specialNumberP1;			//numero de especiais do player 1
		BITMAP *specialNumberP2;			//numero de especiais do player 2
		
		BITMAP *conterUnity;				//contador de tempo do jogo unidade
		BITMAP *conterDozen;				//contador de tempo do jogo dezena
		
//BitMaps que v�o carregar imagens do disco
		//frame dos personagens
		BITMAP *framePlayer1;				//imagem do player 1 Temporario
		BITMAP *framePlayer2;				//imagem do player 2 Temporario
	
		//interface de vida e barras de vida e de escudo
		BITMAP *lifeBarsInterface;			//interface das barras de vida
		BITMAP *LifeBarGreen;				//carregar a barra de vida laramja
		BITMAP *shildBar;					//carregar a barra de escudo na memoria
				
		//interface de especial do player 1
		BITMAP *specialInterface1Player1;	//interface da barra de especial do player 1
		BITMAP *specialInterface2Player1;	//interface da barra de especial estourada do player 1
		
		//interface de especial do player 2
		BITMAP *specialInterface1Player2;	//interface da barra de especial do player 2
		BITMAP *specialInterface2Player2;	//interface da barra de especial estourada do player 2
		
		//barras de especial
		BITMAP *powBarP1;					//barra de pow do player 1
		BITMAP *powBarP2;					//barra de pow do player 2
		
		//numeros de especial
		BITMAP *specialNumber0;				//numero 0 da barra de especial
		BITMAP *specialNumber1;				//numero 1 da barra de especial
		BITMAP *specialNumber2;				//numero 2 da barra de especial
		BITMAP *specialNumber3;				//numero 3 da barra de especial
		BITMAP *specialNumber4;				//numero 4 da barra de especial
		BITMAP *specialNumber5;				//numero 5 da barra de especial
		
		//Numeros para contagem de tempo
		BITMAP *number0RedFrame;
		BITMAP *number0Frame0;
		BITMAP *number0Frame1;
		BITMAP *number0Frame2;
		BITMAP *number0Frame3;
		
		BITMAP *number1RedFrame;
		BITMAP *number1Frame0;
		BITMAP *number1Frame1;
		BITMAP *number1Frame2;
		BITMAP *number1Frame3;
		
		BITMAP *number2RedFrame;
		BITMAP *number2Frame0;
		BITMAP *number2Frame1;
		BITMAP *number2Frame2;
		BITMAP *number2Frame3;
		
		BITMAP *number3RedFrame;
		BITMAP *number3Frame0;
		BITMAP *number3Frame1;
		BITMAP *number3Frame2;
		BITMAP *number3Frame3;
		
		BITMAP *number4RedFrame;
		BITMAP *number4Frame0;
		BITMAP *number4Frame1;
		BITMAP *number4Frame2;
		BITMAP *number4Frame3;
		
		BITMAP *number5RedFrame;
		BITMAP *number5Frame0;
		BITMAP *number5Frame1;
		BITMAP *number5Frame2;
		BITMAP *number5Frame3;
		
		BITMAP *number6RedFrame;
		BITMAP *number6Frame0;
		BITMAP *number6Frame1;
		BITMAP *number6Frame2;
		BITMAP *number6Frame3;
		
		BITMAP *number7RedFrame;
		BITMAP *number7Frame0;
		BITMAP *number7Frame1;
		BITMAP *number7Frame2;
		BITMAP *number7Frame3;
		
		BITMAP *number8RedFrame;
		BITMAP *number8Frame0;
		BITMAP *number8Frame1;
		BITMAP *number8Frame2;
		BITMAP *number8Frame3;
		
		BITMAP *number9RedFrame;
		BITMAP *number9Frame0;
		BITMAP *number9Frame1;
		BITMAP *number9Frame2;
		BITMAP *number9Frame3;
		
		
		//metodos privados
		void LoadSprites();
		void InitializeBitmaps();
		void StartAttributes();
		
		void BuildInterface();
		
		void BuildPlayer1LifeBar();	
		void BuildPlayer2LifeBar();	
		void BuildPlayer1ShildBar();	
		void BuildPlayer2ShildBar();	
		void BuildTimer();			
		void BuildPlayer1SpecialBar();
		void BuildPlayer2SpecialBar();
		void BuildPlayer1SpecialPoints();
		void BuildPlayer2SpecialPoints();
		void BuildPlayer1PowBar();
		void BuildPlayer2PowBar();
		void TimerControl();
		void Calculation();

};
#endif//INTERFACE_H

























