/*
*	Criado por: Paulo (debek_metal@hotmail.com)
*	Versão da biblioteca Allegro: 4.2.2
*/


#include <allegro.h>
#include "Interface.h"
#include "Player.h"
#include "Terry.h"
#include "Scenario.h"


int WINDOW_WIDTH  = 1440;
int WINDOW_HEIGHT = 900;


int main()
{
    BITMAP *buffer = NULL;
    allegro_init();
    set_color_depth(32);
    install_keyboard();
    set_gfx_mode(GFX_AUTODETECT_WINDOWED, WINDOW_WIDTH, WINDOW_HEIGHT, 0, 0);
    buffer = create_bitmap(SCREEN_W, SCREEN_H);
    
//variaveis
    Terry p1;
    //Player p2;
    
    Interface ui;
    
    Scenario scenario;
    
    BITMAP *p2 = load_bitmap("sprites/personagens/terry/notToRight/secondaryColor/00Idle/idle000.bmp", NULL);
            
	while(!key[KEY_ESC])
	{
        clear(buffer);
        
        //rotina principal da classe player
        p1.Routine();
        
        //rotina principal da classe interface
        //ui.Routine();
		
		
	//render
		
		//cenario do jogo
		//draw_sprite(buffer, scenario.GetScenarioSprite(), scenario.GetX(), scenario.GetY() );
		
		//personagens
		draw_sprite(buffer, p1.GetPlayerSprite(), p1.GetX(), p1.GetY());
		draw_sprite(buffer, p2, 500, 80);
		
		//interface
		//draw_sprite(buffer, ui.GetCompleteInterface(), 0, 0 );
		
		
		//imprime as booleanas dos botões
		if(p1.GetButton00()) 	textprintf_ex(buffer, font, 1200, 10, makecol(255, 0, 0), -1, "Direcional - tras: true ");
		else					textprintf_ex(buffer, font, 1200, 10, makecol(255, 0, 0), -1, "Direcional - tras: false ");
		if(p1.GetButton01()) 	textprintf_ex(buffer, font, 1200, 20, makecol(255, 0, 0), -1, "Direcional - baixo: true ");
		else					textprintf_ex(buffer, font, 1200, 20, makecol(255, 0, 0), -1, "Direcional - baixo: false ");
		if(p1.GetButton02()) 	textprintf_ex(buffer, font, 1200, 30, makecol(255, 0, 0), -1, "Direcional - frente: true ");
		else					textprintf_ex(buffer, font, 1200, 30, makecol(255, 0, 0), -1, "Direcional - frente: false ");
		if(p1.GetButton03()) 	textprintf_ex(buffer, font, 1200, 40, makecol(255, 0, 0), -1, "Direcional - cima: true ");
		else					textprintf_ex(buffer, font, 1200, 40, makecol(255, 0, 0), -1, "Direcional - cima: false ");
		if(p1.GetButton04()) 	textprintf_ex(buffer, font, 1200, 60, makecol(255, 0, 0), -1, "Soco fraco: true ");
		else					textprintf_ex(buffer, font, 1200, 60, makecol(255, 0, 0), -1, "Soco fraco: false ");
		if(p1.GetButton05()) 	textprintf_ex(buffer, font, 1200, 70, makecol(255, 0, 0), -1, "Soco forte: true ");
		else					textprintf_ex(buffer, font, 1200, 70, makecol(255, 0, 0), -1, "Soco forte: false ");
		if(p1.GetButton06()) 	textprintf_ex(buffer, font, 1200, 80, makecol(255, 0, 0), -1, "Chute fraco: true ");
		else					textprintf_ex(buffer, font, 1200, 80, makecol(255, 0, 0), -1, "Chute fraco: false ");
		if(p1.GetButton07()) 	textprintf_ex(buffer, font, 1200, 90, makecol(255, 0, 0), -1, "Chute forte: true ");
		else					textprintf_ex(buffer, font, 1200, 90, makecol(255, 0, 0), -1, "Chute forte: false ");
		
		
		//posições e velocidade
		textprintf_ex(buffer, font, 1200, 110, makecol(255, 255, 0), -1, "pos X  %f ", p1.GetX());
		textprintf_ex(buffer, font, 1200, 120, makecol(255, 255, 0), -1, "pos y  %f ", p1.GetY());
		textprintf_ex(buffer, font, 1200, 130, makecol(255, 255, 0), -1, "speed X  %f ", p1.GetSpeedX());
		textprintf_ex(buffer, font, 1200, 140, makecol(255, 255, 0), -1, "speed y  %f ", p1.GetSpeedY());
		textprintf_ex(buffer, font, 1200, 150, makecol(255, 255, 0), -1, "action: %d ", p1.GetAction());
		
		
		//imprime o frame
		textprintf_ex(buffer, font, 10, 10, makecol(255, 0, 0), -1, " frame: %d ", p1.GetFrame());
		
		
		//
		//textprintf_ex(buffer, font, 10, 20, makecol(255, 0, 255), -1, " calculo: %d ", clock() - p1.GetBtTPress(3,8));
		
		
		//imprime os tempos dentro do array
		textprintf_ex(buffer, font, 10, 30, makecol(255, 0, 0), -1, "Bt0 T0=%d  T1=%d  T2=%d  T3=%d  T4=%d  T5=%d  T6=%d  T7=%d  T8=%d  T9=%d "
			, p1.GetBtTPress(0,0) , p1.GetBtTPress(0,1) , p1.GetBtTPress(0,2) , p1.GetBtTPress(0,3) , p1.GetBtTPress(0,4)
			, p1.GetBtTPress(0,5) , p1.GetBtTPress(0,6) , p1.GetBtTPress(0,7) , p1.GetBtTPress(0,8) , p1.GetBtTPress(0,9) );
		
		textprintf_ex(buffer, font, 10, 40, makecol(255, 0, 0), -1, "Bt1 T0=%d  T1=%d  T2=%d  T3=%d  T4=%d  T5=%d  T6=%d  T7=%d  T8=%d  T9=%d "
			, p1.GetBtTPress(1,0) , p1.GetBtTPress(1,1) , p1.GetBtTPress(1,2) , p1.GetBtTPress(1,3) , p1.GetBtTPress(1,4)
			, p1.GetBtTPress(1,5) , p1.GetBtTPress(1,6) , p1.GetBtTPress(1,7) , p1.GetBtTPress(1,8) , p1.GetBtTPress(1,9) );
		
		textprintf_ex(buffer, font, 10, 50, makecol(255, 0, 0), -1, "Bt2 T0=%d  T1=%d  T2=%d  T3=%d  T4=%d  T5=%d  T6=%d  T7=%d  T8=%d  T9=%d "
			, p1.GetBtTPress(2,0) , p1.GetBtTPress(2,1) , p1.GetBtTPress(2,2) , p1.GetBtTPress(2,3) , p1.GetBtTPress(2,4)
			, p1.GetBtTPress(2,5) , p1.GetBtTPress(2,6) , p1.GetBtTPress(2,7) , p1.GetBtTPress(2,8) , p1.GetBtTPress(2,9) );
			
		textprintf_ex(buffer, font, 10, 60, makecol(255, 0, 0), -1, "Bt3 T0=%d  T1=%d  T2=%d  T3=%d  T4=%d  T5=%d  T6=%d  T7=%d  T8=%d  T9=%d "
			, p1.GetBtTPress(3,0) , p1.GetBtTPress(3,1) , p1.GetBtTPress(3,2) , p1.GetBtTPress(3,3) , p1.GetBtTPress(3,4)
			, p1.GetBtTPress(3,5) , p1.GetBtTPress(3,6) , p1.GetBtTPress(3,7) , p1.GetBtTPress(3,8) , p1.GetBtTPress(3,9) );	
			
		textprintf_ex(buffer, font, 10, 70, makecol(255, 0, 0), -1, "Bt4 T0=%d  T1=%d  T2=%d  T3=%d  T4=%d  T5=%d  T6=%d  T7=%d  T8=%d  T9=%d "
			, p1.GetBtTPress(4,0) , p1.GetBtTPress(4,1) , p1.GetBtTPress(4,2) , p1.GetBtTPress(4,3) , p1.GetBtTPress(4,4)
			, p1.GetBtTPress(4,5) , p1.GetBtTPress(4,6) , p1.GetBtTPress(4,7) , p1.GetBtTPress(4,8) , p1.GetBtTPress(4,9) );
		
		textprintf_ex(buffer, font, 10, 80, makecol(255, 0, 0), -1, "Bt5 T0=%d  T1=%d  T2=%d  T3=%d  T4=%d  T5=%d  T6=%d  T7=%d  T8=%d  T9=%d "
			, p1.GetBtTPress(5,0) , p1.GetBtTPress(5,1) , p1.GetBtTPress(5,2) , p1.GetBtTPress(5,3) , p1.GetBtTPress(5,4)
			, p1.GetBtTPress(5,5) , p1.GetBtTPress(5,6) , p1.GetBtTPress(5,7) , p1.GetBtTPress(5,8) , p1.GetBtTPress(5,9) );
		
		textprintf_ex(buffer, font, 10, 90, makecol(255, 0, 0), -1, "Bt6 T0=%d  T1=%d  T2=%d  T3=%d  T4=%d  T5=%d  T6=%d  T7=%d  T8=%d  T9=%d "
			, p1.GetBtTPress(6,0) , p1.GetBtTPress(6,1) , p1.GetBtTPress(6,2) , p1.GetBtTPress(6,3) , p1.GetBtTPress(6,4)
			, p1.GetBtTPress(6,5) , p1.GetBtTPress(6,6) , p1.GetBtTPress(6,7) , p1.GetBtTPress(6,8) , p1.GetBtTPress(6,9) );
			
		textprintf_ex(buffer, font, 10, 100, makecol(255, 0, 0), -1, "Bt7 T0=%d  T1=%d  T2=%d  T3=%d  T4=%d  T5=%d  T6=%d  T7=%d  T8=%d  T9=%d "
			, p1.GetBtTPress(7,0) , p1.GetBtTPress(7,1) , p1.GetBtTPress(7,2) , p1.GetBtTPress(7,3) , p1.GetBtTPress(7,4)
			, p1.GetBtTPress(7,5) , p1.GetBtTPress(7,6) , p1.GetBtTPress(7,7) , p1.GetBtTPress(7,8) , p1.GetBtTPress(7,9) );


		
		blit(buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
        rest(10);
    }
    
    destroy_bitmap(buffer);
    //destroy_bitmap(cenario);

    allegro_exit();
    return 0;
}
END_OF_MAIN();
