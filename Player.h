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
		void Routine();
		
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

		int GetBtTPress(int botao, int pos);
		
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
		int capturaTempo;		//captura o tempo no momento que muda de frame para fazer uma verificação de quando deve trocar de frame novamente
		int frame;				//o frame que deve ser renderizado
		bool startAnimation;	//faz a animação iniciar
		
		bool toRight;			//indica para que lado o personagem está virado
		bool antLoopJumpBack;	//para criar um controle e evitar loop quando o personagem pula para tras
		
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
				
		//tempos em que os botões são pressionados
		int btTPress[8][10];
		
		//array para carregar os sprites
		BITMAP *sprites[100];
		
		//Metodos privados
		void TrackImputs();							//captura os imputs do player
		void PlayerBasicAnimations();				//centro das animações basicas
		void HorizontalMove();						//movimentação do personagem na horizontal
		void VerticalMove();						//movimentação do personagem na vertical
		void writeOnBtTmPress(int pos, bool valor);	//escreve no array de tempos os tempos em que os botões foram pressionados
		void ChangeAction(int value);				//muda o valor da ação
		void StartAttributes();						//inicia os atributos com os valores coretos
		
		bool ValidateAction(int value);				//verifica se uma ação pode ser feita
		bool VerifyFrame(int value);				//verifica se o a animação já foi iniciada
		
		void InterpretationEngine();				//responsavel por fazer as interpletações
		
		//animações
		void Anim00();
		void Anim01();
		void Anim02();
		void Anim03();
		void Anim04();
		void Anim05();
		void Anim06();	
		void Anim07();
		void Anim08();
		void Anim09();
		void Anim10();
		void Anim11();
		void Anim12();
		void Anim13();
		void Anim14();
		
};
#endif//PLAYER_H














