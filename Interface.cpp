#include <allegro.h>
#include "Interface.h"


#define TEF 120			//tempo entre os frames


//construtor
Interface::Interface(){ LoadSprites(); InitializeBitmaps(); StartAttributes();}


//destrutor
Interface::~Interface()
{
	
	destroy_bitmap( completeInterface );
	destroy_bitmap( lifeBarsInterface );
	destroy_bitmap( LifeBarOrange );
	destroy_bitmap( player1LifeBarOrange );
	destroy_bitmap( player2LifeBarOrange );
	destroy_bitmap( LifeBarRed );
	destroy_bitmap( player1LifeBarRed );
	destroy_bitmap( player2LifeBarRed );
	destroy_bitmap( shildBar );
	destroy_bitmap( shildBarPlayer1 );
	destroy_bitmap( specialInterface1Player1 );
	destroy_bitmap( specialInterface2Player1 );
	destroy_bitmap( specialBarBluePlayer1 );
	destroy_bitmap( specialBarPinkPlayer1 );
	destroy_bitmap( specialBarYellowPlayer1 );
	destroy_bitmap( powBarPlayer1 );
	destroy_bitmap( specialInterface1Player2 );
	destroy_bitmap( specialInterface2Player2 );
	destroy_bitmap( specialBarBluePlayer2 );
	destroy_bitmap( specialBarPinkPlayer2 );
	destroy_bitmap( specialBarYellowPlayer2 );
	destroy_bitmap( powBarPlayer2 );
	destroy_bitmap( specialBarBlue );
	destroy_bitmap( specialBarPink );
	destroy_bitmap( specialBarYellow );
	destroy_bitmap( powBar );
	destroy_bitmap( *specialAnim );
	destroy_bitmap( specialAnim1 );
	destroy_bitmap( specialAnim2 );
	destroy_bitmap( specialAnim3 );
	destroy_bitmap( specialAnim4 );
	destroy_bitmap( specialAnim5 );
	destroy_bitmap( specialAnim6 );
	destroy_bitmap( framePlayer1 );
	destroy_bitmap( framePlayer2 );
	destroy_bitmap( **number );
	
}


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


void Interface::StartAttributes()
{
	frame =0;					//frame atual da animação
	unitTimeAnimFrame = 3;		//frame da animação das unidades
	tenTimeAnimFrame  = 3;		//frame da animação das dezenas
	gameTime = clock();			//momento que o jogo começa
	startAnimation = false; 	//faz a animação iniciar
	
	
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
	powBarp1X = 0;				//variavel para movimentar a barra de pow do player 1
	powBarp2X = 0;				//variavel para movimentar a barra de pow do player 2
	
	//variaveis para imprimir on numeros na tela
	unitTime = 0;				
	tenTime  = 0;					
	capturaTempoParaNumeros = 0;//captura o tempo para fazer a animação dos numeros quando o tempo está acabando
	activeRedNumber = false;
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
	
	
//controle dos numeros
	if( clock() > 51000 )//faltando 10 segundos para tempo acabar
	{
		if( capturaTempoParaNumeros == 0 ) capturaTempoParaNumeros = clock();

		if( clock() - capturaTempoParaNumeros > 100)
		{
			capturaTempoParaNumeros = clock();
			
			activeRedNumber = !activeRedNumber;
		}
		
		if( unitTimeAnimFrame == 3 )
		{
			if( activeRedNumber )
			{
				draw_sprite( completeInterface, redNumber[tenTime], 663, 60 );	//primeiro numero
				draw_sprite( completeInterface, redNumber[unitTime], 720, 60 );	//segundo numero
			}
			else
			{
				draw_sprite( completeInterface, number[tenTime][tenTimeAnimFrame], 663, 60 );	//primeiro numero
				draw_sprite( completeInterface, number[unitTime][unitTimeAnimFrame], 720, 60 );	//segundo numero
			}
		}
		else
		{
			draw_sprite( completeInterface, number[tenTime][tenTimeAnimFrame], 663, 60 );	//primeiro numero
			draw_sprite( completeInterface, number[unitTime][unitTimeAnimFrame], 720, 60 );	//segundo numero
		}
	}
	else
	{
		//imprimir os numeros
		draw_sprite( completeInterface, number[tenTime][tenTimeAnimFrame], 663, 60 );	//primeiro numero
		draw_sprite( completeInterface, number[unitTime][unitTimeAnimFrame], 720, 60 );	//segundo numero
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


void Interface::TimerControl()
{
	int elapsedTime = clock()/1000;
	switch(elapsedTime)
	{
		case 0://caso 60 segundos
			unitTime = 0;
			tenTime  = 6;
			if( clock() < 25 ) 			unitTimeAnimFrame = 0;
			else if( clock() < 050 )	unitTimeAnimFrame = 1;
			else if( clock() < 075 )	unitTimeAnimFrame = 2;
			else if( clock() < 100 )	unitTimeAnimFrame = 3;
		break;
	
		case 1://caso 59 segundos
			unitTime = 9;
			tenTime  = 5;
			if( clock() < 1025 ) 		unitTimeAnimFrame = 0;
			else if( clock() < 1050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 1075 )	unitTimeAnimFrame = 2;
			else if( clock() < 1100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 2://caso 58 segundos
			unitTime = 8;
			tenTime  = 5;
			if( clock() < 2025 ) 		unitTimeAnimFrame = 0;
			else if( clock() < 2050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 2075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 2100 ) 	unitTimeAnimFrame = 3;
		break;
		
		case 3://caso 57 segundos
			unitTime = 7;
			tenTime  = 5;
			if( clock() < 3025 ) 		unitTimeAnimFrame = 0;
			else if( clock() < 3050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 3075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 3100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 4://caso 56 segundos
			unitTime = 6;
			tenTime  = 5;
			if( clock() < 4025 ) 		unitTimeAnimFrame = 0;
			else if( clock() < 4050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 4075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 4100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 5://caso 55 segundos
			unitTime = 5;
			tenTime  = 5;
			if( clock() < 5025 ) 		unitTimeAnimFrame = 0;
			else if( clock() < 5050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 5075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 5100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 6://caso 54 segundos
			unitTime = 4;
			tenTime  = 5;
			if( clock() < 6025 ) 		unitTimeAnimFrame = 0;
			else if( clock() < 6050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 6075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 6100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 7://caso 53 segundos
			unitTime = 3;
			tenTime  = 5;
			if( clock() < 7025 ) 		unitTimeAnimFrame = 0;
			else if( clock() < 7050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 7075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 7100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 8://caso 52 segundos
			unitTime = 2;
			tenTime  = 5;
			if( clock() < 8025 ) 		unitTimeAnimFrame = 0;
			else if( clock() < 8050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 8075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 8100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 9://caso 51 segundos
			unitTime = 1;
			tenTime  = 5;
			if( clock() < 9025 ) 		unitTimeAnimFrame = 0;
			else if( clock() < 9050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 9075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 9100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 10://caso 50 segundos
			unitTime = 0;
			tenTime  = 5;
			if( clock() < 10025 ) 		unitTimeAnimFrame = 0;
			else if( clock() < 10050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 10075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 10100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 11://caso 49 segundos
			unitTime = 9;
			tenTime  = 4;
			if( clock() < 11025) 		{ unitTimeAnimFrame = 0; tenTimeAnimFrame=0; }
			else if( clock() < 11050 ) 	{ unitTimeAnimFrame = 1; tenTimeAnimFrame=1; }
			else if( clock() < 11075 ) 	{ unitTimeAnimFrame = 2; tenTimeAnimFrame=2; }
			else if( clock() < 11100 ) 	{ unitTimeAnimFrame = 3; tenTimeAnimFrame=3; }
		break;
	
		case 12://caso 48 segundos
			unitTime = 8;
			tenTime  = 4;
			if( clock() < 12025 ) 		unitTimeAnimFrame = 0;
			else if( clock() < 12050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 12075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 12100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 13://caso 47 segundos
			unitTime = 7;
			tenTime  = 4;
			if( clock() < 13025 ) 		unitTimeAnimFrame = 0;
			else if( clock() < 13050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 13075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 13100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 14://caso 46 segundos
			unitTime = 6;
			tenTime  = 4;
			if( clock() < 14025 ) 		unitTimeAnimFrame = 0;
			else if( clock() < 14050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 14075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 14100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 15://caso 45 segundos
			unitTime = 5;
			tenTime  = 4;
			if( clock() < 15025) 		unitTimeAnimFrame = 0;
			else if( clock() < 15050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 15075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 15100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 16://caso 44 segundos
			unitTime = 4;
			tenTime  = 4;
			if( clock() < 16025) 		unitTimeAnimFrame = 0;
			else if( clock() < 16050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 16075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 16100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 17://caso 43 segundos
			unitTime = 3;
			tenTime  = 4;
			if( clock() < 17025) 		unitTimeAnimFrame = 0;
			else if( clock() < 17050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 17075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 17100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 18://caso 42 segundos
			unitTime = 2;
			tenTime  = 4;
			if( clock() < 18025) 		unitTimeAnimFrame = 0;
			else if( clock() < 18050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 18075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 18100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 19://caso 41 segundos
			unitTime = 1;
			tenTime  = 4;
			if( clock() < 19025) 		unitTimeAnimFrame = 0;
			else if( clock() < 19050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 19075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 19100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 20://caso 40 segundos
			unitTime = 0;
			tenTime  = 4;
			if( clock() < 20025) 		unitTimeAnimFrame = 0;
			else if( clock() < 20050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 20075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 20100 ) 	unitTimeAnimFrame = 3;
		break;	
	
		case 21://caso 39 segundos
			unitTime = 9;
			tenTime  = 3;
			if( clock() < 21025) 		{ unitTimeAnimFrame = 0; tenTimeAnimFrame=0; }
			else if( clock() < 21050 ) 	{ unitTimeAnimFrame = 1; tenTimeAnimFrame=1; }
			else if( clock() < 21075 ) 	{ unitTimeAnimFrame = 2; tenTimeAnimFrame=2; }
			else if( clock() < 21100 ) 	{ unitTimeAnimFrame = 3; tenTimeAnimFrame=3; }
		break;
		
		case 22://caso 38 segundos
			unitTime = 8;
			tenTime  = 3;
			if( clock() < 22025) 		unitTimeAnimFrame = 0;
			else if( clock() < 22050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 22075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 22100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 23://caso 37 segundos
			unitTime = 7;
			tenTime  = 3;
			if( clock() < 23025) 		unitTimeAnimFrame = 0;
			else if( clock() < 23050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 23075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 23100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 24://caso 36 segundos
			unitTime = 6;
			tenTime  = 3;
			if( clock() < 24025) 		unitTimeAnimFrame = 0;
			else if( clock() < 24050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 24075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 24100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 25://caso 35 segundos
			unitTime = 5;
			tenTime  = 3;
			if( clock() < 25025) 		unitTimeAnimFrame = 0;
			else if( clock() < 25050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 25075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 25100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 26://caso 34 segundos
			unitTime = 4;
			tenTime  = 3;
			if( clock() < 26025) 		unitTimeAnimFrame = 0;
			else if( clock() < 26050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 26075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 26100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 27://caso 33 segundos
			unitTime = 3;
			tenTime  = 3;
			if( clock() < 27025) 		unitTimeAnimFrame = 0;
			else if( clock() < 27050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 27075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 27100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 28://caso 32 segundos
			unitTime = 2;
			tenTime  = 3;
			if( clock() < 28025) 		unitTimeAnimFrame = 0;
			else if( clock() < 28050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 28075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 28100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 29://caso 31 segundos
			unitTime = 1;
			tenTime  = 3;
			if( clock() < 29025) 		unitTimeAnimFrame = 0;
			else if( clock() < 29050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 29075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 29100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 30://caso 30 segundos
			unitTime = 0;
			tenTime  = 3;
			if( clock() < 30025) 		unitTimeAnimFrame = 0;
			else if( clock() < 30050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 30075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 30100 ) 	unitTimeAnimFrame = 3;
		break;	
	
		case 31://caso 29 segundos
			unitTime = 9;
			tenTime  = 2;
			if( clock() < 31025) 		{ unitTimeAnimFrame = 0; tenTimeAnimFrame=0; }
			else if( clock() < 31050 ) 	{ unitTimeAnimFrame = 1; tenTimeAnimFrame=1; }
			else if( clock() < 31075 ) 	{ unitTimeAnimFrame = 2; tenTimeAnimFrame=2; }
			else if( clock() < 31100 ) 	{ unitTimeAnimFrame = 3; tenTimeAnimFrame=3; }
		break;
		
		case 32://caso 28 segundos
			unitTime = 8;
			tenTime  = 2;
			if( clock() < 32025) 		unitTimeAnimFrame = 0;
			else if( clock() < 32050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 32075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 32100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 33://caso 27 segundos
			unitTime = 7;
			tenTime  = 2;
			if( clock() < 33025) 		unitTimeAnimFrame = 0;
			else if( clock() < 33050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 33075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 33100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 34://caso 26 segundos
			unitTime = 6;
			tenTime  = 2;
			if( clock() < 34025) 		unitTimeAnimFrame = 0;
			else if( clock() < 34050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 34075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 34100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 35://caso 25 segundos
			unitTime = 5;
			tenTime  = 2;
			if( clock() < 35025) 		unitTimeAnimFrame = 0;
			else if( clock() < 35050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 35075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 35100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 36://caso 24 segundos
			unitTime = 4;
			tenTime  = 2;
			if( clock() < 36025) 		unitTimeAnimFrame = 0;
			else if( clock() < 36050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 36075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 36100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 37://caso 23 segundos
			unitTime = 3;
			tenTime  = 2;
			if( clock() < 37025) 		unitTimeAnimFrame = 0;
			else if( clock() < 37050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 37075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 37100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 38://caso 22 segundos
			unitTime = 2;
			tenTime  = 2;
			if( clock() < 38025) 		unitTimeAnimFrame = 0;
			else if( clock() < 38050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 38075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 38100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 39://caso 21 segundos
			unitTime = 1;
			tenTime  = 2;
			if( clock() < 39025) 		unitTimeAnimFrame = 0;
			else if( clock() < 39050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 39075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 39100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 40://caso 20 segundos
			unitTime = 0;
			tenTime  = 2;
			if( clock() < 40025) 		unitTimeAnimFrame = 0;
			else if( clock() < 40050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 40075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 40100 ) 	unitTimeAnimFrame = 3;
		break;	
	
		case 41://caso 19 segundos
			unitTime = 9;
			tenTime  = 1;
			if( clock() < 41025) 		{ unitTimeAnimFrame = 0; tenTimeAnimFrame=0; }
			else if( clock() < 41050 ) 	{ unitTimeAnimFrame = 1; tenTimeAnimFrame=1; }
			else if( clock() < 41075 ) 	{ unitTimeAnimFrame = 2; tenTimeAnimFrame=2; }
			else if( clock() < 41100 ) 	{ unitTimeAnimFrame = 3; tenTimeAnimFrame=3; }
		break;
		
		case 42://caso 18 segundos
			unitTime = 8;
			tenTime  = 1;
			if( clock() < 42025) 		unitTimeAnimFrame = 0;
			else if( clock() < 42050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 42075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 42100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 43://caso 17 segundos
			unitTime = 7;
			tenTime  = 1;
			if( clock() < 43025) 		unitTimeAnimFrame = 0;
			else if( clock() < 43050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 43075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 43100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 44://caso 16 segundos
			unitTime = 6;
			tenTime  = 1;
			if( clock() < 44025) 		unitTimeAnimFrame = 0;
			else if( clock() < 44050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 44075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 44100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 45://caso 15 segundos
			unitTime = 5;
			tenTime  = 1;
			if( clock() < 45025) 		unitTimeAnimFrame = 0;
			else if( clock() < 45050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 45075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 45100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 46://caso 14 segundos
			unitTime = 4;
			tenTime  = 1;
			if( clock() < 46025) 		unitTimeAnimFrame = 0;
			else if( clock() < 46050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 46075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 46100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 47://caso 13 segundos
			unitTime = 3;
			tenTime  = 1;
			if( clock() < 47025) 		unitTimeAnimFrame = 0;
			else if( clock() < 47050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 47075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 47100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 48://caso 12 segundos
			unitTime = 2;
			tenTime  = 1;
			if( clock() < 48025) 		unitTimeAnimFrame = 0;
			else if( clock() < 48050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 48075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 48100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 49://caso 11 segundos
			unitTime = 1;
			tenTime  = 1;
			if( clock() < 49025) 		unitTimeAnimFrame = 0;
			else if( clock() < 49050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 49075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 49100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 50://caso 10 segundos
			unitTime = 0;
			tenTime  = 1;
			if( clock() < 50025) 		unitTimeAnimFrame = 0;
			else if( clock() < 50050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 50075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 50100 ) 	unitTimeAnimFrame = 3;
		break;	
	
		case 51://caso 09 segundos
			unitTime = 9;
			tenTime  = 0;
			if( clock() < 51025) 		{ unitTimeAnimFrame = 0; tenTimeAnimFrame=0; }
			else if( clock() < 51050 ) 	{ unitTimeAnimFrame = 1; tenTimeAnimFrame=1; }
			else if( clock() < 51075 ) 	{ unitTimeAnimFrame = 2; tenTimeAnimFrame=2; }
			else if( clock() < 51100 ) 	{ unitTimeAnimFrame = 3; tenTimeAnimFrame=3; }
		break;
		
		case 52://caso 08 segundos
			unitTime = 8;
			tenTime  = 0;
			if( clock() < 52025) 		unitTimeAnimFrame = 0;
			else if( clock() < 52050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 52075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 52100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 53://caso 07 segundos
			unitTime = 7;
			tenTime  = 0;
			if( clock() < 53025) 		unitTimeAnimFrame = 0;
			else if( clock() < 53050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 53075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 53100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 54://caso 06 segundos
			unitTime = 6;
			tenTime  = 0;
			if( clock() < 54025) 		unitTimeAnimFrame = 0;
			else if( clock() < 54050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 54075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 54100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 55://caso 05 segundos
			unitTime = 5;
			tenTime  = 0;
			if( clock() < 55025) 		unitTimeAnimFrame = 0;
			else if( clock() < 55050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 55075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 55100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 56://caso 14 segundos
			unitTime = 4;
			tenTime  = 0;
			if( clock() < 56025) 		unitTimeAnimFrame = 0;
			else if( clock() < 56050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 56075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 56100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 57://caso 03 segundos
			unitTime = 3;
			tenTime  = 0;
			if( clock() < 57025) 		unitTimeAnimFrame = 0;
			else if( clock() < 57050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 57075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 57100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 58://caso 02 segundos
			unitTime = 2;
			tenTime  = 0;
			if( clock() < 58025) 		unitTimeAnimFrame = 0;
			else if( clock() < 58050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 58075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 58100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 59://caso 01 segundos
			unitTime = 1;
			tenTime  = 0;
			if( clock() < 59025) 		unitTimeAnimFrame = 0;
			else if( clock() < 59050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 59075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 59100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 60://caso 00 segundos
			unitTime = 0;
			tenTime  = 0;
			if( clock() < 60025) 		unitTimeAnimFrame = 0;
			else if( clock() < 60050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 60075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 60100 ) 	unitTimeAnimFrame = 3;
		break;
	}
}
























