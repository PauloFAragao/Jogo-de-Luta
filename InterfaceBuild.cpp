#include <allegro.h>
#include "Interface.h"


/**
 *	Metodo responsavel por construir a interface do jogo
 */
void Interface::BuildInterface( int gameTime, int lifePointsP1, int lifePointsP2, int lifePointsMaxP1, int lifePointsMaxP2, int shildP1, int shildP2, int especialBarP1, int especialBarP2, int especialQuantityP1, int especialQuantityP2, int powTimeP1, int powTimeP2, bool powP1, bool powP2 )
{
	clear( completeInterface );//limpa a imterface
	rectfill( completeInterface, 0, 0, SCREEN_W, SCREEN_H, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	
	//frame dos personagens
	draw_sprite( completeInterface, framePlayer1, 0, 0 );
	draw_sprite( completeInterface, framePlayer2, 968, 0 );

	BuildPlayer1LifeBar( lifePointsP1, lifePointsMaxP1 );	//barra de vida do personagem 1
	BuildPlayer2LifeBar( lifePointsP2, lifePointsMaxP2 );	//barra de vida do personagem2
	BuildPlayer1ShildBar( shildP1 );	//barra de escudo do personagem 1
	BuildPlayer2ShildBar( shildP2 );	//barra de escudo do personagem 1
	BuildTimer( gameTime );			//contador de tempo
	
	//interface de barras de vida
	draw_sprite( completeInterface, lifeBarsInterface, 105, 48 );
	
	
//especial do player 1
	//barras de especial do 0 ao 4
	if ( especialQuantityP1 >= 0 && especialQuantityP1 < 5 ) BuildPlayer1SpecialBar( especialQuantityP1, especialBarP1 );
	
	if( powP1 )
	{
		BuildPlayer1PowBar( powTimeP1 );
		draw_sprite( completeInterface, specialInterface2Player1, 21, 541 );//interface de especial para pow ativo
	}
	else draw_sprite(completeInterface, specialInterface1Player1, 21, 541 );//interface de especial
	
	//barra de especial no nivel 5
	if ( especialQuantityP1 == 5 )
		 draw_sprite( completeInterface, maximumSpecialBarP1, 85, 567 );

	//imprime o numero de barras de especial na interface
	BuildPlayer1SpecialPoints( especialQuantityP1 );
	
//especial do player 2
	//barras de especial do 0 ao 4
	if ( especialQuantityP2 >= 0 && especialQuantityP2 < 5 ) BuildPlayer2SpecialBar( especialQuantityP2, especialBarP2 );
	
	if( powP2 )
	{
		BuildPlayer2PowBar( powTimeP2 );
		draw_sprite( completeInterface, specialInterface2Player2, 829, 541 );//interface de especial para pow ativo
	}
	else draw_sprite(completeInterface, specialInterface1Player2, 829, 541 );//interface de especial
	
	//barra de especial no nivel 5
	if( especialQuantityP2 == 5 ) 
		draw_sprite( completeInterface, maximumSpecialBarP2, 836, 567 );
	
	BuildPlayer2SpecialPoints( especialQuantityP2 );
	
}END_OF_FUNCTION(BuildInterface);


/**
 *	Metodo responsavel por construir a barra de vida do personagem 1
 */
void Interface::BuildPlayer1LifeBar( int lifePointsP1, int lifePointsP1Max )
{
//barra vermelha
	if( lifePointsP1 != lifePointsP1Memory )
	{
		lifePointsP1Memory -= 5; 
		if( lifePointsP1Memory < lifePointsP1 ) lifePointsP1Memory = lifePointsP1; 
		
		//imprime uma barra vermelha na interface
		rectfill( completeInterface, 112 + ( 401 * ( 100 * ( lifePointsP1Max - lifePointsP1Memory ) ) / lifePointsP1Max ) / 100 , 55, 513, 74, makecol(245,9,9) );
	}
	
//barra verde
	//limpa o bitmap
	clear( player1LifeBarGreen );
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( player1LifeBarGreen, 0, 0, 401, 19, makecol(255,0,255) );
	//imprime a barra verde no bitmap da barra de vida
	draw_sprite( player1LifeBarGreen, LifeBarGreen, (401*(100*(lifePointsP1Max-lifePointsP1))/lifePointsP1Max)/100, 0 );
	//imprime a barra de vida no bitmap da interface
	draw_sprite( completeInterface, player1LifeBarGreen, 112, 55 );
}END_OF_FUNCTION(BuildPlayer1LifeBar);


/**
 *	Metodo responsavel por construir a barra de vida do personagem 2
 */
void Interface::BuildPlayer2LifeBar( int lifePointsP2, int lifePointsP2Max )
{
//barra de vida vermelha
	if( lifePointsP2 != lifePointsP2Memory )
	{
		lifePointsP2Memory -= 5;
		if( lifePointsP2Memory < lifePointsP2 ) lifePointsP2Memory = lifePointsP2; 
		
		//imprime uma barra vermelha na interface
		rectfill( completeInterface, 626, 55, 626-(401*(100*( lifePointsP2Max - lifePointsP2Memory )/ lifePointsP2Max-100)/100) , 74, makecol(245,9,9) );
	}
	
//barra de vida verde
	//limpa o bitmap
	clear( player2LifeBarGreen );
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( player2LifeBarGreen, 0, 0, 401, 19, makecol(255,0,255) );
	//imprime a barra verde no bitmap da barra de vida
	draw_sprite( player2LifeBarGreen, LifeBarGreen, -1*(401*(100*(lifePointsP2Max-lifePointsP2))/lifePointsP2Max)/100, 0 );
	//imprime a barra de vida no bitmap da interface
	draw_sprite( completeInterface, player2LifeBarGreen, 626, 55 );
}END_OF_FUNCTION(BuildPlayer2LifeBar);


/**
 *	Metodo responsavel por construir a barra de escudo do personagem 1
 */
void Interface::BuildPlayer1ShildBar( int shildPointsP1 )
{
	//limpa o bitmap
	clear( shildBarPlayer1 );
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( shildBarPlayer1, 0, 0, 164, 15, makecol(255,0,255) );
	//imprime a barra azul no bitmap da barra de escudo
	draw_sprite( shildBarPlayer1, shildBar, (164*(100*(200-shildPointsP1))/200)/100, 0 );
	//imprime a barra de escudo no bitmap da interface
	draw_sprite(completeInterface, shildBarPlayer1, 331, 81 );
}END_OF_FUNCTION(BuildPlayer1ShildBar);


/**
 *	Metodo responsavel por construir a barra de escudo do personagem 2
 */
void Interface::BuildPlayer2ShildBar( int shildPointsP2 )
{
	//limpa o bitmap
	clear( shildBarPlayer2 );
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( shildBarPlayer2, 0, 0, 164, 15, makecol(255,0,255) );
	//imprime a barra azul no bitmap da barra de escudo
	draw_sprite( shildBarPlayer2, shildBar, -1*(164*(100*(200-shildPointsP2))/200)/100, 0 );
	//imprime a barra de escudo no bitmap da interface
	draw_sprite( completeInterface, shildBarPlayer2, 644, 81 );
}END_OF_FUNCTION(BuildPlayer2ShildBar);


/**
 *	Metodo responsavel por construir o contador de tempo da partida
 */
void Interface::BuildTimer( int gameTime )
{
	
	//unidade
	clear( conterUnity );//limpa o bitmap
	rectfill( conterUnity, 0, 0, 35, 65, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	
	//dezena
	clear( conterDozen );//limpa o bitmap
	rectfill( conterDozen, 0, 0, 35, 65, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	
	if( gameTime < 58999 )
	{
		//controle da animação
		if( gameTime > 50000 )
		{
			//entre 10 e 5
			if( gameTime > 50000 && gameTime < 55000 )
			{
				if( gameTime % 1000 > 750 ) 	 numberAnimation = false;
				else if( gameTime % 1000 > 500 ) numberAnimation = true;
				else if( gameTime % 1000 > 250 ) numberAnimation = false;
				else 							 numberAnimation = true;	
			}
			//menos que 5
			else
			{
				if( gameTime % 1000 > 900 ) 	 numberAnimation = false;
				else if( gameTime % 1000 > 800 ) numberAnimation = true;
				else if( gameTime % 1000 > 700 ) numberAnimation = false;
				else if( gameTime % 1000 > 600 ) numberAnimation = true;
				else if( gameTime % 1000 > 500 ) numberAnimation = false;
				else if( gameTime % 1000 > 400 ) numberAnimation = true;
				else if( gameTime % 1000 > 300 ) numberAnimation = false;
				else if( gameTime % 1000 > 200 ) numberAnimation = true;
				else if( gameTime % 1000 > 100 ) numberAnimation = false;
				else 							 numberAnimation = true;
			}
		}
		
	//unidade
		if ( gameTime % 10000 < 1000 && gameTime % 10000 != 0 )//qualquer numero terminado em 9
		{
			if( gameTime % 1000 > 25 )
			{
				if( gameTime < 50000 || numberAnimation )
					draw_sprite( conterUnity, number9Frame3, 0, 0 );
				else
					draw_sprite( conterUnity, number9RedFrame, 0, 0 );
			}
			else if( gameTime % 1000 > 50 )
				draw_sprite( conterUnity, number9Frame2, 0, 0 );
			else if( gameTime % 1000 > 75 )
				draw_sprite( conterUnity, number9Frame1, 0, 0 );
			else
				draw_sprite( conterUnity, number9Frame0, 0, 0 );
		}
		else if ( gameTime % 10000 < 2000 && gameTime % 10000 != 0 )//qualquer numero terminado em 8
		{
			if( gameTime % 1000 > 25 )
			{
				if( gameTime < 50000 || numberAnimation )
					draw_sprite( conterUnity, number8Frame3, 0, 0 );
				else
					draw_sprite( conterUnity, number8RedFrame, 0, 0 );
			}
			else if( gameTime % 1000 > 50 )
				draw_sprite( conterUnity, number8Frame2, 0, 0 );
			else if( gameTime % 1000 > 75 )
				draw_sprite( conterUnity, number8Frame1, 0, 0 );
			else
				draw_sprite( conterUnity, number8Frame0, 0, 0 );
		}
		else if ( gameTime % 10000 < 3000 && gameTime % 10000 != 0 )//qualquer numero terminado em 7
		{
			if( gameTime % 1000 > 25 )
			{
				if( gameTime < 50000 || numberAnimation )
					draw_sprite( conterUnity, number7Frame3, 0, 0 );
				else
					draw_sprite( conterUnity, number7RedFrame, 0, 0 );
			}
			else if( gameTime % 1000 > 50 )
				draw_sprite( conterUnity, number7Frame2, 0, 0 );
			else if( gameTime % 1000 > 75 )
				draw_sprite( conterUnity, number7Frame1, 0, 0 );
			else
				draw_sprite( conterUnity, number7Frame0, 0, 0 );
		}
		else if ( gameTime % 10000 < 4000 && gameTime % 10000 != 0 )//qualquer numero terminado em 6
		{
			if( gameTime % 1000 > 25 )
			{
				if( gameTime < 50000 || numberAnimation )
					draw_sprite( conterUnity, number6Frame3, 0, 0 );
				else
					draw_sprite( conterUnity, number6RedFrame, 0, 0 );
			}
			else if( gameTime % 1000 > 50 )
				draw_sprite( conterUnity, number6Frame2, 0, 0 );
			else if( gameTime % 1000 > 75 )
				draw_sprite( conterUnity, number6Frame1, 0, 0 );
			else
				draw_sprite( conterUnity, number6Frame0, 0, 0 );
		}
		else if ( gameTime % 10000 < 5000 && gameTime % 10000 != 0 )//qualquer numero terminado em 5
		{
			if( gameTime % 1000 > 25 )
			{
				if( gameTime < 50000 || numberAnimation )
					draw_sprite( conterUnity, number5Frame3, 0, 0 );
				else
					draw_sprite( conterUnity, number5RedFrame, 0, 0 );
			}
			else if( gameTime % 1000 > 50 )
				draw_sprite( conterUnity, number5Frame2, 0, 0 );
			else if( gameTime % 1000 > 75 )
				draw_sprite( conterUnity, number5Frame1, 0, 0 );
			else
				draw_sprite( conterUnity, number5Frame0, 0, 0 );
		}
		else if ( gameTime % 10000 < 6000 && gameTime % 10000 != 0 )//qualquer numero terminado em 4
		{
			if( gameTime % 1000 > 25 )
			{
				if( gameTime < 50000 || numberAnimation )
					draw_sprite( conterUnity, number4Frame3, 0, 0 );
				else
					draw_sprite( conterUnity, number4RedFrame, 0, 0 );
			}
			else if( gameTime % 1000 > 50 )
				draw_sprite( conterUnity, number4Frame2, 0, 0 );
			else if( gameTime % 1000 > 75 )
				draw_sprite( conterUnity, number4Frame1, 0, 0 );
			else
				draw_sprite( conterUnity, number4Frame0, 0, 0 );
		}
		else if ( gameTime % 10000 < 7000 && gameTime % 10000 != 0 )//qualquer numero terminado em 3
		{
			if( gameTime % 1000 > 25 )
			{
				if( gameTime < 50000 || numberAnimation )
					draw_sprite( conterUnity, number3Frame3, 0, 0 );
				else
					draw_sprite( conterUnity, number3RedFrame, 0, 0 );
			}
			else if( gameTime % 1000 > 50 )
				draw_sprite( conterUnity, number3Frame2, 0, 0 );
			else if( gameTime % 1000 > 75 )
				draw_sprite( conterUnity, number3Frame1, 0, 0 );
			else
				draw_sprite( conterUnity, number3Frame0, 0, 0 );
		}
		else if ( gameTime % 10000 < 8000 && gameTime % 10000 != 0 )//qualquer numero terminado em 2
		{
			if( gameTime % 1000 > 25 )
			{
				if( gameTime < 50000 || numberAnimation )
					draw_sprite( conterUnity, number2Frame3, 0, 0 );
				else
					draw_sprite( conterUnity, number2RedFrame, 0, 0 );
			}
			else if( gameTime % 1000 > 50 )
				draw_sprite( conterUnity, number2Frame2, 0, 0 );
			else if( gameTime % 1000 > 75 )
				draw_sprite( conterUnity, number2Frame1, 0, 0 );
			else
				draw_sprite( conterUnity, number2Frame0, 0, 0 );
		}
		else if ( gameTime % 10000 < 9000 && gameTime % 10000 != 0 )//qualquer numero terminado em 1
		{
			if( gameTime % 1000 > 25 )
			{
				if( gameTime < 50000 || numberAnimation )
					draw_sprite( conterUnity, number1Frame3, 0, 0 );
				else
					draw_sprite( conterUnity, number1RedFrame, 0, 0 );
			}
			else if( gameTime % 1000 > 50 )
				draw_sprite( conterUnity, number1Frame2, 0, 0 );
			else if( gameTime % 1000 > 75 )
				draw_sprite( conterUnity, number1Frame1, 0, 0 );
			else
				draw_sprite( conterUnity, number1Frame0, 0, 0 );
		}
		else if ( gameTime % 10000 < 9999 || gameTime % 10000 == 0 )//qualquer numero terminado em 0
		{
			if( gameTime % 1000 > 25 || gameTime % 10000 == 0 )
			{
				if( gameTime < 50000 || numberAnimation )
					draw_sprite( conterUnity, number0Frame3, 0, 0 );
				else
					draw_sprite( conterUnity, number0RedFrame, 0, 0 );
			}
			else if( gameTime % 1000 > 50 )
				draw_sprite( conterUnity, number0Frame2, 0, 0 );
			else if( gameTime % 1000 > 75 )
				draw_sprite( conterUnity, number0Frame1, 0, 0 );
			else
				draw_sprite( conterUnity, number0Frame0, 0, 0 );
		}
		
	//dezena
		if( gameTime > 50000 )//numeros comecados com 0
		{
			if( gameTime > 50100 )
			{
				if( numberAnimation ) draw_sprite( conterDozen, number0Frame3, 0, 0 );
				else draw_sprite( conterDozen, number0RedFrame, 0, 0 );
			}
			else if( gameTime > 50075 )  draw_sprite( conterDozen, number0Frame2, 0, 0 );
			else if( gameTime > 50050 )  draw_sprite( conterDozen, number0Frame1, 0, 0 );
			else draw_sprite( conterDozen, number0Frame0, 0, 0 );
		}
		else if( gameTime > 40000 )//numeros comecados com 1
		{
			if( gameTime > 40100 ) draw_sprite( conterDozen, number1Frame3, 0, 0 );
			else if( gameTime > 40075 )  draw_sprite( conterDozen, number1Frame2, 0, 0 );
			else if( gameTime > 40050 )  draw_sprite( conterDozen, number1Frame1, 0, 0 );
			else draw_sprite( conterDozen, number1Frame0, 0, 0 );
		}
		else if( gameTime > 30000 )//numeros comecados com 2
		{
			if( gameTime > 30100 ) draw_sprite( conterDozen, number2Frame3, 0, 0 );
			else if( gameTime > 30075 )  draw_sprite( conterDozen, number2Frame2, 0, 0 );
			else if( gameTime > 30050 )  draw_sprite( conterDozen, number2Frame1, 0, 0 );
			else draw_sprite( conterDozen, number2Frame0, 0, 0 );
		}
		else if( gameTime > 20000 )//numeros comecados com 3
		{
			if( gameTime > 20100 ) draw_sprite( conterDozen, number3Frame3, 0, 0 );
			else if( gameTime > 20075 )  draw_sprite( conterDozen, number3Frame2, 0, 0 );
			else if( gameTime > 20050 )  draw_sprite( conterDozen, number3Frame1, 0, 0 );
			else draw_sprite( conterDozen, number3Frame0, 0, 0 );
		}
		else if( gameTime > 10000 )//numeros comecados com 4
		{
			if( gameTime > 10100 ) draw_sprite( conterDozen, number4Frame3, 0, 0 );
			else if( gameTime > 10075 )  draw_sprite( conterDozen, number4Frame2, 0, 0 );
			else if( gameTime > 10050 )  draw_sprite( conterDozen, number4Frame1, 0, 0 );
			else draw_sprite( conterDozen, number4Frame0, 0, 0 );
		}
		else if( gameTime > 0 )//numeros comecados com 5
		{
			if( gameTime > 100 ) draw_sprite( conterDozen, number5Frame3, 0, 0 );
			else if( gameTime > 75 )  draw_sprite( conterDozen, number5Frame2, 0, 0 );
			else if( gameTime > 50 )  draw_sprite( conterDozen, number5Frame1, 0, 0 );
			else draw_sprite( conterDozen, number5Frame0, 0, 0 );
		}
		else draw_sprite( conterDozen, number6Frame3, 0, 0 );
		
	}
	//tempo finalizado
	else
	{
		draw_sprite( conterUnity, number0RedFrame, 0, 0 );
		draw_sprite( conterDozen, number0RedFrame, 0, 0 );
	}
	
	//imprime no bitmap da interface os numeros
	draw_sprite( completeInterface, conterUnity, 572, 43);
	draw_sprite( completeInterface, conterDozen, 533, 43);
	
}END_OF_FUNCTION(BuildTimer);


/**
 *	Metodo responsavel por construir as barras de especial do personagem 1
 */
void Interface::BuildPlayer1SpecialBar( int especialQuantityP1, int especialBarP1 )
{
	if( especialQuantityP1 == 0 )
	{
		//imprime uma barra azul na interface
		rectfill( completeInterface, 85, 568, 85 + ( ( 220 * especialBarP1 ) / 100 ), 586, makecol(3,40,255) );
	}
	if( especialQuantityP1 == 1 )
	{
		//imprime uma barra azul na interface
		rectfill( completeInterface, 85, 568, 305, 586, makecol(3,40,255) );
		//imprime uma barra roxa na interface
		rectfill( completeInterface, 85, 568, 85 + ( ( 220 * especialBarP1 ) / 100 ), 586, makecol(145,12,200) );
	}
	if( especialQuantityP1 == 2 )
	{
		//imprime uma barra roxa na interface
		rectfill( completeInterface, 85, 568, 305, 586, makecol(3,40,255) );
		//imprime uma barra amarela na interface
		rectfill( completeInterface, 85, 568, 85 + ( ( 220 * especialBarP1 ) / 100 ), 586, makecol(255,242,0) );
	}
	if( especialQuantityP1 == 3 )
	{
		//imprime uma barra amarela na interface
		rectfill( completeInterface, 85, 568, 305, 586, makecol(255,242,0) );
		//imprime uma barra verde na interface
		rectfill( completeInterface, 85, 568, 85 + ( ( 220 * especialBarP1 ) / 100 ), 586, makecol(28,227,37) );
	}
	if( especialQuantityP1 == 4 )
	{
		//imprime uma barra verde na interface
		rectfill( completeInterface, 85, 568, 305, 586,  makecol(28,227,37) );
		//imprime uma barra laranja na interface
		rectfill( completeInterface, 85, 568, 85 + ( ( 220 * especialBarP1 ) / 100 ), 586, makecol(241,154,35) );
	}
}END_OF_FUNCTION(BuildPlayer1SpecialBar);


/**
 *	Metodo responsavel por construir as barras de especial do personagem 2
 */
void Interface::BuildPlayer2SpecialBar( int especialQuantityP2, int especialBarP2 )
{
	if( especialQuantityP2 == 0 )
	{
		//imprime uma barra azul na interface
		rectfill( completeInterface, 1056-((220*especialBarP2)/100), 568, 1056, 586, makecol(3,40,255) );
	}
	if( especialQuantityP2 == 1 )
	{
		//imprime uma barra azul na interface
		rectfill( completeInterface, 836, 568, 1056, 586, makecol(3,40,255) );
		
		//imprime uma barra roxa na interface
		rectfill( completeInterface, 1056-((220*especialBarP2)/100), 568, 1056, 586, makecol(145,12,200) );
	}
	if( especialQuantityP2 == 2 )
	{
		//imprime uma barra roxa na interface
		rectfill( completeInterface, 836, 568, 1056, 586, makecol(3,40,255) );
		//imprime uma barra amarela na interface
		rectfill( completeInterface, 1056-((220*especialBarP2)/100), 568, 1056, 586, makecol(255,242,0) );
	}
	if( especialQuantityP2 == 3 )
	{
		//imprime uma barra amarela na interface
		rectfill( completeInterface, 836, 568, 1056, 586, makecol(255,242,0) );
		//imprime uma barra verde na interface
		rectfill( completeInterface, 1056-((220*especialBarP2)/100), 568, 1056, 586, makecol(28,227,37) );
	}
	if( especialQuantityP2 == 4 )
	{
		//imprime uma barra verde na interface
		rectfill( completeInterface, 836, 568, 1056, 586,  makecol(28,227,37) );
		//imprime uma barra laranja na interface
		rectfill( completeInterface, 1056-((220*especialBarP2)/100), 568, 1056, 586, makecol(241,154,35) );
	}
}END_OF_FUNCTION(BuildPlayer2SpecialBar);


/**
 *	Metodo responsavel por construir a barra de tempo do pow do jogador 1
 */
void Interface::BuildPlayer1PowBar( int powTimeP1 )
{
	//limpa o bitmap
	clear( powBarPlayer1 );
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( powBarPlayer1, 0, 0, 147, 9, makecol(255,0,255) );
	//imprime a barra de pow no bitmap
	draw_sprite( powBarPlayer1, powBarP1, ((147*((powTimeP1*100)/15000))/100)-147, 0);
	//imprime no bitmap da interface a barra de pow
	draw_sprite( completeInterface, powBarPlayer1, 69, 552);
}END_OF_FUNCTION(BuildPlayer1PowBar);


/**
 *	Metodo responsavel por construir a barra de tempo do pow do jogador 2
 */
void Interface::BuildPlayer2PowBar( int powTimeP2 )
{
	//limpa o bitmap
	clear( powBarPlayer2 );
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( powBarPlayer2, 0, 0, 147, 9, makecol(255,0,255) );
	//imprime a barra de pow no bitmap
	draw_sprite( powBarPlayer2, powBarP2, 147-((147*((powTimeP2*100)/15000))/100), 0);
	//imprime no bitmap da interface a barra de pow
	draw_sprite( completeInterface, powBarPlayer2, 925, 552);
}END_OF_FUNCTION(BuildPlayer2PowBar);


/**
 *	Metodo responsavel por construir os numeros de especial do jogador 1
 */
void Interface::BuildPlayer1SpecialPoints( int especialQuantityP1 )
{
	//limpa o bitmap
	clear( specialNumberP1 );
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( specialNumberP1, 0, 0, 24, 53, makecol(255,0,255) );
	//imprime no bitmap a imagem do numero
	if( especialQuantityP1 == 0 ) draw_sprite( specialNumberP1, specialNumber0, 0, 0 );
	if( especialQuantityP1 == 1 ) draw_sprite( specialNumberP1, specialNumber1, 0, 0 );
	if( especialQuantityP1 == 2 ) draw_sprite( specialNumberP1, specialNumber2, 0, 0 );
	if( especialQuantityP1 == 3 ) draw_sprite( specialNumberP1, specialNumber3, 0, 0 );
	if( especialQuantityP1 == 4 ) draw_sprite( specialNumberP1, specialNumber4, 0, 0 );
	if( especialQuantityP1 == 5 ) draw_sprite( specialNumberP1, specialNumber5, 0, 0 );
	//imprime no bitmap da interface o numero 
	draw_sprite( completeInterface, specialNumberP1, 45, 551);
}END_OF_FUNCTION(BuildPlayer1SpecialPoints);


/**
 *	Metodo responsavel por construir os numeros de especial do jogador 2
 */
void Interface::BuildPlayer2SpecialPoints( int especialQuantityP2 )
{
	//limpa o bitmap
	clear( specialNumberP2 );
	//cobre tudo com o rosa que faz ficar trasnparente
	rectfill( specialNumberP2, 0, 0, 24, 53, makecol(255,0,255) );
	//imprime no bitmap a imagem do numero
	if( especialQuantityP2 == 0 ) draw_sprite( specialNumberP2, specialNumber0, 0, 0 );
	if( especialQuantityP2 == 1 ) draw_sprite( specialNumberP2, specialNumber1, 0, 0 );
	if( especialQuantityP2 == 2 ) draw_sprite( specialNumberP2, specialNumber2, 0, 0 );
	if( especialQuantityP2 == 3 ) draw_sprite( specialNumberP2, specialNumber3, 0, 0 );
	if( especialQuantityP2 == 4 ) draw_sprite( specialNumberP2, specialNumber4, 0, 0 );
	if( especialQuantityP2 == 5 ) draw_sprite( specialNumberP2, specialNumber5, 0, 0 );
	//imprime no bitmap da interface o numero 
	draw_sprite( completeInterface, specialNumberP2, 1072, 551);
}END_OF_FUNCTION(BuildPlayer2SpecialPoints);



















