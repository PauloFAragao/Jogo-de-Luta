#include <allegro.h>
#include "Interface.h"


#define TEF 120			//tempo entre os frames


Interface::Interface(){ LoadSprites(); InitializeBitmaps(); }


void Interface::InitializeBitmaps()
{

	completeInterface =	create_bitmap(SCREEN_W, SCREEN_H);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill(completeInterface, 0, 0, SCREEN_W, SCREEN_H, makecol(255,0,255) );
	

	player1LifeBarOrange = create_bitmap(480, 32);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill(player1LifeBarOrange, 0, 0, 480, 32, makecol(255,0,255) );
	
	
	player2LifeBarOrange = create_bitmap(480, 32);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill(player2LifeBarOrange, 0, 0, 480, 32, makecol(255,0,255) );
	
	
	player1LifeBarRed = create_bitmap(482, 31);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill(player1LifeBarRed, 0, 0, 482, 31, makecol(255,0,255) );
	
	
	player2LifeBarRed = create_bitmap(482, 31);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill(player2LifeBarRed, 0, 0, 482, 31, makecol(255,0,255) );
	
	
	shildBarPlayer1 = create_bitmap(193, 31);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill(shildBarPlayer1, 0, 0, 193, 31, makecol(255,0,255) );
	
	
	shildBarPlayer2 = create_bitmap(193, 31);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill(shildBarPlayer2, 0, 0, 193, 31, makecol(255,0,255) );
	
	
	specialAnim1 = create_bitmap(22, 23);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill(specialAnim1, 0, 0, 22, 23, makecol(255,0,255) );
	
	
	specialAnim2 = create_bitmap(22, 23);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill(specialAnim2, 0, 0, 22, 23, makecol(255,0,255) );
	
	
	specialAnim3 = create_bitmap(22, 23);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill(specialAnim3, 0, 0, 22, 23, makecol(255,0,255) );
	
	
	specialAnim4 = create_bitmap(22, 23);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill(specialAnim4, 0, 0, 22, 23, makecol(255,0,255) );
	
	
	specialAnim5 = create_bitmap(22, 23);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill(specialAnim5, 0, 0, 22, 23, makecol(255,0,255) );
	
	
	specialAnim6 = create_bitmap(22, 23);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill(specialAnim6, 0, 0, 22, 23, makecol(255,0,255) );
	
	
	specialBarBluePlayer1 = create_bitmap(329, 27);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill(specialBarBluePlayer1, 0, 0, 329, 27, makecol(255,0,255) );
	
	
	specialBarBluePlayer2 = create_bitmap(329, 27);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill(specialBarBluePlayer2, 0, 0, 329, 27, makecol(255,0,255) );
	
	
	specialBarPinkPlayer1 = create_bitmap(329, 27);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill(specialBarPinkPlayer1, 0, 0, 329, 27, makecol(255,0,255) );
	
	
	specialBarPinkPlayer2 = create_bitmap(329, 27);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill(specialBarPinkPlayer2, 0, 0, 329, 27, makecol(255,0,255) );
	
	
	specialBarYellowPlayer1 = create_bitmap(329, 27);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill(specialBarYellowPlayer1, 0, 0, 329, 27, makecol(255,0,255) );
	
	
	specialBarYellowPlayer2 = create_bitmap(329, 27);
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill(specialBarYellowPlayer2, 0, 0, 329, 27, makecol(255,0,255) );
	
	
}


void Interface::LoadSprites()
{
	frame =0;			//frame atual da animação
	gameTime = clock();	//momento que o jogo começa
	
	p1LifeBarOrangeX = 150;	//variavel para movimentar a barra de vida laramja do player 1
	p2LifeBarOrangeX = -200;//variavel para movimentar a barra de vida laramja do player 2
	p1LifeBarRedX = 120;	//variavel para movimentar a barra de vida vermelha do player 1
	p2LifeBarRedX = -150;	//variavel para movimentar a barra de vida vermelha do player 2
	p1ShildBarX = 50;		//variavel para movimentar a barra de escudo do player 1
	p2ShildBarX = -125;		//variavel para movimentar a barra de escudo do player 2
	
	specialBarBlueP1X = 0;		//variavel para movimentar a barra de especial azul do player 1
	specialBarBlueP2X = 0;		//variavel para movimentar a barra de especial azul do player 2
	specialBarPinkP1X = 40;		//variavel para movimentar a barra de especial roza do player 1
	specialBarPinkP2X = 0;		//variavel para movimentar a barra de especial roza do player 2
	specialBarYellowP1X = 80;	//variavel para movimentar a barra de especial amarelo do player 1
	specialBarYellowP2X = 0;	//variavel para movimentar a barra de especial amarelo do player 2
	
	//frame dos personagens
	framePlayer1 = load_bitmap("sprites/interface/terryFramePlayer1.bmp", NULL);
	framePlayer2 = load_bitmap("sprites/interface/terryFramePlayer2.bmp", NULL);
	
	
	//barras de vida
	lifeBarsInterface = load_bitmap("sprites/interface/LifeBarsInterface.bmp", NULL);	//interface das barras de vida
	LifeBarOrange = load_bitmap("sprites/interface/OrangeLifeBarPlayer1.bmp", NULL);	//barra laranja de vida do do player 1
	LifeBarRed = load_bitmap("sprites/interface/RedLifeBarPlayer1.bmp", NULL);			//barra laranja de vida do do player 1
	shildBar = load_bitmap("sprites/interface/ShieldBarPlayer1.bmp", NULL);				//barra de escudo do jogador 1
	
	
	//barras de especial do player 1
	specialInterface1Player1 = load_bitmap("sprites/interface/SpecialInterface1Player1.bmp", NULL);	//interface da barra de especial do player 1
	specialInterface2Player1 = load_bitmap("sprites/interface/SpecialInterface2Player1.bmp", NULL);	//interface da barra de especial estourada do player 1
	
	
	//barras de especial do player 2
	specialInterface1Player2 = load_bitmap("sprites/interface/SpecialInterface1Player2.bmp", NULL);	//interface da barra de especial do player 1
	specialInterface2Player2 = load_bitmap("sprites/interface/SpecialInterface2Player2.bmp", NULL);	//interface da barra de especial estourada do player 1

	
	//carregar as imagens
	specialBarBlue = load_bitmap("sprites/interface/SpecialBarBluePlayer1.bmp", NULL);		//barra azul de especial
	specialBarPink = load_bitmap("sprites/interface/SpecialBarPinkPlayer1.bmp", NULL);		//barra rosa de especial
	specialBarYellow = load_bitmap("sprites/interface/SpecialBarYellowPlayer1.bmp", NULL);	//barra amarela de especial
	
	//animações da barra de especial
	specialAnim[0] = load_bitmap("sprites/interface/Frame00.bmp", NULL);			//frame 0
	specialAnim[1] = load_bitmap("sprites/interface/Frame01.bmp", NULL);			//frame 1
	specialAnim[2] = load_bitmap("sprites/interface/Frame02.bmp", NULL);			//frame 2
	specialAnim[3] = load_bitmap("sprites/interface/Frame03.bmp", NULL);			//frame 3
	specialAnim[4] = load_bitmap("sprites/interface/Frame04.bmp", NULL);			//frame 4
	specialAnim[5] = load_bitmap("sprites/interface/Frame05.bmp", NULL);			//frame 5
	specialAnim[6] = load_bitmap("sprites/interface/Frame06.bmp", NULL);			//frame 6

	
	number0[0] = load_bitmap("sprites/interface/Number0-0.bmp", NULL);
	number0[1] = load_bitmap("sprites/interface/Number0-1.bmp", NULL);
	number0[2] = load_bitmap("sprites/interface/Number0-2.bmp", NULL);
	number0[3] = load_bitmap("sprites/interface/Number0-3.bmp", NULL);
	
	
	number1[0] = load_bitmap("sprites/interface/Number1-0.bmp", NULL);
	number1[1] = load_bitmap("sprites/interface/Number1-1.bmp", NULL);
	number1[2] = load_bitmap("sprites/interface/Number1-2.bmp", NULL);
	number1[3] = load_bitmap("sprites/interface/Number1-3.bmp", NULL);
}


void Interface::Routine()
{
	//
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
	
	draw_sprite( specialBarBluePlayer1, specialBarBlue, specialBarBlueP1X, 0 );
	draw_sprite( specialBarPinkPlayer1, specialBarPink, specialBarPinkP1X, 0 );
	draw_sprite( specialBarYellowPlayer1, specialBarYellow, specialBarYellowP1X, 0 );
	
	
	draw_sprite( specialBarBluePlayer2, specialBarBlue, specialBarBlueP2X, 0 );
	draw_sprite( specialBarPinkPlayer2, specialBarPink, specialBarPinkP2X, 0 );
	draw_sprite( specialBarYellowPlayer2, specialBarYellow, specialBarYellowP2X, 0 );

}


void Interface::BuildInterface()
{
	
	//limpa a imterface
	clear(completeInterface);
	
	
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill(completeInterface, 0, 0, SCREEN_W, SCREEN_H, makecol(255,0,255) );

		
//frame dos personagens
	draw_sprite(completeInterface, framePlayer1, 0, 0 );
	draw_sprite(completeInterface, framePlayer2, 1267, 0 );
	
	
//interface de barras de vida
	//imprime no BITMAP a barra de vida da cor vermelha do player 1
	draw_sprite(completeInterface, player1LifeBarRed, 156, 70 );

	//imprime no BITMAP a barra de vida da cor laranja do player 1
	draw_sprite(completeInterface, player1LifeBarOrange, 156, 70 );
	
	//imprime no BITMAP a barra de vida da cor vermelha do player 2
	draw_sprite(completeInterface, player2LifeBarRed, 799, 70 );
	
	//imprime no BITMAP a barra de vida da cor laranja do player 2
	draw_sprite(completeInterface, player2LifeBarOrange, 799, 70 );
	
	//imprime no BITMAP a barra de escudo do player 1
	draw_sprite(completeInterface, shildBarPlayer1, 448, 110 );
	
	//imprime no BITMAP a barra de escudo do player 2
	draw_sprite(completeInterface, shildBarPlayer2, 799, 110 );
	
	//imprime no BITMAP a interface de barras de vida
	draw_sprite(completeInterface, lifeBarsInterface, 150, 70 );
	
	
//interface de especial  do personagem 1
	//imprime no BITMAP a barra de especial
	draw_sprite(completeInterface, specialBarBluePlayer1, 72, 820 );		//barra de especial azul
	draw_sprite(completeInterface, specialBarPinkPlayer1, 72, 820 );		//barra de especial rosa
	draw_sprite(completeInterface, specialBarYellowPlayer1, 72, 820 );	//barra de especial amarelo
	
	//imprime os pontos de especial
	draw_sprite(completeInterface, specialAnim1, 91, 799 );		//ponto 1
	
	draw_sprite(completeInterface, specialAnim2, 132, 799);		//ponto 2
	
	draw_sprite(completeInterface, specialAnim3, 173, 799 );	//ponto 3
	
	//imprime no BITMAP a interface de especiais do player 1
	//draw_sprite(completeInterface, specialInterface1Player1, 55, 790 );	//interface 1
	draw_sprite(completeInterface, specialInterface2Player1, 55, 790 );	//interface 2
	
	
//interface de especial  do personagem 1
	//imprime no BITMAP a barra de especial
	//draw_sprite(completeInterface, specialBarBluePlayer2, 0, 0 );		//barra de especial azul
	//draw_sprite(completeInterface, specialBarPinkPlayer2, 0, 0 );		//barra de especial rosa
	//draw_sprite(completeInterface, specialBarYellowPlayer2, 0, 0 );	//barra de especial amarelo
	
	//imprime os pontos de especial
	//draw_sprite(completeInterface, specialAnim04[frame], 0, 0 );		//ponto 1
	
	//draw_sprite(completeInterface, specialAnim05[frame], 0, 0 );		//ponto 2
	
	//draw_sprite(completeInterface, specialAnim06[frame], 0, 0 );		//ponto 3
	
	//imprime no BITMAP a interface de especiais do player 1
	//draw_sprite(completeInterface, specialInterface1Player2, 1003, 790 );	//interface 1
	//draw_sprite(completeInterface, specialInterface2Player1, 0, 0 );	//interface 2

	
	//imprimir os numeros
	//draw_sprite(completeInterface, number0[0], 655, 80 );				//primeiro numero
	//draw_sprite(completeInterface, number0[0], 705, 80 );				//segundo numero
	
	
}


void Interface::TimerControl()
{
	//60-(clock()/1000)
	
	/*
	if( clock() - gameTime  )
	{
		
	}
	*/
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


























