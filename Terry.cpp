#include <allegro.h>
#include "Terry.h"


#define TEF 120					//tempo entre os frames
#define CHAO 80					//posição do chão

#define	WALKSPEED 7				//velocidade que o personagem vai andar VELANDAR
#define RUNSPEED 13				//velocidade que o personagem vai correr RUNSPEED
#define WEAKJUMPSTRENGTH 17		//força do pulo fraco
#define STRONGJUMPSTRENGTH 25	//força do pulo forte


//construtor
Terry::Terry( int playerNumber ):Player( playerNumber )
{ LoadSprites(); StartAttributes(); }


//destrutor
Terry::~Terry(){}


//inicializando valores
void Terry::StartAttributes()
{
	
	SetLifePoints( 1000 );
	SetLifePointsMax( 1000 );
	
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
	SetWeakPunch( 131, 0 );
	SetWeakPunch( 136, 1 );
	SetStrongPunch( 137, 0 );
	SetStrongPunch( 144, 1 );
	SetWeakKick( 145, 0 );
	SetWeakKick( 153, 1 );
	SetStrongKick( 154, 0 );
	SetStrongKick( 159, 1 );
	SetStrongKickEnd( 160, 0 );
	SetStrongKickEnd( 163, 1 );
	SetCrouchedWeakPunch( 164, 0 );
	SetCrouchedWeakPunch( 169, 1 );
	SetCrouchedStrongPunch( 170, 0 );
	SetCrouchedStrongPunch( 177, 1 );
	SetCrouchedWeakKick( 178, 0 );
	SetCrouchedWeakKick( 184, 1 );
	SetCrouchedStrongKick( 185, 0 );
	SetCrouchedStrongKick( 193, 1 );
	SetJumpingWeakPunch( 194, 0 );
	SetJumpingWeakPunch( 199, 1 );
	SetJumpingStrongPunch( 200, 0 );
	SetJumpingStrongPunch( 207, 1 );
	SetJumpingWeakKick( 208, 0 );
	SetJumpingWeakKick( 214, 1 );
	SetJumpingStrongKick( 215, 0 );
	SetJumpingStrongKick( 222, 1 );
	SetGluedStrongPunch( 223, 0 );
	SetGluedStrongPunch( 230, 1 );
	SetGluedStrongKick( 231, 0 );
	SetGluedStrongKick( 237, 1 );
	SetJumpingSpecialAttack( 236, 0 );
	SetJumpingSpecialAttack( 246, 1 );
	SetWeakPunchForward( 247, 0 );
	SetWeakPunchForward( 261, 1 );
	
}END_OF_FUNCTION(StartAttributes);


/**
 * Metodo que faz toda a rotina para movimentação do personagem
 */
BITMAP* Terry::GetPlayerSprite( int enemyX, int enemyY, bool gamePause, bool gameStart, bool enemyAttacking, bool takingDmg, bool flipCharacter )
{
	if( !gamePause )
	{
		//rotina da classe player
		if( gameStart ) PlayerRoutine( flipCharacter );
		
		//controle das animações do personagem
		TerryAnimations();
	}
	
	if( GetToRight() ) 
		return GetSprites( 0, GetFrame() );
	else 
		return GetSprites( 1, GetFrame() );
	
}END_OF_FUNCTION(GetPlayerSprite);






