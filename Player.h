#ifndef PLAYER_H
#define PLAYER_H

#include <allegro.h>

#define QTDFRAMES 131

class Player
{
	public :
		
		//construtor
		Player(){}
		Player( int playerNumber ) ;
		
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
		void  SetShild(int shild);
		int   GetShild();
		void  SetEspecialBar(int especialBar);
		int   GetEspecialBar();
		void  SetEspecialQuantity(int especialQuantity);
		int   GetEspecialQuantity();
		void  SetPowTime(int powTime);
		int   GetPowTime();
		void  SetPow(int pow);
		bool  GetPow();

		int  GetCapturaTempo();
		void SetCapturaTempo(int capturaTempo);
		
		int GetBtTPress(int botao, int pos);
		
		int GetIdle( int index );
		void SetIdle(int idle, int index);
		int GetCrouching( int index );
		void SetCrouching(int crouching, int index);
		int GetCrouchedIdle( int index );
		void SetCrouchedIdle(int crouchedIdle, int index);
		int GetWalk( int index );
		void SetWalk(int walk, int index);
		int GetWalkBack( int index );
		void SetWalkBack(int walkBack, int index);
		int GetRising( int index );
		void SetRising(int rising, int index);
		int GetEndOfClimp( int index );
		void SetEndOfClimp(int endOfClimp, int index);
		int GetFalling( int index );
		void SetFalling(int falling, int index);
		int GetFall( int index );
		void SetFall(int fall, int index);
		int GetStrongFrontalDJ( int index );
		void SetStrongFrontalDJ(int strongFrontalDJ, int index);
		int GetStrongBackDJ( int index );
		void SetStrongBackDJ(int strongBackDJ, int index);
		int GetRun( int index );
		void SetRun(int run, int index);
		int GetJumpBack( int index );
		void SetJumpBack(int jumpBack, int index);
		int GetJumpBackFall( int index );
		void SetJumpBackFall(int jumpBackFall, int index);
		int GetDefending( int index );
		void SetDefending(int defending, int index);
		int GetDefence( int index );
		void SetDefence(int defence, int index);
		int GetTakingDamage( int index );
		void SetTakingDamage(int takingDamage, int index);
		int GetDefendExit( int index );
		void SetDefendExit(int defendExit, int index);
		int GetDefendingCrouched( int index );
		void SetDefendingCrouched(int defendingCrouched, int index);
		int GetDefenceCrouched( int index );
		void SetDefenceCrouched(int defenceCrouched, int index);
		int GetTakingDamageCrouched( int index );
		void SetTakingDamageCrouched(int takingDamageCrouched, int index);
		int GetDefendExitCrouched( int index );
		void SetDefendExitCrouched(int defendExitCrouched, int index);
		int GetFrontRolling( int index );
		void SetFrontRolling(int frontRolling, int index);
		int GetBackRolling( int index );
		void SetBackRolling(int backRolling, int index);
		int GetSlide( int index );
		void SetSlide(int slide, int index);
		int GetFrontRollingEnd( int index );
		void SetFrontRollingEnd(int frontRollingEnd, int index);
		int GetBackRollingEnd( int index );
		void SetBackRollingEnd(int backRollingEnd, int index);
		int GetChangeSide( int index );
		void SetChangeSide(int changeSide, int index);
		int GetChangeSideCrouched( int index );
		void SetChangeSideCrouched(int changeSideCrouched, int index);

		void SetTakingDmg(bool takingDmg);

		//BITMAP *GetPlayerSprite();
		BITMAP *GetSprites(int side, int index);
		void SetSrites(BITMAP *sprite, int index, int side );
		
		bool GetButton00();
		bool GetButton01();
		bool GetButton02();
		bool GetButton03();
		bool GetButton04();
		bool GetButton05();
		bool GetButton06();
		bool GetButton07();
		
	private:
		
		//Metodos privados
		void TrackImputs();							//captura os imputs do player
		void HorizontalMove();						//movimentação do personagem na horizontal
		void VerticalMove();						//movimentação do personagem na vertical
		void writeOnBtTmPress(int pos, bool valor);	//escreve no array de tempos os tempos em que os botões foram pressionados
		void StartAttributes();						//inicia os atributos com os valores coretos

		//motor de imterpletação
		void InterpretationWalkWalkBackRun();
		void InterpretationJumpBack();
		void InterpretationJump();
		void InterpretationStrongDiagonalJump();
		void InterpretationCrouch();
		void InterpretationDefence();
		void InterpretationRolling();
		void InterpretationChangeSide();

		//atributos privados
		float x;				//posição em X do player
		float y;				//posição em Y do player
		float speedX;			//velocidade em X do player
		float speedY; 			//velocidade em Y do player
		int action;				//define a ação que o player está executando
		int playerNumber;		//define se o personagem é o jogador numero 1 ou 2
		
		//caracteristicas do personagem
		int lifePoints;			//quantidade de pontos de vida atual do personagem
		int lifePointsMax;		//quantidade maxima de pontos de vida do personagem
		int shild;				//quantidade de pontos de defesa atual do personagem
		int especialBar;		//quantidade de pontos de especial
		int especialQuantity;	//quantos pontos de especial o personagem tem
		int powTime;			//tempo restante da barra quando o jogador esroura uma barra
		bool pow;				//se o jogador estourou uma barra
				
		//variaveis relacionadas a animação
		int frame;				//o frame que deve ser renderizado
		int capturaTempo;		//captura o tempo no momento que muda de frame para fazer uma verificação de quando deve trocar de frame novamente
		bool startAnimation;	//faz a animação iniciar
		
		bool toRight;			//indica para que lado o personagem está virado
		
		bool antLoopChangeSide;//VARIAVEL TEMPORARIA

		//variaveis para resolver o bug da corrida
		bool antLoopBT0;
		bool antLoopBT2;
		
	//direcionais
		bool button00;			//esquerda
		bool button01;			//baixo
		bool button02;			//direita
		bool button03;			//cima
	//action buttons
		bool button04;			//soco fraco
		bool button05;			//soco forte
		bool button06;			//chute fraco
		bool button07;			//chute forte
		
	//variaveis relacionadas a captura dos tempos em que os botões são pressionados
		bool bt0TimeCapture;
		bool bt1TimeCapture;
		bool bt2TimeCapture;
		bool bt3TimeCapture;
		bool bt4TimeCapture;
		bool bt5TimeCapture;
		bool bt6TimeCapture;
		bool bt7TimeCapture;
		
		bool attacking;				//indica que o personagema está atacando
		bool opponentAttacking;		//indica que o oponente está atacando
		bool takingDmg;			//indica que o personagem sofreu dano <<< VARIAVEL TEMPORARIA
		
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
		int defending[2];			//animação numero 15
		int defence[2];				//animação numero 16
		int takingDamage[2];		//animação numero 17
		int defendExit[2];			//animação numero 18
		int defendingCrouched[2];	//animação numero 19
		int defenceCrouched[2];		//animação numero 20
		int takingDamageCrouched[2];//animação numero 21
		int defendExitCrouched[2];	//animação numero 22
		int frontRolling[2];		//animação numero 23
		int backRolling[2];			//animação numero 24
		int slide[2];				//animação numero 25
		int frontRollingEnd[2];		//animação numero 26
		int backRollingEnd[2];		//animação numero 27
		int changeSide[2];			//animação numero 28
		int changeSideCrouched[2];	//animação numero 29
		
		//tempos em que os botões são pressionados
		int btTPress[8][10];
		
		//array para carregar os sprites		
		//0 - personagem virado para a direita
		//1 - personagem virado para a esquerda
		BITMAP *sprites[2][QTDFRAMES];

};
#endif//PLAYER_H













