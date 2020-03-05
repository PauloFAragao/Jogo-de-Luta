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
			
	private:
		
		//metodos privados
		void LoadSprites();
		void TerryAnimations();
		
};
#endif//TERRY_H