/*
*
*	Criado por: Paulo (debek_metal@hotmail.com)
*	Programa: Jogo de luta escrito em c++ usando a biblioteca allegro 4 ( Baseado nos jogos da franquia the king of fighters )
*	Nome da ide: falcon c++
*	Verção da ide: 3.3.0.0
*	Versão da biblioteca Allegro: 4.2.2
*	
*/


#include <allegro.h>
#include "Game.h"


#define COMPLETERENDER true


int WINDOW_WIDTH  = 1140;
int WINDOW_HEIGHT = 630;

volatile int exitGame=false;
void handler(){exitGame=true;}END_OF_FUNCTION(handler);

int main()
{
    allegro_init();
    set_color_depth(32);
    install_keyboard();
    set_gfx_mode(GFX_AUTODETECT_WINDOWED, WINDOW_WIDTH, WINDOW_HEIGHT, 0, 0);
    set_close_button_callback(handler);
    
//variaveis
	Game g (1,1) ;
            
	while(!exitGame)
	{
		if(key[KEY_ESC]) exitGame = true;
			
		blit( g.GetGameScreen() , screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
	
        rest(10);
    }

    allegro_exit();
    return 0;
}
END_OF_MAIN();






//threaded





