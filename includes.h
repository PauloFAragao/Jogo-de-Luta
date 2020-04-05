#ifndef INCLUDES_H
#define INCLUDES_H

//include do allegro
#include <allegro.h>

#define	WALKSPEED 5				//velocidade que o personagem vai andar VELANDAR
#define RUNSPEED 10				//velocidade que o personagem vai correr RUNSPEED
#define WEAKJUMPSTRENGTH 17		//força do pulo fraco
#define STRONGJUMPSTRENGTH 22	//força do pulo forte

#define MINSCENARYWIDTH -220	//posição do fim do cenario a esquerda
#define MAXSCENARYWIDTH 800	  	//posição do fim do cenario a direita

#define QTDFRAMES 271			//quantidade de frames que os personagem tem

#define TEF 120					//tempo entre os frames

#define GRAVIDADE 0.7			//gravidade global

#define CHAO 260				//posição do chão

#define COMPLETERENDER true		//modo debug

//posições iniciais dos players
#define P1XSTARTPOS -50			//posição em X de onde o player 1 deve iniciaro jogo
#define P2XSTARTPOS 623			//posição em X de onde o player 2 deve iniciaro jogo

//posições da interface
#define LIFEBARINTERFACEX 0		//posição em X da interface de vida
#define LIFEBARINTERFACEY 0		//posição em Y da interface de vida
#define FRAMEP1X 0				//posição em X do frame do player 1
#define FRAMEP1Y 0				//posição em Y do frame do player 1
#define FRAMEP2X 0				//posição em X do frame do player 2
#define FRAMEP2Y 0				//posição em Y do frame do player 2
#define LIFEBARP1X 0			//posição em X da barra de vida do personagem 1
#define LIFEBARP1Y 0			//posição em Y da barra de vida do personagem 1
#define LIFEBARP2X 0			//posição em X da barra de vida do personagem 2
#define LIFEBARP2Y 0			//posição em Y da barra de vida do personagem 2
#define SHILDBARP1X 0			//posição em X da barra de escudo do personagem 1
#define SHILDBARP1Y 0			//posição em Y da barra de escudo do personagem 1
#define SHILDBARP2X 0			//posição em X da barra de escudo do personagem 2
#define SHILDBARP2Y 0			//posição em Y da barra de escudo do personagem 2
//especial player 1
#define SPECIALINTERFACEP1X 0	//posição em X da interface de especial do player 1
#define SPECIALINTERFACEP1Y 0	//posição em Y da interface de especial do player 1
#define SPECIALBARP1X 0			//posição em X da barra de especial do personagem 1
#define SPECIALBARP1Y 0			//posição em Y da barra de especial do personagem 1
#define SPECIALNUMBERP1X 0		//posição em X da quantidade de especiais do personagem 1
#define SPECIALNUMBERP1Y 0		//posição em Y da quantidade de especiais do personagem 1
#define POWBARP1X 0				//posição em X da barra de pow do player 1
#define POWBARP1Y 0				//posição em Y da barra de pow do player 1
//especial player 2
#define SPECIALINTERFACEP2X 0	//posição em X da interface de especial do player 2
#define SPECIALINTERFACEP2Y 0	//posição em Y da interface de especial do player 2
#define SPECIALBARP2X 0			//posição em X da barra de especial do personagem 2
#define SPECIALBARP2Y 0			//posição em Y da barra de especial do personagem 2
#define SPECIALNUMBERP2X 0		//posição em X da quantidade de especiais do personagem 2
#define SPECIALNUMBERP2Y 0		//posição em Y da quantidade de especiais do personagem 2
#define POWBARP2X 0				//posição em X da barra de pow do player 2
#define POWBARP2Y 0				//posição em Y da barra de pow do player 2

//tamanho das barras
#define LIFEBARSIZEX 0			//tamanho em X da barra de vida
#define LIFEBARSIZEY 0			//tamanho em Y da barra de vida
#define SHILDBARSIZEX 0			//tamanho em X da barra de escudo
#define SHILDBARSIZEY 0			//tamanho em Y da barra de escudo
#define SPECIALBARSIZEX 0		//tamanho em X da barra de especial
#define SPECIALBARSIZEY 0		//tamanho em Y da barra de especial
#define POWBARSIZEX 0			//tamanho em X da barra de especial
#define POWBARSIZEY 0			//tamanho em Y da barra de especial

#endif//INCLUDES_H
















