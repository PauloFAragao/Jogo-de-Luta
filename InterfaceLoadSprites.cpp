#include <allegro.h>
#include "Interface.h"

void Interface::LoadSprites()
{
	//frame dos personagens
	framePlayer1 = load_bitmap("sprites/interface/terryFramePlayer1.bmp", NULL);
	framePlayer2 = load_bitmap("sprites/interface/terryFramePlayer2.bmp", NULL);
	
	
	//barras de vida
	lifeBarsInterface = load_bitmap("sprites/interface/LifeBarsInterface.bmp", NULL);	//interface das barras de vida
	LifeBarOrange = load_bitmap("sprites/interface/OrangeLifeBar.bmp", NULL);	//barra laranja de vida do do player 1
	LifeBarRed = load_bitmap("sprites/interface/RedLifeBar.bmp", NULL);			//barra laranja de vida do do player 1
	shildBar = load_bitmap("sprites/interface/ShieldBar.bmp", NULL);				//barra de escudo do jogador 1
	
	
	//barras de especial do player 1
	specialInterface1Player1 = load_bitmap("sprites/interface/SpecialInterface1Player1.bmp", NULL);	//interface da barra de especial do player 1
	specialInterface2Player1 = load_bitmap("sprites/interface/SpecialInterface2Player1.bmp", NULL);	//interface da barra de especial estourada do player 1
	
	
	//barras de especial do player 2
	specialInterface1Player2 = load_bitmap("sprites/interface/SpecialInterface1Player2.bmp", NULL);	//interface da barra de especial do player 1
	specialInterface2Player2 = load_bitmap("sprites/interface/SpecialInterface2Player2.bmp", NULL);	//interface da barra de especial estourada do player 1

	
	//carregar as imagens
	specialBarBlue = load_bitmap("sprites/interface/SpecialBarBlue.bmp", NULL);		//barra azul de especial
	specialBarPink = load_bitmap("sprites/interface/SpecialBarPink.bmp", NULL);		//barra rosa de especial
	specialBarYellow = load_bitmap("sprites/interface/SpecialBarYellow.bmp", NULL);	//barra amarela de especial
	powBar = load_bitmap("sprites/interface/OrageSpecialBar.bmp", NULL);			//barra laranja de especial
	
	
	//animações da barra de especial
	specialAnim[0] = load_bitmap("sprites/interface/Frame00.bmp", NULL);
	specialAnim[1] = load_bitmap("sprites/interface/Frame01.bmp", NULL);
	specialAnim[2] = load_bitmap("sprites/interface/Frame02.bmp", NULL);
	specialAnim[3] = load_bitmap("sprites/interface/Frame03.bmp", NULL);
	specialAnim[4] = load_bitmap("sprites/interface/Frame04.bmp", NULL);
	specialAnim[5] = load_bitmap("sprites/interface/Frame05.bmp", NULL);
	specialAnim[6] = load_bitmap("sprites/interface/Frame06.bmp", NULL);

	
	number[0][0] = load_bitmap("sprites/interface/Number0-0.bmp", NULL);
	number[0][1] = load_bitmap("sprites/interface/Number0-1.bmp", NULL);
	number[0][2] = load_bitmap("sprites/interface/Number0-2.bmp", NULL);
	number[0][3] = load_bitmap("sprites/interface/Number0-3.bmp", NULL);
	number[1][0] = load_bitmap("sprites/interface/Number1-0.bmp", NULL);
	number[1][1] = load_bitmap("sprites/interface/Number1-1.bmp", NULL);
	number[1][2] = load_bitmap("sprites/interface/Number1-2.bmp", NULL);
	number[1][3] = load_bitmap("sprites/interface/Number1-3.bmp", NULL);
	number[2][0] = load_bitmap("sprites/interface/Number2-0.bmp", NULL);
	number[2][1] = load_bitmap("sprites/interface/Number2-1.bmp", NULL);
	number[2][2] = load_bitmap("sprites/interface/Number2-2.bmp", NULL);
	number[2][3] = load_bitmap("sprites/interface/Number2-3.bmp", NULL);
	number[3][0] = load_bitmap("sprites/interface/Number3-0.bmp", NULL);
	number[3][1] = load_bitmap("sprites/interface/Number3-1.bmp", NULL);
	number[3][2] = load_bitmap("sprites/interface/Number3-2.bmp", NULL);
	number[3][3] = load_bitmap("sprites/interface/Number3-3.bmp", NULL);
	number[4][0] = load_bitmap("sprites/interface/Number4-0.bmp", NULL);
	number[4][1] = load_bitmap("sprites/interface/Number4-1.bmp", NULL);
	number[4][2] = load_bitmap("sprites/interface/Number4-2.bmp", NULL);
	number[4][3] = load_bitmap("sprites/interface/Number4-3.bmp", NULL);
	number[5][0] = load_bitmap("sprites/interface/Number5-0.bmp", NULL);
	number[5][1] = load_bitmap("sprites/interface/Number5-1.bmp", NULL);
	number[5][2] = load_bitmap("sprites/interface/Number5-2.bmp", NULL);
	number[5][3] = load_bitmap("sprites/interface/Number5-3.bmp", NULL);
	number[6][0] = load_bitmap("sprites/interface/Number6-0.bmp", NULL);
	number[6][1] = load_bitmap("sprites/interface/Number6-1.bmp", NULL);
	number[6][2] = load_bitmap("sprites/interface/Number6-2.bmp", NULL);
	number[6][3] = load_bitmap("sprites/interface/Number6-3.bmp", NULL);
	number[7][0] = load_bitmap("sprites/interface/Number7-0.bmp", NULL);
	number[7][1] = load_bitmap("sprites/interface/Number7-1.bmp", NULL);
	number[7][2] = load_bitmap("sprites/interface/Number7-2.bmp", NULL);
	number[7][3] = load_bitmap("sprites/interface/Number7-3.bmp", NULL);
	number[8][0] = load_bitmap("sprites/interface/Number8-0.bmp", NULL);
	number[8][1] = load_bitmap("sprites/interface/Number8-1.bmp", NULL);
	number[8][2] = load_bitmap("sprites/interface/Number8-2.bmp", NULL);
	number[8][3] = load_bitmap("sprites/interface/Number8-3.bmp", NULL);
	number[9][0] = load_bitmap("sprites/interface/Number9-0.bmp", NULL);
	number[9][1] = load_bitmap("sprites/interface/Number9-1.bmp", NULL);
	number[9][2] = load_bitmap("sprites/interface/Number9-2.bmp", NULL);
	number[9][3] = load_bitmap("sprites/interface/Number9-3.bmp", NULL);
	redNumber[0] = load_bitmap("sprites/interface/Number0-red.bmp", NULL);
	redNumber[1] = load_bitmap("sprites/interface/Number1-red.bmp", NULL);
	redNumber[2] = load_bitmap("sprites/interface/Number2-red.bmp", NULL);
	redNumber[3] = load_bitmap("sprites/interface/Number3-red.bmp", NULL);
	redNumber[4] = load_bitmap("sprites/interface/Number4-red.bmp", NULL);
	redNumber[5] = load_bitmap("sprites/interface/Number5-red.bmp", NULL);
	redNumber[6] = load_bitmap("sprites/interface/Number6-red.bmp", NULL);
	redNumber[7] = load_bitmap("sprites/interface/Number7-red.bmp", NULL);
	redNumber[8] = load_bitmap("sprites/interface/Number8-red.bmp", NULL);
	redNumber[9] = load_bitmap("sprites/interface/Number9-red.bmp", NULL);
	
}








