#include <allegro.h>
#include "Interface.h"

void Interface::BuildPlayerBars()
{

//barra de vida laranja do player 1
	clear( player1LifeBarOrange );
	rectfill( player1LifeBarOrange, 0, 0, 582, 31, makecol(255,0,255) );
	draw_sprite( player1LifeBarOrange, LifeBarOrange, p1LifeBarOrangeX, 0 );

//barra de vida laranja do player 1
	clear( player2LifeBarOrange );
	rectfill( player2LifeBarOrange, 0, 0, 582, 31, makecol(255,0,255) );
	draw_sprite( player2LifeBarOrange, LifeBarOrange, p2LifeBarOrangeX, 0 );


//barra de vida vermelha do player 1
	clear( player1LifeBarRed );
	rectfill( player1LifeBarRed, 0, 0, 582, 31, makecol(255,0,255) );
	draw_sprite( player1LifeBarRed, LifeBarRed, p1LifeBarRedX, 0 );

//barra de vida vermelha do player 1
	clear( player2LifeBarRed );
	rectfill( player2LifeBarRed, 0, 0, 582, 31, makecol(255,0,255) );
	draw_sprite( player2LifeBarRed, LifeBarRed, p2LifeBarRedX, 0 );


//barra de escudo do player 1
	clear( shildBarPlayer1 );
	rectfill( shildBarPlayer1, 0, 0, 582, 31, makecol(255,0,255) );
	draw_sprite( shildBarPlayer1, shildBar, p1ShildBarX, 0 );

//barra de escudo do player 2
	clear( shildBarPlayer2 );
	rectfill( shildBarPlayer2, 0, 0, 582, 31, makecol(255,0,255) );
	draw_sprite( shildBarPlayer2, shildBar, p2ShildBarX, 0 );


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
	
//ponto de especial 1 do player 1 (animação)
	clear( specialAnim1 );
	draw_sprite( specialAnim1, specialAnim[frame], 0, 0 );
	
//ponto de especial 2 do player 1 (animação)
	clear( specialAnim2 );
	draw_sprite( specialAnim2, specialAnim[frame], 0, 0 );
	
//ponto de especial 3 do player 1 (animação)
	clear( specialAnim3 );
	draw_sprite( specialAnim3, specialAnim[frame], 0, 0 );
	
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

//ponto de especial 1 do player 2 (animação)
	clear( specialAnim4 );
	draw_sprite( specialAnim4, specialAnim[frame], 0, 0 );

//ponto de especial 2 do player 2 (animação)
	clear( specialAnim5 );
	draw_sprite( specialAnim5, specialAnim[frame], 0, 0 );

//ponto de especial 3 do player 2 (animação)
	clear( specialAnim6 );
	draw_sprite( specialAnim6, specialAnim[frame], 0, 0 );
	
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
	
//barra azul do player 1
	draw_sprite( specialBarBluePlayer1, specialBarBlue, specialBarBlueP1X, 0 );
//barra rosa do player 1
	draw_sprite( specialBarPinkPlayer1, specialBarPink, specialBarPinkP1X, 0 );
//barra amarela do player 1
	draw_sprite( specialBarYellowPlayer1, specialBarYellow, specialBarYellowP1X, 0 );
//barra de pow do player 1
	draw_sprite( powBarPlayer1, powBar, powBarp1X, 0);
	
//barra azul do player 2
	draw_sprite( specialBarBluePlayer2, specialBarBlue, specialBarBlueP2X, 0 );
//barra rosa do player 2
	draw_sprite( specialBarPinkPlayer2, specialBarPink, specialBarPinkP2X, 0 );
//barra amarela do player 2
	draw_sprite( specialBarYellowPlayer2, specialBarYellow, specialBarYellowP2X, 0 );
//barra de pow do player 2
	draw_sprite( powBarPlayer2, powBar, powBarp2X, 0);

}END_OF_FUNCTION(BuildPlayerBars);


void Interface::BuildInterface()
{
	
	//limpa a imterface
	clear( completeInterface );
	
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( completeInterface, 0, 0, SCREEN_W, SCREEN_H, makecol(255,0,255) );

	
//frame dos personagens
	draw_sprite( completeInterface, framePlayer1, 0, 0 );
	draw_sprite( completeInterface, framePlayer2, 1556, 0 );
	
	
//interface de barras de vida
	//imprime no BITMAP a barra de vida da cor vermelha do player 1
	draw_sprite( completeInterface, player1LifeBarRed, 177, 64 );

	
	//imprime no BITMAP a barra de vida da cor laranja do player 1
	draw_sprite( completeInterface, player1LifeBarOrange, 177, 64 );
	
	
	//imprime no BITMAP a barra de vida da cor vermelha do player 2
	draw_sprite( completeInterface, player2LifeBarRed, 969, 64 );
	
	
	//imprime no BITMAP a barra de vida da cor laranja do player 2
	draw_sprite( completeInterface, player2LifeBarOrange, 969, 64 );
	
	
	//imprime no BITMAP a barra de escudo do player 1
	draw_sprite(completeInterface, shildBarPlayer1, 468, 111 );
	
	
	//imprime no BITMAP a barra de escudo do player 2
	draw_sprite( completeInterface, shildBarPlayer2, 1020, 111 );
	
	
	//imprime no BITMAP a interface de barras de vida
	draw_sprite( completeInterface, lifeBarsInterface, 152, 50 );
	
	
//interface de especial  do personagem 1
	//imprime no BITMAP a barra de especial
	if( especialQuantityP1 == 0 || especialQuantityP1 == 1 ) //0 e 1 
		draw_sprite( completeInterface, specialBarBluePlayer1,   76, 832 );		//barra de especial azul
	if( especialQuantityP1 == 1 || especialQuantityP1 == 2 ) //1 e 2
		draw_sprite( completeInterface, specialBarPinkPlayer1,   76, 832 );		//barra de especial rosa
	if( especialQuantityP1 == 2 || especialQuantityP1 == 3 ) //2 e 3
		draw_sprite( completeInterface, specialBarYellowPlayer1, 76, 832 );		//barra de especial amarelo
	
	
	//imprime os pontos de especial
	if( especialQuantityP1 >= 1 ) draw_sprite( completeInterface, specialAnim1, 96,  802 );		//ponto 1
	if( especialQuantityP1 >= 2 ) draw_sprite( completeInterface, specialAnim2, 144, 802 );		//ponto 2
	if( especialQuantityP1 >= 3 ) draw_sprite( completeInterface, specialAnim3, 192, 802 );		//ponto 3
	
	
	//imprime no BITMAP a interface de especiais do player 1
	if( powP1 )//pow ativo
	{
		draw_sprite( completeInterface, powBarPlayer1, 229, 803);				//barra de pow
		draw_sprite( completeInterface, specialInterface2Player1, 55, 790 );	//interface 2
	}
	else draw_sprite(completeInterface, specialInterface1Player1, 55, 790 );	//interface 1
	
	
//interface de especial  do personagem 2
	//imprime no BITMAP a barra de especial
	if( especialQuantityP2 == 0 || especialQuantityP2 == 1 ) //0 e 1 
		draw_sprite( completeInterface, specialBarBluePlayer2,   1290, 832 );	//barra de especial azul
	if( especialQuantityP2 == 1 || especialQuantityP2 == 2 ) //1 e 2
		draw_sprite( completeInterface, specialBarPinkPlayer2,   1290, 832 );	//barra de especial rosa
	if( especialQuantityP2 == 2 || especialQuantityP2 == 3 ) //2 e 3
		draw_sprite( completeInterface, specialBarYellowPlayer2, 1290, 832 );	//barra de especial amarelo
	
	
	//imprime os pontos de especial
	if( especialQuantityP2 >= 1 ) draw_sprite( completeInterface, specialAnim4, 1610, 802 );				//ponto 1
	if( especialQuantityP2 >= 2 ) draw_sprite( completeInterface, specialAnim5, 1562, 802 );				//ponto 2
	if( especialQuantityP2 >= 3 ) draw_sprite( completeInterface, specialAnim6, 1514, 802 );				//ponto 3 
	
	
	//imprime no BITMAP a interface de especiais do player 2
	if( powP2 )//pow ativo
	{
		draw_sprite( completeInterface, powBarPlayer2, 1348, 803);				//barra de pow
		draw_sprite( completeInterface, specialInterface2Player2, 1269, 790 );	//interface 2
	}	
	else draw_sprite(completeInterface, specialInterface1Player2, 1269, 790 );	//interface 1
	
	
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
				draw_sprite( completeInterface, redNumber[tenTime], 803, 35 );	//primeiro numero
				draw_sprite( completeInterface, redNumber[unitTime], 860, 35 );	//segundo numero
			}
			else
			{
				draw_sprite( completeInterface, number[tenTime][tenTimeAnimFrame], 803, 35 );	//primeiro numero
				draw_sprite( completeInterface, number[unitTime][unitTimeAnimFrame], 860, 35 );	//segundo numero
			}
		}
		else
		{
			draw_sprite( completeInterface, number[tenTime][tenTimeAnimFrame], 803, 35 );	//primeiro numero
			draw_sprite( completeInterface, number[unitTime][unitTimeAnimFrame], 860, 35 );	//segundo numero
		}
	}
	else
	{
		//imprimir os numeros
		draw_sprite( completeInterface, number[tenTime][tenTimeAnimFrame], 803, 35 );	//primeiro numero
		draw_sprite( completeInterface, number[unitTime][unitTimeAnimFrame], 860, 35 );	//segundo numero
	}
	
}END_OF_FUNCTION(BuildInterface);







