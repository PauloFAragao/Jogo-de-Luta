#ifndef TERRY_H
#define TERRY_H

#include <allegro.h>
#include "Player.h"

class Terry:public Player
{

	public :
		
		//construtor
			Terry();
		
		//destrutor
			~Terry();
			
		//Metodos publicos
		void Routine();
			
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
		
};
#endif//TERRY_H