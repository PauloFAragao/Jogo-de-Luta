#include "includes.h"
#include "Game.h"

void Game::BuildGameStartText()
{	
	if( clock() - gameTimeStart >= 183 && clock() - gameTimeStart < 266  )//11 frames depois de começar
	{
		draw_sprite( gameScreen, roundFrame0, ROUNDX, ROUNDY );
	}
	else if( clock() - gameTimeStart >= 266 && clock() - gameTimeStart < 350 )//16 frames depois de começar
	{
		draw_sprite( gameScreen, roundFrame1, ROUNDX, ROUNDY );
	}
	else if( clock() - gameTimeStart >= 350 && clock() - gameTimeStart < 416 )//21 frames depois de começar
	{
		draw_sprite( gameScreen, roundFrame2, ROUNDX, ROUNDY );
	}
	else if( clock() - gameTimeStart >= 416 && clock() - gameTimeStart < 433 )//25 frames depois de começar
	{
		draw_sprite( gameScreen, roundFrame2, ROUNDX, ROUNDY );
		if(round == 1) 
			draw_sprite( gameScreen, roundNumber1Frame0, ROUNDNUMBER1X, ROUNDNUMBER1Y );
		else if( round == 2 )
			draw_sprite( gameScreen, roundNumber2Frame0, ROUNDNUMBER2X, ROUNDNUMBER2Y );
		else if( round == 3 )
			draw_sprite( gameScreen, roundNumber3Frame0, ROUNDNUMBER3X, ROUNDNUMBER3Y );
		else if( round == 4 )
			draw_sprite( gameScreen, roundNumber4Frame0, ROUNDNUMBER4X, ROUNDNUMBER4Y );
		else if( round == 5 )
			draw_sprite( gameScreen, roundNumber5Frame0, ROUNDNUMBER5X, ROUNDNUMBER5Y );
	}
	else if( clock() - gameTimeStart >= 433 && clock() - gameTimeStart < 450 )//26 frames depois de começar
	{
		draw_sprite( gameScreen, roundFrame2, ROUNDX, ROUNDY );
		if(round == 1) 
			draw_sprite( gameScreen, roundNumber1Frame0, ROUNDNUMBER1X, ROUNDNUMBER1Y );
		else if( round == 2 )
			draw_sprite( gameScreen, roundNumber2Frame0, ROUNDNUMBER2X, ROUNDNUMBER2Y );
		else if( round == 3 )
			draw_sprite( gameScreen, roundNumber3Frame0, ROUNDNUMBER3X, ROUNDNUMBER3Y );
		else if( round == 4 )
			draw_sprite( gameScreen, roundNumber4Frame0, ROUNDNUMBER4X, ROUNDNUMBER4Y );
		else if( round == 5 )
			draw_sprite( gameScreen, roundNumber5Frame0, ROUNDNUMBER5X, ROUNDNUMBER5Y );
	}
	else if( clock() - gameTimeStart >= 450 && clock() - gameTimeStart < 483 )//27 frames depois de começar
	{
		draw_sprite( gameScreen, roundFrame3, ROUNDX, ROUNDY );
		if(round == 1) 
			draw_sprite( gameScreen, roundNumber1Frame1, ROUNDNUMBER1X, ROUNDNUMBER1Y );
		else if( round == 2 )
			draw_sprite( gameScreen, roundNumber2Frame1, ROUNDNUMBER2X, ROUNDNUMBER2Y );
		else if( round == 3 )
			draw_sprite( gameScreen, roundNumber3Frame1, ROUNDNUMBER3X, ROUNDNUMBER3Y );
		else if( round == 4 )
			draw_sprite( gameScreen, roundNumber4Frame1, ROUNDNUMBER4X, ROUNDNUMBER4Y );
		else if( round == 5 )
			draw_sprite( gameScreen, roundNumber5Frame1, ROUNDNUMBER5X, ROUNDNUMBER5Y );
	}
	else if( clock() - gameTimeStart >= 483 && clock() - gameTimeStart < 516 )//29 frames depois de começar
	{
		draw_sprite( gameScreen, roundFrame3, ROUNDX, ROUNDY );
		if(round == 1) 
			draw_sprite( gameScreen, roundNumber1Frame2, ROUNDNUMBER1X, ROUNDNUMBER1Y );
		else if( round == 2 )
			draw_sprite( gameScreen, roundNumber2Frame2, ROUNDNUMBER2X, ROUNDNUMBER2Y );
		else if( round == 3 )
			draw_sprite( gameScreen, roundNumber3Frame2, ROUNDNUMBER3X, ROUNDNUMBER3Y );
		else if( round == 4 )
			draw_sprite( gameScreen, roundNumber4Frame2, ROUNDNUMBER4X, ROUNDNUMBER4Y );
		else if( round == 5 )
			draw_sprite( gameScreen, roundNumber5Frame2, ROUNDNUMBER5X, ROUNDNUMBER5Y );
	}
	else if( clock() - gameTimeStart >= 516 && clock() - gameTimeStart < 550 )//31 frames depois de começar
	{
		draw_sprite( gameScreen, roundFrame4, ROUNDX, ROUNDY );
		if(round == 1) 
			draw_sprite( gameScreen, roundNumber1Frame3, ROUNDNUMBER1X, ROUNDNUMBER1Y );
		else if( round == 2 )
			draw_sprite( gameScreen, roundNumber2Frame3, ROUNDNUMBER2X, ROUNDNUMBER2Y );
		else if( round == 3 )
			draw_sprite( gameScreen, roundNumber3Frame3, ROUNDNUMBER3X, ROUNDNUMBER3Y );
		else if( round == 4 )
			draw_sprite( gameScreen, roundNumber4Frame3, ROUNDNUMBER4X, ROUNDNUMBER4Y );
		else if( round == 5 )
			draw_sprite( gameScreen, roundNumber5Frame3, ROUNDNUMBER5X, ROUNDNUMBER5Y );
	}
	else if( clock() - gameTimeStart >= 550 && clock() - gameTimeStart < 1000 )//33 frames depois de começar
	{
		draw_sprite( gameScreen, roundFrame4, ROUNDX, ROUNDY );
		if(round == 1) 
			draw_sprite( gameScreen, roundNumber1Frame4, ROUNDNUMBER1X, ROUNDNUMBER1Y );
		else if( round == 2 )
			draw_sprite( gameScreen, roundNumber2Frame4, ROUNDNUMBER2X, ROUNDNUMBER2Y );
		else if( round == 3 )
			draw_sprite( gameScreen, roundNumber3Frame4, ROUNDNUMBER3X, ROUNDNUMBER3Y );
		else if( round == 4 )
			draw_sprite( gameScreen, roundNumber4Frame4, ROUNDNUMBER4X, ROUNDNUMBER4Y );
		else if( round == 5 )
			draw_sprite( gameScreen, roundNumber5Frame4, ROUNDNUMBER5X, ROUNDNUMBER5Y );
	}
	else if( clock() - gameTimeStart >= 1183 && clock() - gameTimeStart < 1266 )//71 frames depois de começar
	{
		draw_sprite( gameScreen, readyFrame0, READYX, READYY );
	}
	else if( clock() - gameTimeStart >= 1266 && clock() - gameTimeStart < 1350 )//76 frames depois de começar
	{
		draw_sprite( gameScreen, readyFrame1, READYX, READYY );
	}
	else if( clock() - gameTimeStart >= 1350 && clock() - gameTimeStart < 1433 )//81 frames depois de começar
	{
		draw_sprite( gameScreen, readyFrame2, READYX, READYY );
	}
	else if( clock() - gameTimeStart >= 1433 && clock() - gameTimeStart < 1516 )//86 frames depois de começar
	{
		draw_sprite( gameScreen, readyFrame3, READYX, READYY );
	}
	else if( clock() - gameTimeStart >= 1516 && clock() - gameTimeStart < 2000 )//91 frames depois de começar
	{
		draw_sprite( gameScreen, readyFrame4, READYX, READYY );
	}
	else if( clock() - gameTimeStart >= 2000 && clock() - gameTimeStart < 2500  )//120 frames depois de começar
	{
		//imterpolação
		draw_sprite( gameScreen, g, ( GENDX * ( ( ( clock() - gameTimeStart - 2000 ) * 100 ) / 500 ) ) / 100, GOY );
		draw_sprite( gameScreen, o, OSTARTX + -1*( ( ( OSTARTX - OENDX ) * ( ( ( clock() - gameTimeStart - 2000 ) * 100 ) / 500 ) ) / 100 ), GOY );
	}
	else if( clock() - gameTimeStart >= 2500 && clock() - gameTimeStart < 3000 )//135 frames depois de começar
	{
			//Letra G
		draw_sprite( gameScreen, g, GENDX, GOY );
			//Letra O
		draw_sprite( gameScreen, o, OENDX, GOY );
	}
	else if( clock() - gameTimeStart > 3000 )//fim
	{
		gameStartCommand = false;
		gameStart = true;
		gameTimeStart = clock();
	}
	
}

//time over
//void Game::BuildTimeOver()

//k.o.
//void Game::BuildKOText()

//winner
//void Game::BuildWinnerText( bool perfect )


/**
 * Carrega as imagens do disco para a construção dos textos de inicio e termino de jogo
 */
void Game::LoadSprites()
{
	//texto de termino
	drawGameFrame0 = load_bitmap("sprites/text/TXTDrawGame0.bmp", NULL);
	drawGameFrame1 = load_bitmap("sprites/text/TXTDrawGame1.bmp", NULL);
	drawGameFrame2 = load_bitmap("sprites/text/TXTDrawGame2.bmp", NULL);
	drawGameFrame3 = load_bitmap("sprites/text/TXTDrawGame3.bmp", NULL);
	drawGameFrame4 = load_bitmap("sprites/text/TXTDrawGame4.bmp", NULL);
	drawGameFrame5 = load_bitmap("sprites/text/TXTDrawGame5.bmp", NULL);
	drawGameFrame6 = load_bitmap("sprites/text/TXTDrawGame6.bmp", NULL);

	timeOverFrame0 = load_bitmap("sprites/text/TXTTimeOver0.bmp", NULL);
	timeOverFrame1 = load_bitmap("sprites/text/TXTTimeOver1.bmp", NULL);
	timeOverFrame2 = load_bitmap("sprites/text/TXTTimeOver2.bmp", NULL);
	timeOverFrame3 = load_bitmap("sprites/text/TXTTimeOver3.bmp", NULL);

	winnerFrame0 = load_bitmap("sprites/text/TXTWinner0.bmp", NULL);
	winnerFrame1 = load_bitmap("sprites/text/TXTWinner1.bmp", NULL);
	winnerFrame2 = load_bitmap("sprites/text/TXTWinner2.bmp", NULL);
	winnerFrame3 = load_bitmap("sprites/text/TXTWinner3.bmp", NULL);
	winnerFrame4 = load_bitmap("sprites/text/TXTWinner4.bmp", NULL);
	winnerFrame5 = load_bitmap("sprites/text/TXTWinner5.bmp", NULL);

	perfect0 = load_bitmap("sprites/text/TXTPerfect0.bmp", NULL);
	perfect1 = load_bitmap("sprites/text/TXTPerfect1.bmp", NULL);
	perfect2 = load_bitmap("sprites/text/TXTPerfect2.bmp", NULL);
	perfect3 = load_bitmap("sprites/text/TXTPerfect3.bmp", NULL);
	perfect4 = load_bitmap("sprites/text/TXTPerfect4.bmp", NULL);

	kP = load_bitmap("sprites/text/kP.bmp", NULL);
	oP = load_bitmap("sprites/text/oP.bmp", NULL);

	//texto de inicio
	g = load_bitmap("sprites/text/g.bmp", NULL);
	o = load_bitmap("sprites/text/o.bmp", NULL);

	readyFrame0 = load_bitmap("sprites/text/TXTReady0.bmp", NULL);
	readyFrame1 = load_bitmap("sprites/text/TXTReady1.bmp", NULL);
	readyFrame2 = load_bitmap("sprites/text/TXTReady2.bmp", NULL);
	readyFrame3 = load_bitmap("sprites/text/TXTReady3.bmp", NULL);
	readyFrame4 = load_bitmap("sprites/text/TXTReady4.bmp", NULL);

	roundFrame0 = load_bitmap("sprites/text/TXTRound0.bmp", NULL);
	roundFrame1 = load_bitmap("sprites/text/TXTRound1.bmp", NULL);
	roundFrame2 = load_bitmap("sprites/text/TXTRound2.bmp", NULL);
	roundFrame3 = load_bitmap("sprites/text/TXTRound3.bmp", NULL);
	roundFrame4 = load_bitmap("sprites/text/TXTRound4.bmp", NULL);

	roundNumber1Frame0 = load_bitmap("sprites/text/TXT100.bmp", NULL);
	roundNumber1Frame1 = load_bitmap("sprites/text/TXT101.bmp", NULL);
	roundNumber1Frame2 = load_bitmap("sprites/text/TXT102.bmp", NULL);
	roundNumber1Frame3 = load_bitmap("sprites/text/TXT103.bmp", NULL);
	roundNumber1Frame4 = load_bitmap("sprites/text/TXT104.bmp", NULL);

	roundNumber2Frame0 = load_bitmap("sprites/text/TXT200.bmp", NULL);
	roundNumber2Frame1 = load_bitmap("sprites/text/TXT201.bmp", NULL);
	roundNumber2Frame2 = load_bitmap("sprites/text/TXT202.bmp", NULL);
	roundNumber2Frame3 = load_bitmap("sprites/text/TXT203.bmp", NULL);
	roundNumber2Frame4 = load_bitmap("sprites/text/TXT204.bmp", NULL);

	roundNumber3Frame0 = load_bitmap("sprites/text/TXT300.bmp", NULL);
	roundNumber3Frame1 = load_bitmap("sprites/text/TXT301.bmp", NULL);
	roundNumber3Frame2 = load_bitmap("sprites/text/TXT302.bmp", NULL);
	roundNumber3Frame3 = load_bitmap("sprites/text/TXT303.bmp", NULL);
	roundNumber3Frame4 = load_bitmap("sprites/text/TXT304.bmp", NULL);

	roundNumber4Frame0 = load_bitmap("sprites/text/TXT400.bmp", NULL);
	roundNumber4Frame1 = load_bitmap("sprites/text/TXT401.bmp", NULL);
	roundNumber4Frame2 = load_bitmap("sprites/text/TXT402.bmp", NULL);
	roundNumber4Frame3 = load_bitmap("sprites/text/TXT403.bmp", NULL);
	roundNumber4Frame4 = load_bitmap("sprites/text/TXT404.bmp", NULL);

	roundNumber5Frame0 = load_bitmap("sprites/text/TXT500.bmp", NULL);
	roundNumber5Frame1 = load_bitmap("sprites/text/TXT501.bmp", NULL);
	roundNumber5Frame2 = load_bitmap("sprites/text/TXT502.bmp", NULL);
	roundNumber5Frame3 = load_bitmap("sprites/text/TXT503.bmp", NULL);
	roundNumber5Frame4 = load_bitmap("sprites/text/TXT504.bmp", NULL);

}
