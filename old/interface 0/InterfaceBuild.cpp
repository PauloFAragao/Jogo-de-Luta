#include <allegro.h>
#include "Interface.h"


/**
 * Esse metodo limpa os BITMAPS e imprime as barras e na posição em x onde devem estar
 */
void Interface::BuildPlayerBars()
{

//barra de vida verde do player 1
	clear( player1LifeBarGreen );//limpa o bitmap
	rectfill( player1LifeBarGreen, 0, 0, 401, 19, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	draw_sprite( player1LifeBarGreen, LifeBarGreen, p1LifeBarGreenX, 0 );//imprime a barra de vida verde 

//barra de vida verde do player 2
	clear( player2LifeBarGreen );//limpa o bitmap
	rectfill( player2LifeBarGreen, 0, 0, 401, 19, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	draw_sprite( player2LifeBarGreen, LifeBarGreen, p2LifeBarGreenX, 0 );//imprime a barra de vida verde 


//barra de vida vermelha do player 1
	clear( player1LifeBarRed );//limpa o bitmap
	rectfill( player1LifeBarRed, 0, 0, 401, 19, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	draw_sprite( player1LifeBarRed, LifeBarRed, p1LifeBarRedX, 0 );//imprime a barra de vida vermelha

//barra de vida vermelha do player 2
	clear( player2LifeBarRed );//limpa o bitmap
	rectfill( player2LifeBarRed, 0, 0, 401, 19, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	draw_sprite( player2LifeBarRed, LifeBarRed, p2LifeBarRedX, 0 );//imprime a barra de vida vermelha


//barra de escudo do player 1
	clear( shildBarPlayer1 );//limpa o bitmap
	rectfill( shildBarPlayer1, 0, 0, 164, 15, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	draw_sprite( shildBarPlayer1, shildBar, p1ShildBarX, 0 );//imprime a barra de escudo

//barra de escudo do player 2
	clear( shildBarPlayer2 );//limpa o bitmap
	rectfill( shildBarPlayer2, 0, 0, 164, 15, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	draw_sprite( shildBarPlayer2, shildBar, p2ShildBarX, 0 );//imprime a barra de escudo


//contador de tempo
	clear( conterUnity );//limpa o bitmap
	rectfill( conterUnity, 0, 0, 35, 65, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	
	clear( conterDozen );//limpa o bitmap
	rectfill( conterDozen, 0, 0, 35, 65, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	
	
//quantidade de especial do player 1
	clear( specialNumberP1 );//limpa o bitmap
	rectfill( specialNumberP1, 0, 0, 24, 53, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	
//quantidade de especial do player 2
	clear( specialNumberP2 );//limpa o bitmap
	rectfill( specialNumberP2, 0, 0, 24, 53, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente

//barra azul do player 1
	clear( specialBarBluePlayer1 );//limpa o bitmap
	rectfill( specialBarBluePlayer1, 0, 0, 220, 18, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	draw_sprite( specialBarBluePlayer1, specialBarBlue, specialBarBlueP1X, 0 );//imprime a barra de especial azul
	
//barra roxa do player 1
	clear( specialBarPurplePlayer1 );//limpa o bitmap
	rectfill( specialBarPurplePlayer1, 0, 0, 220, 18, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	draw_sprite( specialBarPurplePlayer1, specialBarPurple, specialBarPurpleP1X, 0 );//imprime a barra de especial roxa
	
//barra amarela do player 1
	clear( specialBarYellowPlayer1 );//limpa o bitmap
	rectfill( specialBarYellowPlayer1, 0, 0, 220, 18, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	draw_sprite( specialBarYellowPlayer1, specialBarYellow, specialBarYellowP1X, 0 );//imprime a barra de especial amarela
	
//barra de pow do player 1
	clear( powBarPlayer1 );//limpa o bitmap
	rectfill( powBarPlayer1, 0, 0, 147, 9, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	draw_sprite( powBarPlayer1, powBarP1, powBarp1X, 0);//imprime a barra de pow
	
//barra azul do player 2
	clear( specialBarBluePlayer2 );//limpa o bitmap
	rectfill( specialBarBluePlayer2, 0, 0, 220, 18, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	draw_sprite( specialBarBluePlayer2, specialBarBlue, specialBarBlueP2X, 0 );//imprime a barra de especial azul
	
//barra roxa do player 2
	clear( specialBarPurplePlayer2 );//limpa o bitmap
	rectfill( specialBarPurplePlayer2, 0, 0, 220, 18, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	draw_sprite( specialBarPurplePlayer2, specialBarPurple, specialBarPurpleP2X, 0 );//imprime a barra de especial roxa
	
//barra amarela do player 2
	clear( specialBarYellowPlayer2 );//limpa o bitmap
	rectfill( specialBarYellowPlayer2, 0, 0, 220, 18, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	draw_sprite( specialBarYellowPlayer2, specialBarYellow, specialBarYellowP2X, 0 );//imprime a barra de especial amarela
	
//barra de pow do player 2
	clear( powBarPlayer2 );//limpa o bitmap
	rectfill( powBarPlayer2, 0, 0, 147, 9, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	draw_sprite( powBarPlayer2, powBarP2, powBarp2X, 0);//imprime a barra de pow

	
}END_OF_FUNCTION(BuildPlayerBars);


/**
 * Esse metodo constroi a interface
 */
void Interface::BuildInterface()
{

	//limpa a imterface
	clear( completeInterface );
	
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( completeInterface, 0, 0, SCREEN_W, SCREEN_H, makecol(255,0,255) );


//frame dos personagens
	draw_sprite( completeInterface, framePlayer1, 0, 0 );
	draw_sprite( completeInterface, framePlayer2, 968, 0 );
	
	
//interface de barras de vida
	//imprime no BITMAP a barra de vida da cor vermelha do player 1
	//draw_sprite( completeInterface, player1LifeBarRed, 112, 55 );
	
	if( lifePointsP1 != lifePointsP1Memory )
	{
		lifePointsP1Memory -= 5; 
		if( lifePointsP1Memory < lifePointsP1 ) lifePointsP1Memory = lifePointsP1; 
		
		//imprime uma barra vermelha na interface
		rectfill( completeInterface, 112 + ( 401 * ( 100 * ( lifePointsP1Max - lifePointsP1Memory ) ) / lifePointsP1Max ) / 100 , 55, 513, 74, makecol(245,9,9) );
	}
	
	
	//imprime no BITMAP a barra de vida da cor verde do player 1
	draw_sprite( completeInterface, player1LifeBarGreen, 112, 55 );
	
	
	//imprime no BITMAP a barra de vida da cor vermelha do player 2
	if( lifePointsP2 != lifePointsP2Memory )
	{
		lifePointsP2Memory -= 5;
		if( lifePointsP2Memory < lifePointsP2 ) lifePointsP2Memory = lifePointsP2; 
		
		//imprime uma barra vermelha na interface
		rectfill( completeInterface, 626, 55, 626-(401*(100*( lifePointsP2Max - lifePointsP2Memory )/ lifePointsP2Max-100)/100) , 74, makecol(245,9,9) );
	}
	
	//imprime no BITMAP a barra de vida da cor verde do player 2
	draw_sprite( completeInterface, player2LifeBarGreen, 626, 55 );
	
	
	//imprime no BITMAP a barra de escudo do player 1
	draw_sprite(completeInterface, shildBarPlayer1, 331, 81 );
	
	
	//imprime no BITMAP a barra de escudo do player 2
	draw_sprite( completeInterface, shildBarPlayer2, 644, 81 );
	
	
	//imprime no BITMAP a interface de barras de vida
	draw_sprite( completeInterface, lifeBarsInterface, 105, 48 );
	
	
//interface de especial  do personagem 1
	//imprime no BITMAP a barra de especial
	if( especialQuantityP1 == 0 || especialQuantityP1 == 1 ) //0 e 1 

		rectfill( completeInterface, 85, 568, 85 + ( ( 220 * especialBarP1 ) / 100 ), 586, makecol(3,40,255) );

	
	if( especialQuantityP1 == 1 || especialQuantityP1 == 2 ) //1 e 2
		draw_sprite( completeInterface, specialBarPurplePlayer1, 85, 568 );	//barra de especial roxa
	if( especialQuantityP1 == 2 || especialQuantityP1 == 3 ) //2 e 3
		draw_sprite( completeInterface, specialBarYellowPlayer1, 85, 568 );	//barra de especial amarelo
	if( especialQuantityP1 == 3 || especialQuantityP1 == 4 ) //3 e 4
		draw_sprite( completeInterface, specialBarPurplePlayer1, 85, 568 );	//barra de especial roxa
	if( especialQuantityP1 == 4 ) //4
		draw_sprite( completeInterface, specialBarBluePlayer1, 85, 568 );	//barra de especial azul

	
	//imprime no BITMAP a interface de especiais do player 1
	if( powP1 )//pow ativo
	{
		draw_sprite( completeInterface, powBarPlayer1, 69, 552);			//barra de pow
		draw_sprite( completeInterface, specialInterface2Player1, 21, 541 );//interface 2
	}
	else draw_sprite(completeInterface, specialInterface1Player1, 21, 541 );//interface 1
	
	
	//BARRA DE MAXIMUM TESTE
	if( especialQuantityP1 == 5 ) draw_sprite( completeInterface, maximumSpecialBarP1, 85, 567 );
		
		
	//imprime os pontos de especial
	if( especialQuantityP1 == 0 ) draw_sprite( specialNumberP1, specialNumber0, 0, 0 );
	if( especialQuantityP1 == 1 ) draw_sprite( specialNumberP1, specialNumber1, 0, 0 );
	if( especialQuantityP1 == 2 ) draw_sprite( specialNumberP1, specialNumber2, 0, 0 );
	if( especialQuantityP1 == 3 ) draw_sprite( specialNumberP1, specialNumber3, 0, 0 );
	if( especialQuantityP1 == 4 ) draw_sprite( specialNumberP1, specialNumber4, 0, 0 );
	if( especialQuantityP1 == 5 ) draw_sprite( specialNumberP1, specialNumber5, 0, 0 );
	
	
	draw_sprite( completeInterface, specialNumberP1, 45, 551);				//quantidade de pontos de especial do player 1
	
	
//interface de especial  do personagem 2
	//imprime no BITMAP a barra de especial
	if( especialQuantityP2 == 0 || especialQuantityP2 == 1 ) //0 e 1 
		
		//draw_sprite( completeInterface, specialBarBluePlayer2, 836, 568 );	//barra de especial azul
	
	rectfill( completeInterface, 1056 - ( ( 220 * especialBarP2  ) / 100 ), 568, 1056 , 586, makecol(3,40,255) );
	
	if( especialQuantityP2 == 1 || especialQuantityP2 == 2 ) //1 e 2
		draw_sprite( completeInterface, specialBarPurplePlayer2, 836, 568 );//barra de especial roxa
	if( especialQuantityP2 == 2 || especialQuantityP2 == 3 ) //2 e 3
		draw_sprite( completeInterface, specialBarYellowPlayer2, 836, 568 );//barra de especial amarelo
	if( especialQuantityP2 == 3 || especialQuantityP2 == 4 ) //3 e 4
		draw_sprite( completeInterface, specialBarPurplePlayer2, 836, 568 );//barra de especial roxa
	if( especialQuantityP1 == 4 ) //4
		draw_sprite( completeInterface, specialBarBluePlayer2, 836, 568 );	//barra de especial azul
	
	
	//imprime no BITMAP a interface de especiais do player 2
	if( powP2 )//pow ativo
	{
		draw_sprite( completeInterface, powBarPlayer2, 925, 552);			//barra de pow
		draw_sprite( completeInterface, specialInterface2Player2, 829, 541 );//interface 2
	}
	else draw_sprite(completeInterface, specialInterface1Player2, 829, 541 );//interface 1
	
	
	//BARRA DE MAXIMUM TESTE
	if( especialQuantityP2 == 5 ) draw_sprite( completeInterface, maximumSpecialBarP2, 836, 567 );
	
	
	//imprime os pontos de especial
	if( especialQuantityP2 == 0 ) draw_sprite( specialNumberP2, specialNumber0, 0, 0 );
	if( especialQuantityP2 == 1 ) draw_sprite( specialNumberP2, specialNumber1, 0, 0 );
	if( especialQuantityP2 == 2 ) draw_sprite( specialNumberP2, specialNumber2, 0, 0 );
	if( especialQuantityP2 == 3 ) draw_sprite( specialNumberP2, specialNumber3, 0, 0 );
	if( especialQuantityP2 == 4 ) draw_sprite( specialNumberP2, specialNumber4, 0, 0 );
	if( especialQuantityP2 == 5 ) draw_sprite( specialNumberP2, specialNumber5, 0, 0 );
	
	
	draw_sprite( completeInterface, specialNumberP2, 1072, 551);			//quantidade de pontos de especial do player 2
	




	draw_sprite( conterDozen, number3Frame3, 0, 0 );
	draw_sprite( conterUnity, number5Frame3, 0, 0 );

	draw_sprite( completeInterface, conterUnity, 572, 43);
	draw_sprite( completeInterface, conterDozen, 533, 43);


	/*
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
	*/

}END_OF_FUNCTION(BuildInterface);







