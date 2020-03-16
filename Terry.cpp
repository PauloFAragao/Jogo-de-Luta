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


void Terry::StartAttributes()
{
	
	SetIdle( 0, 0 );
	SetIdle( 7, 1 );
	SetCrouching( 40, 0 );
	SetCrouching( 41, 1 );
	SetCrouchedIdle( 68, 0 );
	SetCrouchedIdle( 73, 1 );
	SetWalk( 8, 0 );
	SetWalk( 16, 1 );
	SetWalkBack( 17, 0 );
	SetWalkBack( 25, 1 );
	SetRising( 42, 0 );
	SetRising( 42, 1 );
	SetEndOfClimp( 43, 0 );
	SetEndOfClimp( 44, 1 );
	SetFalling( 45, 0 );
	SetFalling( 46, 1 );
	SetFall( 47, 0 );
	SetFall( 50, 1 );
	SetStrongFrontalDJ( 51, 0 );
	SetStrongFrontalDJ( 59, 1 );
	SetStrongBackDJ( 60, 0 );
	SetStrongBackDJ( 67, 1 );
	SetRun( 27, 0 );
	SetRun( 34, 1 );
	SetJumpBack( 35, 0 );
	SetJumpBack( 37, 1 );
	SetJumpBackFall( 38, 0 );
	SetJumpBackFall( 39, 1 );
	SetDefending( 78, 0 );
	SetDefending( 81, 1 );
	SetDefence( 82, 0 );
	SetDefence( 82, 1 );
	SetTakingDamage( 114, 0 );
	SetTakingDamage( 118, 1 );
	SetDefendExit( 79, 0 );
	SetDefendExit( 81, 1 );
	SetDefendingCrouched( 83, 0 );
	SetDefendingCrouched( 86, 1 );
	SetDefenceCrouched( 87, 0 );
	SetDefenceCrouched( 87, 1 );
	SetTakingDamageCrouched( 119, 0 );
	SetTakingDamageCrouched( 123, 1 );
	SetDefendExitCrouched( 84, 0 );
	SetDefendExitCrouched( 85, 1 );
	SetFrontRolling( 88, 0 );
	SetFrontRolling( 93, 1 );
	SetBackRolling( 100, 0 );
	SetBackRolling( 105, 1 );
	SetSlide( 74, 0 );
	SetSlide( 77, 1 );
	SetFrontRollingEnd( 94, 0 );
	SetFrontRollingEnd( 99, 1 );
	SetBackRollingEnd( 106, 0 );
	SetBackRollingEnd( 113, 1 );
	
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











