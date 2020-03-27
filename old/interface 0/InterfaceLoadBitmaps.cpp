#include <allegro.h>
#include "Interface.h"


/**
 * Carrega as imagens do disco para a constru��o da interface do jogo
 */
void Interface::LoadSprites()
{
	
	//frame dos personagens
	framePlayer1 = load_bitmap("sprites/interface/terryFramePlayer1.bmp", NULL);
	framePlayer2 = load_bitmap("sprites/interface/terryFramePlayer2.bmp", NULL);
	
	
	//barras de vida
	lifeBarsInterface = load_bitmap("sprites/interface/LifeBarsInterface.bmp", NULL);
	LifeBarGreen = load_bitmap("sprites/interface/GreenLifeBar.bmp", NULL);
	LifeBarRed = load_bitmap("sprites/interface/RedLifeBar.bmp", NULL);
	shildBar = load_bitmap("sprites/interface/ShildBar.bmp", NULL);
	
	
	//interface de especial do player 1
	specialInterface1Player1 = load_bitmap("sprites/interface/SpecialInterface1Player1.bmp", NULL);
	specialInterface2Player1 = load_bitmap("sprites/interface/SpecialInterface2Player1.bmp", NULL);
	
	
	//interface de especial do player 2
	specialInterface1Player2 = load_bitmap("sprites/interface/SpecialInterface1Player2.bmp", NULL);
	specialInterface2Player2 = load_bitmap("sprites/interface/SpecialInterface2Player2.bmp", NULL);

	
	//barras de especial
	specialBarBlue = load_bitmap("sprites/interface/BlueSpecialBar.bmp", NULL);
	specialBarPurple = load_bitmap("sprites/interface/PurpleSpecialBar.bmp", NULL);
	specialBarYellow = load_bitmap("sprites/interface/YellowSpecialBar.bmp", NULL);
	powBarP1 = load_bitmap("sprites/interface/PowBarPlayer1.bmp", NULL);
	powBarP2 = load_bitmap("sprites/interface/PowBarPlayer2.bmp", NULL);
	maximumSpecialBarP1 = load_bitmap("sprites/interface/MaximumSpecialBarP1.bmp", NULL);
	maximumSpecialBarP2 = load_bitmap("sprites/interface/MaximumSpecialBarP2.bmp", NULL);
	
	
	//carregar os numeros para os especiais
	specialNumber0 = load_bitmap("sprites/interface/SpecialNumber0.bmp", NULL);
	specialNumber1 = load_bitmap("sprites/interface/SpecialNumber1.bmp", NULL);
	specialNumber2 = load_bitmap("sprites/interface/SpecialNumber2.bmp", NULL);
	specialNumber3 = load_bitmap("sprites/interface/SpecialNumber3.bmp", NULL);
	specialNumber4 = load_bitmap("sprites/interface/SpecialNumber4.bmp", NULL);
	specialNumber5 = load_bitmap("sprites/interface/SpecialNumber5.bmp", NULL);
	
	
	//carregar os numeros
	number0Frame0 = load_bitmap("sprites/interface/Number0-0.bmp", NULL);
	number0Frame1 = load_bitmap("sprites/interface/Number0-1.bmp", NULL);
	number0Frame2 = load_bitmap("sprites/interface/Number0-2.bmp", NULL);
	number0Frame3 = load_bitmap("sprites/interface/Number0-3.bmp", NULL);
	
	number1Frame0 = load_bitmap("sprites/interface/Number1-0.bmp", NULL);
	number1Frame1 = load_bitmap("sprites/interface/Number1-1.bmp", NULL);
	number1Frame2 = load_bitmap("sprites/interface/Number1-2.bmp", NULL);
	number1Frame3 = load_bitmap("sprites/interface/Number1-3.bmp", NULL);
	
	number2Frame0 = load_bitmap("sprites/interface/Number2-0.bmp", NULL);
	number2Frame1 = load_bitmap("sprites/interface/Number2-1.bmp", NULL);
	number2Frame2 = load_bitmap("sprites/interface/Number2-2.bmp", NULL);
	number2Frame3 = load_bitmap("sprites/interface/Number2-3.bmp", NULL);
	
	number3Frame0 = load_bitmap("sprites/interface/Number3-0.bmp", NULL);
	number3Frame1 = load_bitmap("sprites/interface/Number3-1.bmp", NULL);
	number3Frame2 = load_bitmap("sprites/interface/Number3-2.bmp", NULL);
	number3Frame3 = load_bitmap("sprites/interface/Number3-3.bmp", NULL);
	
	number4Frame0 = load_bitmap("sprites/interface/Number4-0.bmp", NULL);
	number4Frame1 = load_bitmap("sprites/interface/Number4-1.bmp", NULL);
	number4Frame2 = load_bitmap("sprites/interface/Number4-2.bmp", NULL);
	number4Frame3 = load_bitmap("sprites/interface/Number4-3.bmp", NULL);
	
	number5Frame0 = load_bitmap("sprites/interface/Number5-0.bmp", NULL);
	number5Frame1 = load_bitmap("sprites/interface/Number5-1.bmp", NULL);
	number5Frame2 = load_bitmap("sprites/interface/Number5-2.bmp", NULL);
	number5Frame3 = load_bitmap("sprites/interface/Number5-3.bmp", NULL);
	
	number6Frame0 = load_bitmap("sprites/interface/Number6-0.bmp", NULL);
	number6Frame1 = load_bitmap("sprites/interface/Number6-1.bmp", NULL);
	number6Frame2 = load_bitmap("sprites/interface/Number6-2.bmp", NULL);
	number6Frame3 = load_bitmap("sprites/interface/Number6-3.bmp", NULL);
	
	number7Frame0 = load_bitmap("sprites/interface/Number7-0.bmp", NULL);
	number7Frame1 = load_bitmap("sprites/interface/Number7-1.bmp", NULL);
	number7Frame2 = load_bitmap("sprites/interface/Number7-2.bmp", NULL);
	number7Frame3 = load_bitmap("sprites/interface/Number7-3.bmp", NULL);
	
	number8Frame0 = load_bitmap("sprites/interface/Number8-0.bmp", NULL);
	number8Frame0 = load_bitmap("sprites/interface/Number8-1.bmp", NULL);
	number8Frame0 = load_bitmap("sprites/interface/Number8-2.bmp", NULL);
	number8Frame0 = load_bitmap("sprites/interface/Number8-3.bmp", NULL);
	
	number9Frame0 = load_bitmap("sprites/interface/Number9-0.bmp", NULL);
	number9Frame1 = load_bitmap("sprites/interface/Number9-1.bmp", NULL);
	number9Frame2 = load_bitmap("sprites/interface/Number9-2.bmp", NULL);
	number9Frame3 = load_bitmap("sprites/interface/Number9-3.bmp", NULL);
	
	number0RedFrame = load_bitmap("sprites/interface/Number0-red.bmp", NULL);
	number1RedFrame = load_bitmap("sprites/interface/Number1-red.bmp", NULL);
	number2RedFrame = load_bitmap("sprites/interface/Number2-red.bmp", NULL);
	number3RedFrame = load_bitmap("sprites/interface/Number3-red.bmp", NULL);
	number4RedFrame = load_bitmap("sprites/interface/Number4-red.bmp", NULL);
	number5RedFrame = load_bitmap("sprites/interface/Number5-red.bmp", NULL);
	number6RedFrame = load_bitmap("sprites/interface/Number6-red.bmp", NULL);
	number7RedFrame = load_bitmap("sprites/interface/Number7-red.bmp", NULL);
	number8RedFrame = load_bitmap("sprites/interface/Number8-red.bmp", NULL);
	number9RedFrame = load_bitmap("sprites/interface/Number9-red.bmp", NULL);
	
	
}END_OF_FUNCTION(LoadSprites);


/**
 * Inicializa os bitmaps que v�o ser manipulados
 */
void Interface::InitializeBitmaps()
{

	
	completeInterface =	create_bitmap(SCREEN_W, SCREEN_H);//inicializa o bitmap
	rectfill( completeInterface, 0, 0, SCREEN_W, SCREEN_H, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	
//barras de vida
	player1LifeBarGreen = create_bitmap(401, 19);//inicializa o bitmap
	rectfill( player1LifeBarGreen, 0, 0, 401, 19, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	
	player2LifeBarGreen = create_bitmap(401, 19);//inicializa o bitmap
	rectfill( player2LifeBarGreen, 0, 0, 401, 19, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	
	
	player1LifeBarRed = create_bitmap(401, 19);//inicializa o bitmap
	rectfill( player1LifeBarRed, 0, 0, 401, 19, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	
	player2LifeBarRed = create_bitmap(401, 19);//inicializa o bitmap
	rectfill( player2LifeBarRed, 0, 0, 401, 19, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	
	
//barras de escudo
	shildBarPlayer1 = create_bitmap(164, 15);//inicializa o bitmap
	rectfill( shildBarPlayer1, 0, 0, 164, 15, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	
	shildBarPlayer2 = create_bitmap(164, 15);//inicializa o bitmap
	rectfill( shildBarPlayer2, 0, 0, 164, 15, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	
	
//contador de tempo do jogo
   	conterUnity = create_bitmap(35, 65);//inicializa o bitmap
   	rectfill( conterUnity, 0, 0, 35, 65, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
   	
	conterDozen = create_bitmap(35, 65);//inicializa o bitmap
	rectfill( conterDozen, 0, 0, 35, 65, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	
	
//barra de especial - numeros
	
	specialNumberP1 = create_bitmap(24, 53);//inicializa o bitmap
	rectfill( specialNumberP1, 0, 0, 24, 53, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	
	specialNumberP2 = create_bitmap(24, 53);//inicializa o bitmap
	rectfill( specialNumberP2, 0, 0, 24, 53, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	
	
//barra de especial - barras coloridas
	specialBarBluePlayer1 = create_bitmap(220, 18);//inicializa o bitmap
	rectfill( specialBarBluePlayer1, 0, 0, 220, 18, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	
	specialBarBluePlayer2 = create_bitmap(220, 18);//inicializa o bitmap
	rectfill( specialBarBluePlayer2, 0, 0, 220, 18, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	
	
	specialBarPurplePlayer1 = create_bitmap(220, 18);//inicializa o bitmap
	rectfill( specialBarPurplePlayer1, 0, 0, 220, 18, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	
	specialBarPurplePlayer2 = create_bitmap(220, 18);//inicializa o bitmap
	rectfill( specialBarPurplePlayer2, 0, 0, 220, 18, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	
	
	specialBarYellowPlayer1 = create_bitmap(220, 18);//inicializa o bitmap
	rectfill( specialBarYellowPlayer1, 0, 0, 220, 18, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	
	specialBarYellowPlayer2 = create_bitmap(220, 18);//inicializa o bitmap
	rectfill( specialBarYellowPlayer2, 0, 0, 220, 18, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	

	powBarPlayer1 = create_bitmap(147, 9);//inicializa o bitmap
	rectfill( powBarPlayer1, 0, 0, 147, 9, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	
	powBarPlayer2 = create_bitmap(147, 9);//inicializa o bitmap
	rectfill( powBarPlayer2, 0, 0, 147, 9, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	
	
}END_OF_FUNCTION(InitializeBitmaps);




