#ifndef INCLUDES_H
#define INCLUDES_H

//include do allegro
#include <allegro.h>

#define	WALKSPEED 5				//velocidade que o personagem vai andar VELANDAR
#define RUNSPEED 10				//velocidade que o personagem vai correr RUNSPEED
#define WEAKJUMPSTRENGTH 17		//for�a do pulo fraco
#define STRONGJUMPSTRENGTH 22	//for�a do pulo forte

#define MINSCENARYWIDTH -220	//posi��o do fim do cenario a esquerda
#define MAXSCENARYWIDTH 800	  	//posi��o do fim do cenario a direita

#define QTDFRAMES 271			//quantidade de frames que os personagem tem

#define TEF 120					//tempo entre os frames

#define GRAVIDADE 0.7			//gravidade global

#define CHAO 260				//posi��o do ch�o

#define COMPLETERENDER false		//modo debug

//posi��es iniciais dos players
#define P1XSTARTPOS -50			//posi��o em X de onde o player 1 deve iniciaro jogo
#define P2XSTARTPOS 623			//posi��o em X de onde o player 2 deve iniciaro jogo

//posi��es da interface
#define LIFEBARINTERFACEX 105	//posi��o em X da interface de vida
#define LIFEBARINTERFACEY 48	//posi��o em Y da interface de vida
#define TIMERDOZENX 572			//posi��o em X da dezena do timer
#define TIMERDOZENY 43			//posi��o em Y da dezena do timer
#define TIMERUNITYX 533			//posi��o em X da unidade do timer
#define TIMERUNITYY 43			//posi��o em Y da unidade do timer
//player 1
#define LIFEBARP1X 112			//posi��o em X da barra de vida do personagem 1
#define LIFEBARP1Y 55			//posi��o em Y da barra de vida do personagem 1
#define SHILDBARP1X 331			//posi��o em X da barra de escudo do personagem 1
#define SHILDBARP1Y 81			//posi��o em Y da barra de escudo do personagem 1
//player 2
#define LIFEBARP2X 626			//posi��o em X da barra de vida do personagem 2
#define LIFEBARP2Y 55			//posi��o em Y da barra de vida do personagem 2
#define SHILDBARP2X 644			//posi��o em X da barra de escudo do personagem 2
#define SHILDBARP2Y 81			//posi��o em Y da barra de escudo do personagem 2
//frame dos personagens
#define FRAMEP1X 0				//posi��o em X do frame do player 1
#define FRAMEP1Y 0				//posi��o em Y do frame do player 1
#define FRAMEP2X 968			//posi��o em X do frame do player 2
#define FRAMEP2Y 0				//posi��o em Y do frame do player 2
//especial player 1
#define SPECIALINTERFACEP1X 21	//posi��o em X da interface de especial do player 1
#define SPECIALINTERFACEP1Y 541	//posi��o em Y da interface de especial do player 1
#define SPECIALBARP1X 85		//posi��o em X da barra de especial do personagem 1
#define SPECIALBARP1Y 567		//posi��o em Y da barra de especial do personagem 1
#define SPECIALNUMBERP1X 45		//posi��o em X da quantidade de especiais do personagem 1
#define SPECIALNUMBERP1Y 551	//posi��o em Y da quantidade de especiais do personagem 1
#define POWBARP1X 69			//posi��o em X da barra de pow do player 1
#define POWBARP1Y 552			//posi��o em Y da barra de pow do player 1
//especial player 2
#define SPECIALINTERFACEP2X 829	//posi��o em X da interface de especial do player 2
#define SPECIALINTERFACEP2Y 541	//posi��o em Y da interface de especial do player 2
#define SPECIALBARP2X 836		//posi��o em X da barra de especial do personagem 2
#define SPECIALBARP2Y 567		//posi��o em Y da barra de especial do personagem 2
#define SPECIALNUMBERP2X 1072	//posi��o em X da quantidade de especiais do personagem 2
#define SPECIALNUMBERP2Y 551	//posi��o em Y da quantidade de especiais do personagem 2
#define POWBARP2X 925			//posi��o em X da barra de pow do player 2
#define POWBARP2Y 552			//posi��o em Y da barra de pow do player 2

//tamanho das barras
#define LIFEBARSIZEX 401		//tamanho em X da barra de vida
#define LIFEBARSIZEY 19			//tamanho em Y da barra de vida
#define SHILDBARSIZEX 164		//tamanho em X da barra de escudo
#define SHILDBARSIZEY 15		//tamanho em Y da barra de escudo
#define SPECIALBARSIZEX 220		//tamanho em X da barra de especial
#define SPECIALBARSIZEY 20		//tamanho em Y da barra de especial
#define POWBARSIZEX 147			//tamanho em X da barra de especial
#define POWBARSIZEY 9			//tamanho em Y da barra de especial

//posi��o dos textos de inicio e de termino do combate
	//posi��o dos textos
#define DRAWGAMEX 473			//posi��o em X do texto draw game
#define DRAWGAMEY 258			//posi��o em Y do texto draw game
#define TIMEOVERX 481			//posi��o em X do texto time over
#define TIMEOVERY 255			//posi��o em Y do texto time over
#define WINNERP1X 10			//posi��o em X do texto winner
#define WINNERP1Y 160			//posi��o em Y do texto winner
#define WINNERP2X 854			//posi��o em X do texto winner
#define WINNERP2Y 160			//posi��o em Y do texto winner
#define READYX 469				//posi��o em X do texto ready
#define READYY 285				//posi��o em Y do texto ready
#define ROUNDX 437				//posi��o em X do texto round
#define ROUNDY 285				//posi��o em Y do texto round

#define GSTARTX -94				//posi��o em X inicial da letra G
#define GENDX 472				//posi��o em X final da letra G
#define OSTARTX 1140			//posi��o em X inicial da letra O
#define OENDX 574				//posi��o em X final da letra O
#define GOY 250					//posi��o em Y do texto Go

	//posi��o dos numeros do texto Round 
#define ROUNDNUMBER1X 649		//posi��o em X do numero 1
#define ROUNDNUMBER1Y 235		//posi��o em Y do numero 1
#define ROUNDNUMBER2X 659		//posi��o em X do numero 2
#define ROUNDNUMBER2Y 228		//posi��o em Y do numero 2
#define ROUNDNUMBER3X 637		//posi��o em X do numero 3
#define ROUNDNUMBER3Y 218		//posi��o em Y do numero 3
#define ROUNDNUMBER4X 656		//posi��o em X do numero 4
#define ROUNDNUMBER4Y 228		//posi��o em Y do numero 4
#define ROUNDNUMBER5X 659		//posi��o em X do numero 5
#define ROUNDNUMBER5Y 221		//posi��o em Y do numero 5

#endif//INCLUDES_H
















