#include <allegro.h>
#include "Interface.h"


#define TEF 120			//tempo entre os frames


Interface::Interface(){ LoadSprites(); InitializeBitmaps(); }


void Interface::InitializeBitmaps()
{

	completeInterface =	create_bitmap(SCREEN_W, SCREEN_H);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( completeInterface, 0, 0, SCREEN_W, SCREEN_H, makecol(255,0,255) );
	

	player1LifeBarOrange = create_bitmap(480, 32);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( player1LifeBarOrange, 0, 0, 480, 32, makecol(255,0,255) );
	
	
	player2LifeBarOrange = create_bitmap(480, 32);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( player2LifeBarOrange, 0, 0, 480, 32, makecol(255,0,255) );
	
	
	player1LifeBarRed = create_bitmap(482, 31);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( player1LifeBarRed, 0, 0, 482, 31, makecol(255,0,255) );
	
	
	player2LifeBarRed = create_bitmap(482, 31);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( player2LifeBarRed, 0, 0, 482, 31, makecol(255,0,255) );
	
	
	shildBarPlayer1 = create_bitmap(193, 31);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( shildBarPlayer1, 0, 0, 193, 31, makecol(255,0,255) );
	
	
	shildBarPlayer2 = create_bitmap(193, 31);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( shildBarPlayer2, 0, 0, 193, 31, makecol(255,0,255) );
	
	
	specialAnim1 = create_bitmap(22, 23);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( specialAnim1, 0, 0, 22, 23, makecol(255,0,255) );
	
	
	specialAnim2 = create_bitmap(22, 23);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( specialAnim2, 0, 0, 22, 23, makecol(255,0,255) );
	
	
	specialAnim3 = create_bitmap(22, 23);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( specialAnim3, 0, 0, 22, 23, makecol(255,0,255) );
	
	
	specialAnim4 = create_bitmap(22, 23);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( specialAnim4, 0, 0, 22, 23, makecol(255,0,255) );
	
	
	specialAnim5 = create_bitmap(22, 23);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( specialAnim5, 0, 0, 22, 23, makecol(255,0,255) );
	
	
	specialAnim6 = create_bitmap(22, 23);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( specialAnim6, 0, 0, 22, 23, makecol(255,0,255) );
	
	
	specialBarBluePlayer1 = create_bitmap(329, 27);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( specialBarBluePlayer1, 0, 0, 329, 27, makecol(255,0,255) );
	
	
	specialBarBluePlayer2 = create_bitmap(329, 27);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( specialBarBluePlayer2, 0, 0, 329, 27, makecol(255,0,255) );
	
	
	specialBarPinkPlayer1 = create_bitmap(329, 27);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( specialBarPinkPlayer1, 0, 0, 329, 27, makecol(255,0,255) );
	
	
	specialBarPinkPlayer2 = create_bitmap(329, 27);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( specialBarPinkPlayer2, 0, 0, 329, 27, makecol(255,0,255) );
	
	
	specialBarYellowPlayer1 = create_bitmap(329, 27);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( specialBarYellowPlayer1, 0, 0, 329, 27, makecol(255,0,255) );
	
	
	specialBarYellowPlayer2 = create_bitmap(329, 27);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( specialBarYellowPlayer2, 0, 0, 329, 27, makecol(255,0,255) );
	
	
	powBarPlayer1 = create_bitmap(133, 19);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( powBarPlayer1, 0, 0, 133, 19, makecol(255,0,255) );
	
	
	powBarPlayer2 = create_bitmap(133, 19);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( powBarPlayer2, 0, 0, 133, 19, makecol(255,0,255) );
	
	
}


void Interface::LoadSprites()
{
	frame =0;				//frame atual da animação
	unitTimeAnimFrame = 3;	//
	tenTimeAnimFrame  = 3;	//
	gameTime = clock();		//momento que o jogo começa
	startAnimation = false; //
	
	
	p1LifeBarOrangeX = 150;		//variavel para movimentar a barra de vida laramja do player 1
	p2LifeBarOrangeX = -200;	//variavel para movimentar a barra de vida laramja do player 2
	p1LifeBarRedX = 120;		//variavel para movimentar a barra de vida vermelha do player 1
	p2LifeBarRedX = -150;		//variavel para movimentar a barra de vida vermelha do player 2
	p1ShildBarX = 50;			//variavel para movimentar a barra de escudo do player 1
	p2ShildBarX = -125;			//variavel para movimentar a barra de escudo do player 2
	
	
	specialBarBlueP1X = 0;		//variavel para movimentar a barra de especial azul do player 1
	specialBarBlueP2X = 0;		//variavel para movimentar a barra de especial azul do player 2
	specialBarPinkP1X = 40;		//variavel para movimentar a barra de especial roza do player 1
	specialBarPinkP2X = -40;	//variavel para movimentar a barra de especial roza do player 2
	specialBarYellowP1X = 80;	//variavel para movimentar a barra de especial amarelo do player 1
	specialBarYellowP2X = -80;	//variavel para movimentar a barra de especial amarelo do player 2
	powBarp1X = 0;				//
	powBarp2X = 0;				//
	
	
	unitTime = 0;				//
	tenTime  = 0;				//	
	
	
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
	specialAnim[0] = load_bitmap("sprites/interface/Frame00.bmp", NULL);			//frame 0
	specialAnim[1] = load_bitmap("sprites/interface/Frame01.bmp", NULL);			//frame 1
	specialAnim[2] = load_bitmap("sprites/interface/Frame02.bmp", NULL);			//frame 2
	specialAnim[3] = load_bitmap("sprites/interface/Frame03.bmp", NULL);			//frame 3
	specialAnim[4] = load_bitmap("sprites/interface/Frame04.bmp", NULL);			//frame 4
	specialAnim[5] = load_bitmap("sprites/interface/Frame05.bmp", NULL);			//frame 5
	specialAnim[6] = load_bitmap("sprites/interface/Frame06.bmp", NULL);			//frame 6

	
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
}


void Interface::Routine()
{
	//metodo responsavel por construir algumas barras que devem se mover
	BuildPlayerBars();
	
	//metodo responsavel por construir graficamente a interface do jogo
	BuildInterface();
	
	//metodo responsavel por mudar a animação
	AnimControl();
	
	//metodo responsavel por animar e controlar o timer
	TimerControl();
	
}END_OF_FUNCTION(routine)


void Interface::BuildPlayerBars()
{
	
	draw_sprite( player1LifeBarOrange, LifeBarOrange, p1LifeBarOrangeX, 0 );
	draw_sprite( player2LifeBarOrange, LifeBarOrange, p2LifeBarOrangeX, 0 );
	
	draw_sprite( player1LifeBarRed, LifeBarRed, p1LifeBarRedX, 0 );
	draw_sprite( player2LifeBarRed, LifeBarRed, p2LifeBarRedX, 0 );
	
	draw_sprite( shildBarPlayer1, shildBar, p1ShildBarX, 0 );
	draw_sprite( shildBarPlayer2, shildBar, p2ShildBarX, 0 );
	
	draw_sprite( specialAnim1, specialAnim[frame], 0, 0 );
	draw_sprite( specialAnim2, specialAnim[frame], 0, 0 );
	draw_sprite( specialAnim3, specialAnim[frame], 0, 0 );
	draw_sprite( specialAnim4, specialAnim[frame], 0, 0 );
	draw_sprite( specialAnim5, specialAnim[frame], 0, 0 );
	draw_sprite( specialAnim6, specialAnim[frame], 0, 0 );
	
	draw_sprite( specialBarBluePlayer1, specialBarBlue, specialBarBlueP1X, 0 );
	draw_sprite( specialBarPinkPlayer1, specialBarPink, specialBarPinkP1X, 0 );
	draw_sprite( specialBarYellowPlayer1, specialBarYellow, specialBarYellowP1X, 0 );
	draw_sprite( powBarPlayer1, powBar, powBarp1X, 0);
	
	draw_sprite( specialBarBluePlayer2, specialBarBlue, specialBarBlueP2X, 0 );
	draw_sprite( specialBarPinkPlayer2, specialBarPink, specialBarPinkP2X, 0 );
	draw_sprite( specialBarYellowPlayer2, specialBarYellow, specialBarYellowP2X, 0 );
	draw_sprite( powBarPlayer2, powBar, powBarp2X, 0);

}


void Interface::BuildInterface()
{
	
	//limpa a imterface
	clear( completeInterface );
	
	
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( completeInterface, 0, 0, SCREEN_W, SCREEN_H, makecol(255,0,255) );

		
//frame dos personagens
	draw_sprite( completeInterface, framePlayer1, 0, 0 );
	draw_sprite( completeInterface, framePlayer2, 1267, 0 );
	
	
//interface de barras de vida
	//imprime no BITMAP a barra de vida da cor vermelha do player 1
	draw_sprite( completeInterface, player1LifeBarRed, 156, 70 );

	
	//imprime no BITMAP a barra de vida da cor laranja do player 1
	draw_sprite( completeInterface, player1LifeBarOrange, 156, 70 );
	
	
	//imprime no BITMAP a barra de vida da cor vermelha do player 2
	draw_sprite( completeInterface, player2LifeBarRed, 799, 70 );
	
	
	//imprime no BITMAP a barra de vida da cor laranja do player 2
	draw_sprite( completeInterface, player2LifeBarOrange, 799, 70 );
	
	
	//imprime no BITMAP a barra de escudo do player 1
	draw_sprite(completeInterface, shildBarPlayer1, 448, 110 );
	
	
	//imprime no BITMAP a barra de escudo do player 2
	draw_sprite( completeInterface, shildBarPlayer2, 799, 110 );
	
	
	//imprime no BITMAP a interface de barras de vida
	draw_sprite( completeInterface, lifeBarsInterface, 150, 70 );
	
	
//interface de especial  do personagem 1
	//imprime no BITMAP a barra de especial
	draw_sprite( completeInterface, specialBarBluePlayer1,   72, 820 );		//barra de especial azul
	draw_sprite( completeInterface, specialBarPinkPlayer1,   72, 820 );		//barra de especial rosa
	draw_sprite( completeInterface, specialBarYellowPlayer1, 72, 820 );		//barra de especial amarelo
	
	
	//imprime os pontos de especial
	draw_sprite( completeInterface, specialAnim1, 91,  799 );	//ponto 1
	draw_sprite( completeInterface, specialAnim2, 132, 799 );	//ponto 2
	draw_sprite( completeInterface, specialAnim3, 173, 799 );	//ponto 3
	
	
	//imprime no BITMAP a interface de especiais do player 1
	draw_sprite(completeInterface, specialInterface1Player1, 55, 790 );		//interface 1
	//draw_sprite( completeInterface, specialInterface2Player1, 55, 790 );	//interface 2
	//draw_sprite( completeInterface, powBarPlayer1, 207, 800);				//
	
	
//interface de especial  do personagem 2
	//imprime no BITMAP a barra de especial
	draw_sprite( completeInterface, specialBarBluePlayer2,   1010, 820 );		//barra de especial azul
	draw_sprite( completeInterface, specialBarPinkPlayer2,   1010, 820 );		//barra de especial rosa
	draw_sprite( completeInterface, specialBarYellowPlayer2, 1010, 820 );		//barra de especial amarelo
	
	
	//imprime os pontos de especial
	draw_sprite( completeInterface, specialAnim4, 1215, 799 );		//ponto 1
	draw_sprite( completeInterface, specialAnim5, 1256, 799 );		//ponto 2
	draw_sprite( completeInterface, specialAnim6, 1297, 799 );		//ponto 3
	
	
	//imprime no BITMAP a interface de especiais do player 2
	//draw_sprite(completeInterface, specialInterface1Player2, 1003, 790 );	//interface 1
	draw_sprite( completeInterface, specialInterface2Player2, 1003, 790 );	//interface 2
	draw_sprite( completeInterface, powBarPlayer2, 1071, 800);				//
	
	
	//imprimir os numeros
	draw_sprite( completeInterface, number[tenTime][tenTimeAnimFrame], 663, 60 );	//primeiro numero
	draw_sprite( completeInterface, number[unitTime][unitTimeAnimFrame], 720, 60 );	//segundo numero

	
}


void Interface::TimerControl()
{
	int elapsedTime = clock()/1000;
	switch(elapsedTime)
	{
		case 0://caso 60 segundos
			unitTime = 0;
			tenTime  = 6;
			if( clock() < 50) 			unitTimeAnimFrame = 0;
			else if( clock() < 100 )	unitTimeAnimFrame = 1;
			else if( clock() < 150 )	unitTimeAnimFrame = 2;
			else if( clock() < 200 )	unitTimeAnimFrame = 3;
		break;
	
		case 1://caso 59 segundos
			unitTime = 9;
			tenTime  = 5;
			if( clock() < 1050) 		unitTimeAnimFrame = 0;
			else if( clock() < 1100 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 1150 )	unitTimeAnimFrame = 2;
			else if( clock() < 1200 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 2://caso 58 segundos
			unitTime = 8;
			tenTime  = 5;
			if( clock() < 2050) 		unitTimeAnimFrame = 0;
			else if( clock() < 2100 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 2150 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 2200 ) 	unitTimeAnimFrame = 3;
		break;
		
		case 3://caso 57 segundos
			unitTime = 7;
			tenTime  = 5;
			if( clock() < 3050) 		unitTimeAnimFrame = 0;
			else if( clock() < 3100 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 3150 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 3200 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 4://caso 56 segundos
			unitTime = 6;
			tenTime  = 5;
			if( clock() < 4050) 		unitTimeAnimFrame = 0;
			else if( clock() < 4100 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 4150 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 4200 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 5://caso 55 segundos
			unitTime = 5;
			tenTime  = 5;
			if( clock() < 5050) 		unitTimeAnimFrame = 0;
			else if( clock() < 5100 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 5150 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 5200 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 6://caso 54 segundos
			unitTime = 4;
			tenTime  = 5;
			if( clock() < 6050) 		unitTimeAnimFrame = 0;
			else if( clock() < 6100 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 6150 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 6200 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 7://caso 53 segundos
			unitTime = 3;
			tenTime  = 5;
			if( clock() < 7050) 		unitTimeAnimFrame = 0;
			else if( clock() < 7100 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 7150 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 7200 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 8://caso 52 segundos
			unitTime = 2;
			tenTime  = 5;
			if( clock() < 8050) 		unitTimeAnimFrame = 0;
			else if( clock() < 8100 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 8150 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 8200 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 9://caso 51 segundos
			unitTime = 1;
			tenTime  = 5;
			if( clock() < 9050) 		unitTimeAnimFrame = 0;
			else if( clock() < 9100 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 9150 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 9200 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 10://caso 50 segundos
			unitTime = 0;
			tenTime  = 5;
			if( clock() < 10050) 		unitTimeAnimFrame = 0;
			else if( clock() < 10100 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 10150 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 10200 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 11://caso 49 segundos
			unitTime = 9;
			tenTime  = 4;
			if( clock() < 11050) 		{ unitTimeAnimFrame = 0; tenTimeAnimFrame=0; }
			else if( clock() < 11100 ) 	{ unitTimeAnimFrame = 1; tenTimeAnimFrame=1; }
			else if( clock() < 11150 ) 	{ unitTimeAnimFrame = 2; tenTimeAnimFrame=2; }
			else if( clock() < 11200 ) 	{ unitTimeAnimFrame = 3; tenTimeAnimFrame=3; }
		break;
	
		case 12://caso 48 segundos
			unitTime = 8;
			tenTime  = 4;
			if( clock() < 12050) 		unitTimeAnimFrame = 0;
			else if( clock() < 12100 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 12150 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 12200 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 13://caso 47 segundos
			unitTime = 7;
			tenTime  = 4;
			if( clock() < 13050) 		unitTimeAnimFrame = 0;
			else if( clock() < 13100 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 13150 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 13200 ) 	unitTimeAnimFrame = 3;
		break;
	
	}
}


void Interface::AnimControl()
{
	if( !startAnimation )//frame 0
	{ frame = 0; startAnimation = true; capturaTempo = clock(); }
	if(startAnimation)
	{
		if( frame == 0 && clock() - capturaTempo > TEF )//frame 1
		{ frame = 1; capturaTempo = clock(); }
		if( frame == 1 && clock() - capturaTempo > TEF )//frame 2
		{ frame = 2; capturaTempo = clock(); }
		if( frame == 2 && clock() - capturaTempo > TEF )//frame 3
		{ frame = 3; capturaTempo = clock(); }
		if( frame == 3 && clock() - capturaTempo > TEF )//frame 4
		{ frame = 4; capturaTempo = clock(); }
		if( frame == 4 && clock() - capturaTempo > TEF )//frame 5
		{ frame = 5; capturaTempo = clock(); }
		if( frame == 5 && clock() - capturaTempo > TEF )//frame 6
		{ frame = 6; capturaTempo = clock(); }
		if( frame == 6 && clock() - capturaTempo > TEF )//frame 0
		{ frame = 0; capturaTempo = clock(); }	
	}
}END_OF_FUNCTION(AnimControl);


//completeInterface
BITMAP *Interface::GetCompleteInterface()
{
	return completeInterface;
}END_OF_FUNCTION(GetSprites)


























