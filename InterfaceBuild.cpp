#include <allegro.h>
#include "Interface.h"


/**
 *	Metodo responsavel por construir a interface do jogo
 */
void Interface::BuildInterface()
{
	clear( completeInterface );//limpa a imterface
	rectfill( completeInterface, 0, 0, SCREEN_W, SCREEN_H, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	
	//frame dos personagens
	draw_sprite( completeInterface, framePlayer1, 0, 0 );
	draw_sprite( completeInterface, framePlayer2, 968, 0 );

	BuildPlayer1LifeBar();	//barra de vida do personagem 1
	BuildPlayer2LifeBar();	//barra de vida do personagem2
	BuildPlayer1ShildBar();	//barra de escudo do personagem 1
	BuildPlayer2ShildBar();	//barra de escudo do personagem 1
	BuildTimer();			//contador de tempo
	
	//interface de barras de vida
	draw_sprite( completeInterface, lifeBarsInterface, 105, 48 );
	
	
//especial do player 1
	//barras de especial do 0 ao 4
	if ( especialQuantityP1 >= 0 && especialQuantityP1 < 5 ) BuildPlayer1SpecialBar();
	
	if( powP1 )
	{
		BuildPlayer1PowBar();
		draw_sprite( completeInterface, specialInterface2Player1, 21, 541 );//interface de especial para pow ativo
	}
	else draw_sprite(completeInterface, specialInterface1Player1, 21, 541 );//interface de especial
	
	//barra de especial no nivel 5
	if ( especialQuantityP1 == 5 )
		 draw_sprite( completeInterface, maximumSpecialBarP1, 85, 567 );

	//imprime o numero de barras de especial na interface
	BuildPlayer1SpecialPoints();
	
//especial do player 2
	//barras de especial do 0 ao 4
	if ( especialQuantityP2 >= 0 && especialQuantityP2 < 5 ) BuildPlayer2SpecialBar();
	
	if( powP2 )
	{
		BuildPlayer2PowBar();
		draw_sprite( completeInterface, specialInterface2Player2, 829, 541 );//interface de especial para pow ativo
	}
	else draw_sprite(completeInterface, specialInterface1Player2, 829, 541 );//interface de especial
	
	//barra de especial no nivel 5
	if( especialQuantityP2 == 5 ) 
		draw_sprite( completeInterface, maximumSpecialBarP2, 836, 567 );
	
	BuildPlayer2SpecialPoints();
}END_OF_FUNCTION(BuildInterface);


/**
 *	Metodo responsavel por construir a barra de vida do personagem 1
 */
void Interface::BuildPlayer1LifeBar()
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
void Interface::BuildPlayer2LifeBar()
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
void Interface::BuildPlayer1ShildBar()
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
void Interface::BuildPlayer2ShildBar()
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
void Interface::BuildTimer()
{
	
	clear( conterDozen );//limpa o bitmap
	rectfill( conterDozen, 0, 0, 35, 65, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	
	draw_sprite( conterDozen, number3Frame3, 0, 0 );
	
	
	clear( conterUnity );//limpa o bitmap
	rectfill( conterUnity, 0, 0, 35, 65, makecol(255,0,255) );//cobre tudo com o rosa que faz ficar trasnparente
	
	draw_sprite( conterUnity, number5Frame3, 0, 0 );
	
	
	draw_sprite( completeInterface, conterUnity, 572, 43);
	draw_sprite( completeInterface, conterDozen, 533, 43);
}END_OF_FUNCTION(BuildTimer);


/**
 *	Metodo responsavel por construir as barras de especial do personagem 1
 */
void Interface::BuildPlayer1SpecialBar()
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
void Interface::BuildPlayer2SpecialBar()
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
void Interface::BuildPlayer1PowBar()
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
void Interface::BuildPlayer2PowBar()
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
void Interface::BuildPlayer1SpecialPoints()
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
void Interface::BuildPlayer2SpecialPoints()
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



















