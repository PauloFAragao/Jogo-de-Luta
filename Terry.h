#ifndef TERRY_H
#define TERRY_H

#include <allegro.h>
#include "Player.h"

class Terry:public Player
{

	public :
		
		//construtor
			Terry(){}
			Terry( int playerNumber );
		
		//destrutor
			~Terry();
			
		//Metodos publicos
		BITMAP* GetPlayerSprite( int enemyX, int enemyY, bool gamePause, bool gameStart, bool enemyAttacking, bool takingDmg, bool flipCharacter );
			
	private:

		//metodos privados
		void LoadSprites();						//carrega os sprites na memoria
		void StartAttributes();					//inicia os valores das variaveis
		void TerryAnimations();					//centro das animações basicas
		
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
		void Anim15();
		void Anim16();
		void Anim17();
		void Anim18();
		void Anim19();
		void Anim20();
		void Anim21();
		void Anim22();
		void Anim23();
		void Anim24();
		void Anim25();
		void Anim26();
		void Anim27();
		void Anim28();
		void Anim29();
		void Anim30();
		void Anim31();
		void Anim32();
		void Anim33();
		void Anim34();
		void Anim35();
		void Anim36();
		void Anim37();
		void Anim38();
		void Anim39();
		void Anim40();
		void Anim41();
		void Anim42();
		void Anim43();
		void Anim44();
		void Anim45();
		void Anim46();
		void Anim47();
		void Anim48();
		void Anim49();
		void Anim50();
		void Anim51();
		void Anim52();
		void Anim53();
		void Anim54();
		void Anim55();
		void Anim56();
		void Anim57();
		void Anim58();
		void Anim59();
		void Anim60();
		void Anim61();
		void Anim62();
		void Anim63();
		void Anim64();
		void Anim65();
		
		//atributos privados
		int roundWave[2];
		int powerWave[2];
		int crackShoot[2];
		int crackShootJumping[2];
		int powerDunkStart[2];
		int powerDunkJumping[2];
		int powerDunkFalling[2];
		int weakBurnigKnuckleStart[2];
		int strongBurnigKnuckleStart[2];
		int burnigKnuckle[2];
		int risingTackleStart[2];
		int risingTackleJumping[2];
		int risingTackleEnd[2];
		int busterWolfStart[2];
		int busterWolf[2];
		int busterWolfEnd[2];
		int busterWolfFail[2];
		
		
};
#endif//TERRY_H
















