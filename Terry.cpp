#include <allegro.h>
#include "Terry.h"


#define TEF 120					//tempo entre os frames
#define CHAO 80					//posição do chão

#define	WALKSPEED 7				//velocidade que o personagem vai andar VELANDAR
#define RUNSPEED 13				//velocidade que o personagem vai correr RUNSPEED
#define WEAKJUMPSTRENGTH 17		//força do pulo fraco
#define STRONGJUMPSTRENGTH 25	//força do pulo forte


//construtor
Terry::Terry(){ LoadSprites(); StartAttributes();}


//destrutor
Terry::~Terry(){}


//inicializando valores
void Terry::StartAttributes()
{
	
	SetIdle( 0, 0 );
	SetIdle( 7, 1 );
	SetCrouching( 8, 0 );
	SetCrouching( 9, 1 );
	SetCrouchedIdle( 10, 0 );
	SetCrouchedIdle( 17, 1 );
	SetWalk( 18, 0 );
	SetWalk( 26, 1 );
	SetWalkBack( 27, 0 );
	SetWalkBack( 35, 1 );
	SetRising( 36, 0 );
	SetRising( 36, 1 );
	SetEndOfClimp( 37, 0 );
	SetEndOfClimp( 38, 1 );
	SetFalling( 39, 0 );
	SetFalling( 40, 1 );
	SetFall( 41, 0 );
	SetFall( 43, 1 );
	SetStrongFrontalDJ( 44, 0 );
	SetStrongFrontalDJ( 52, 1 );
	SetStrongBackDJ( 53, 0 );
	SetStrongBackDJ( 60, 1 );
	SetRun( 61, 0 );
	SetRun( 69, 1 );
	SetJumpBack( 70, 0 );
	SetJumpBack( 72, 1 );
	SetJumpBackFall( 73, 0 );
	SetJumpBackFall( 74, 1 );
	SetDefending( 75, 0 );
	SetDefending( 77, 1 );
	SetDefence( 78, 0 );
	SetDefence( 78, 1 );
	SetTakingDamage( 79, 0 );
	SetTakingDamage( 84, 1 );
	SetDefendExit( 75, 0 );
	SetDefendExit( 77, 1 );
	SetDefendingCrouched( 85, 0 );
	SetDefendingCrouched( 87, 1 );
	SetDefenceCrouched( 88, 0 );
	SetDefenceCrouched( 88, 1 );
	SetTakingDamageCrouched( 89, 0 );
	SetTakingDamageCrouched( 94, 1 );
	SetDefendExitCrouched( 85, 0 );
	SetDefendExitCrouched( 87, 1 );
	SetFrontRolling( 95, 0 );
	SetFrontRolling( 100, 1 );
	SetBackRolling( 101, 0 );
	SetBackRolling( 106, 1 );
	SetSlide( 107, 0 );
	SetSlide( 110, 1 );
	SetFrontRollingEnd( 111, 0 );
	SetFrontRollingEnd( 117, 1 );
	SetBackRollingEnd( 118, 0 );
	SetBackRollingEnd( 126, 1 );
	SetChangeSide( 127, 0 );
	SetChangeSide( 128, 1 );
	SetChangeSideCrouched( 129, 0 );
	SetChangeSideCrouched( 130, 1 );
	
}END_OF_FUNCTION(StartAttributes);


/**
 * função para ser chamada na rotina principal do alegro
 */
void Terry::Routine()
{
	//rotina da classe player
	PlayerRoutine();
	
	//controle das animações do personagem
	TerryAnimations();
	
}END_OF_FUNCTION(PlayerRoutine)











