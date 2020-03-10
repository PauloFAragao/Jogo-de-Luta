#ifndef PLAYER_H
#define PLAYER_H


#include <allegro.h>


class Player
{
	public :
		
		//construtor
		Player();
		
		//destrutor
		~Player();
		
		//Metodos publicos
		void PlayerRoutine();
		
		bool ValidateAction(int value);				//verifica se uma ação pode ser feita
		bool VerifyFrame(int value);
		void ChangeAction(int value);				//muda o valor da ação
		
		
		//---gets & sets---
		
		float GetX();
		void  SetX(float x);
		float GetY();
		void  SetY(float y);
		float GetSpeedX();
		void  SetSpeedX(float speedX);
		float GetSpeedY();
		void  SetSpeedY(float speedY);
		int   GetFrame();
		void  SetFrame(int frame);
		bool  GetStartAnimation();
		void  SetStartAnimation(bool startAnimation);
		int   GetAction();
		void  SetAction(int action);
		bool  GetToRight();
		void  SetToRight(bool toRight);
		void  SetLifePoints(int lifePoints);
		int   GetLifePoints();
		void  SetLifePointsMax(int lifePointsMax);
		int   GetLifePointsMax();
		void  SetDefence(int defence);
		int   GetDefence();
		void  SetEspecialBar(int especialBar);
		int   GetEspecialBar();
		void  SetEspecialQuantity(int especialQuantity);
		int   GetEspecialQuantity();
		void  SetPowTime(int powTime);
		int   GetPowTime();
		void  SetPow(int pow);
		bool  GetPow();
		
		int  GetCapturaTParaOUltimoFrame();
		void SetCapturaTParaOUltimoFrame(int capturaTempoParaOUltimoFrame);

		
		int  GetCapturaTempo();
		void SetCapturaTempo(int capturaTempo);
		
		int GetBtTPress(int botao, int pos);
		
		void SetIdle(int idle, int index);
		void SetCrouching(int crouching, int index);
		void SetCrouchedIdle(int crouchedIdle, int index);
		void SetWalk(int walk, int index);
		void SetWalkBack(int walkBack, int index);
		void SetRising(int rising, int index);
		void SetEndOfClimp(int endOfClimp, int index);
		void SetFalling(int falling, int index);
		void SetFall(int fall, int index);
		void SetStrongFrontalDJ(int strongFrontalDJ, int index);
		void SetStrongBackDJ(int strongBackDJ, int index);
		void SetRun(int run, int index);
		void SetJumpBack(int jumpBack, int index);
		void SetJumpBackFall(int jumpBackFall, int index);
		void SetSlide(int slide, int index);
		
		BITMAP *GetPlayerSprite();
		BITMAP *GetSprites(int index);
		void    SetSrites(BITMAP *sprite, int index);
		
		bool GetButton00();
		bool GetButton01();
		bool GetButton02();
		bool GetButton03();
		bool GetButton04();
		bool GetButton05();
		bool GetButton06();
		bool GetButton07();
		
	private:
		
		float x;				//posição em X do player
		float y;				//posição em Y do player
		float speedX;			//velocidade em X do player
		float speedY; 			//velocidade em Y do player
		int action;				//define a ação que o player está executando
		
		//caracteristicas do personagem
		int lifePoints;			//quantidade de pontos de vida atual do personagem
		int lifePointsMax;		//quantidade maxima de pontos de vida do personagem
		int defence;			//quantidade de pontos de defesa atual do personagem
		int especialBar;		//quantidade de pontos de especial
		int especialQuantity;	//quantos pontos de especial o personagem tem
		int powTime;			//tempo restante da barra quando o jogador esroura uma barra
		bool pow;				//se o jogador estourou uma barra
		
		//para todas as vezes que o ultimo frame precisa ser renderizado por algum tempo mais não pode ser controlado dentro da função especifica da animação
		int capturaTempoParaOUltimoFrame;
		
		//variaveis relacionadas a animação
		int frame;				//o frame que deve ser renderizado
		int capturaTempo;		//captura o tempo no momento que muda de frame para fazer uma verificação de quando deve trocar de frame novamente
		bool startAnimation;	//faz a animação iniciar
		
		bool toRight;			//indica para que lado o personagem está virado

		//variaveis para resolver o bug da corrida
		bool antLoopBT0;
		bool antLoopBT2;
		
	//direcionais
		bool button00;	//esquerda
		bool button01;	//baixo
		bool button02;	//direita
		bool button03;	//cima
	//action buttons
		bool button04;	//soco fraco
		bool button05;	//soco forte
		bool button06;	//chute fraco
		bool button07;	//chute forte
		
	//variaveis relacionadas a captura dos tempos em que os botões são pressionados
		bool bt0TimeCapture;
		bool bt1TimeCapture;
		bool bt2TimeCapture;
		bool bt3TimeCapture;
		bool bt4TimeCapture;
		bool bt5TimeCapture;
		bool bt6TimeCapture;
		bool bt7TimeCapture;
		
		//tempos das animações para o controle
		int idle[2];				//animação numero 0
		int crouching[2];			//animação numero 1
		int crouchedIdle[2];		//animação numero 2 e 3
		int walk[2];				//animação numero 4
		int walkBack[2];			//animação numero 5
		int rising[2];				//animação numero 6
		int endOfClimp[2];			//animação numero 7
		int falling[2];				//animação numero 8
		int fall[2];				//animação numero 9
		int strongFrontalDJ[2];		//animação numero 10
		int strongBackDJ[2];		//animação numero 11
		int run[2];					//animação numero 12
		int jumpBack[2];			//animação numero 13
		int jumpBackFall[2];		//animação numero 14
		int slide[2];				//animação numero 25
		
		//tempos em que os botões são pressionados
		int btTPress[8][10];
		
		//array para carregar os sprites
		BITMAP *sprites[100];
		
		//Metodos privados
		void TrackImputs();							//captura os imputs do player
		void HorizontalMove();						//movimentação do personagem na horizontal
		void VerticalMove();						//movimentação do personagem na vertical
		void writeOnBtTmPress(int pos, bool valor);	//escreve no array de tempos os tempos em que os botões foram pressionados
		void StartAttributes();						//inicia os atributos com os valores coretos
		
};
#endif//PLAYER_H














