#ifndef PLAYER_H
#define PLAYER_H

#include <allegro.h>
#include "includes.h"

class Player
{
	public :
		
		//construtor
		Player(){}
		Player( int playerNumber ) ;
		
		//destrutor
		~Player();
		
		//Metodos publicos
		void PlayerRoutine( bool flipCharacter, int opponentX, int opponentY, bool opponentAttacking );
		
		bool ValidateAction(int value, bool flipCharacter );		//verifica se uma a��o pode ser feita
		bool VerifyFrame(int value);
		void ChangeAction(int value);								//muda o valor da a��o
		
		
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
		int	GetWeakPunch( int index );
		void SetWeakPunch( int weakPunch, int index );
		int GetStrongPunch( int index );
		void SetStrongPunch( int strongPunch, int index );
		int GetWeakKick( int index );
		void SetWeakKick( int weakKick, int index );
		int GetStrongKick( int index );
		void SetStrongKick( int strongKick, int index );
		int GetStrongKickEnd( int index );
		void SetStrongKickEnd( int strongKickEnd, int index );
		int GetCrouchedWeakPunch( int index );
		void SetCrouchedWeakPunch( int crouchedWeakPunch, int index );
		int GetCrouchedStrongPunch( int index );
		void SetCrouchedStrongPunch( int crouchedStrongPunch, int index );
		int GetCrouchedWeakKick( int index );
		void SetCrouchedWeakKick( int crouchedWeakKick, int index );
		int GetCrouchedStrongKick( int index );
		void SetCrouchedStrongKick( int crouchedStrongKick, int index );
		int GetJumpingWeakPunch( int index );
		void SetJumpingWeakPunch( int jumpingWeakPunch, int index );
		int GetJumpingStrongPunch( int index );
		void SetJumpingStrongPunch( int jumpingStrongPunch, int index );
		int GetJumpingWeakKick( int index );
		void SetJumpingWeakKick( int jumpingWeakKick, int index );
		int GetJumpingStrongKick( int index );
		void SetJumpingStrongKick( int jumpingStrongKick, int index );
		int GetGluedStrongPunch( int index );
		void SetGluedStrongPunch( int gluedStrongPunch, int index );
		int GetGluedStrongKick( int index );
		void SetGluedStrongKick( int gluedStrongKick, int index );
		int GetSpecialAttackStart( int index);
		void SetSpecialAttackStart( int specialAttack, int index);
		int GetJumpingSpecialAttack( int index );
		void SetJumpingSpecialAttack( int jumpingSpecialAttack, int index );
		int GetWeakPunchForward( int index );
		void SetWeakPunchForward( int weakPunchForward, int index );
		int GetSpecialAttack( int index);
		void SetSpecialAttack( int specialAttack, int index);
		
		void SetTakingDmg( bool takingDmg );
		bool GetAttacking();
		void SetAttacking( bool attacking);

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
		void TrackImputs();													//captura os imputs do player
		void HorizontalMove( bool opponentAttacking, bool flipCharacter );	//movimenta��o do personagem na horizontal
		void Slowdown();													//desacelera��o do personagem
		void VerticalMove( bool flipCharacter );							//movimenta��o do personagem na vertical
		void writeOnBtTmPress(int pos, bool valor);							//escreve no array de tempos os tempos em que os bot�es foram pressionados
		void StartAttributes();												//inicia os atributos com os valores coretos

		//motor de imterpleta��o
		void InterpretationWalkWalkBackRun( bool flipCharacter );
		void InterpretationJumpBack( bool flipCharacter );
		void InterpretationJump( bool flipCharacter );
		void InterpretationStrongDiagonalJump( bool flipCharacter );
		void InterpretationCrouch( bool flipCharacter );
		void InterpretationDefence( bool opponentAttacking, bool flipCharacter );
		void InterpretationRolling( bool flipCharacter );
		void InterpretationChangeSide( bool flipCharacter );
		void InterpretationSpecialAttack( bool flipCharacter );
		void SpecialControl();
		
		//ataques basicos
		void InterpretationWeakPunch( int opponentX, int opponentY, bool flipCharacter );
		void InterpretationStrongPunch( int opponentX, int opponentY, bool flipCharacter );
		void InterpretationWeakKick( int opponentX, int opponentY, bool flipCharacter );
		void InterpretationStrongKick( int opponentX, int opponentY, bool flipCharacter );

		//atributos privados
		float x;				//posi��o em X do player
		float y;				//posi��o em Y do player
		float speedX;			//velocidade em X do player
		float speedY; 			//velocidade em Y do player
		int action;				//define a a��o que o player est� executando
		int playerNumber;		//define se o personagem � o jogador numero 1 ou 2
		
		bool canFastMove;		//Booleana para resolver o bug da corrida
			  		
		//caracteristicas do personagem
		int lifePoints;			//quantidade de pontos de vida atual do personagem
		int lifePointsMax;		//quantidade maxima de pontos de vida do personagem
		int shild;				//quantidade de pontos de defesa atual do personagem
		int especialBar;		//quantidade de pontos de especial
		int especialQuantity;	//quantos pontos de especial o personagem tem
		int powTime;			//tempo restante da barra quando o jogador esroura uma barra
		bool pow;				//se o jogador estourou uma barra
				
		//variaveis relacionadas a anima��o
		int frame;				//o frame que deve ser renderizado
		int capturaTempo;		//captura o tempo no momento que muda de frame para fazer uma verifica��o de quando deve trocar de frame novamente
		bool startAnimation;	//faz a anima��o iniciar
		
		bool toRight;			//indica para que lado o personagem est� virado
		
		//variaveis para resolver o bug da corrida
		bool antLoopBT0;
		bool antLoopBT2;
		bool antLoopBT4;
		bool antLoopBT5;
		bool antLoopBT6;
		bool antLoopBT7;
		
		int timeDelay;
		
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
		
	//variaveis relacionadas a captura dos tempos em que os bot�es s�o pressionados
		bool bt0TimeCapture;
		bool bt1TimeCapture;
		bool bt2TimeCapture;
		bool bt3TimeCapture;
		bool bt4TimeCapture;
		bool bt5TimeCapture;
		bool bt6TimeCapture;
		bool bt7TimeCapture;
		
		bool attacking;				//indica que o personagema est� atacando
		bool takingDmg;				//indica que o personagem sofreu dano <<< VARIAVEL TEMPORARIA
		
		//tempos das anima��es para o controle
		int idle[2];				//anima��o numero 0
		int crouching[2];			//anima��o numero 1
		int crouchedIdle[2];		//anima��o numero 2 e 3
		int walk[2];				//anima��o numero 4
		int walkBack[2];			//anima��o numero 5
		int rising[2];				//anima��o numero 6
		int endOfClimp[2];			//anima��o numero 7
		int falling[2];				//anima��o numero 8
		int fall[2];				//anima��o numero 9
		int strongFrontalDJ[2];		//anima��o numero 10
		int strongBackDJ[2];		//anima��o numero 11
		int run[2];					//anima��o numero 12
		int jumpBack[2];			//anima��o numero 13
		int jumpBackFall[2];		//anima��o numero 14
		int defending[2];			//anima��o numero 15
		int defence[2];				//anima��o numero 16
		int takingDamage[2];		//anima��o numero 17
		int defendExit[2];			//anima��o numero 18
		int defendingCrouched[2];	//anima��o numero 19
		int defenceCrouched[2];		//anima��o numero 20
		int takingDamageCrouched[2];//anima��o numero 21
		int defendExitCrouched[2];	//anima��o numero 22
		int frontRolling[2];		//anima��o numero 23
		int backRolling[2];			//anima��o numero 24
		int slide[2];				//anima��o numero 25
		int frontRollingEnd[2];		//anima��o numero 26
		int backRollingEnd[2];		//anima��o numero 27
		int changeSide[2];			//anima��o numero 28
		int changeSideCrouched[2];	//anima��o numero 29
		int weakPunch[2];			//anima��o numero 30
		int strongPunch[2];			//anima��o numero 31
		int weakKick[2];			//anima��o numero 32
		int strongKick[2];			//anima��o numero 33
		int strongKickEnd[2];		//anima��o numero 34
		int crouchedWeakPunch[2];	//anima��o numero 35
		int crouchedStrongPunch[2];	//anima��o numero 36
		int crouchedWeakKick[2];	//anima��o numero 37
		int crouchedStrongKick[2];	//anima��o numero 38
		int jumpingWeakPunch[2];	//anima��o numero 39
		int jumpingStrongPunch[2];	//anima��o numero 40
		int jumpingWeakKick[2];		//anima��o numero 41
		int jumpingStrongKick[2];	//anima��o numero 42
		int gluedStrongPunch[2];	//anima��o numero 43
		int gluedStrongKick[2];		//anima��o numero 44
		int specialAttackStart[2];	//anima��o numero 45
		int jumpingSpecialAttack[2];//anima��o numero 46
		int weakPunchForward[2];	//anima��o numero 47
		int specialAttack[2];		//anima��o numero 48
		
		//tempos em que os bot�es s�o pressionados
		int btTPress[8][10];
		
		//array para carregar os sprites		
		//0 - personagem virado para a direita
		//1 - personagem virado para a esquerda
		BITMAP *sprites[2][QTDFRAMES];

};
#endif//PLAYER_H













