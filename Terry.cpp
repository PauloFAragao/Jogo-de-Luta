#include "includes.h"
#include "Terry.h"

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
	SetIdle( 8, 1 );
	SetCrouching( 9, 0 );
	SetCrouching( 10, 1 );
	SetCrouchedIdle( 11, 0 );
	SetCrouchedIdle( 16, 1 );
	SetWalk( 17, 0 );
	SetWalk( 25, 1 );
	SetWalkBack( 26, 0 );
	SetWalkBack( 34, 1 );
	SetRising( 35, 0 );
	SetRising( 35, 1 );
	SetEndOfClimp( 36, 0 );
	SetEndOfClimp( 37, 1 );
	SetFalling( 38, 0 );
	SetFalling( 39, 1 );
	SetFall( 40, 0 );
	SetFall( 42, 1 );
	SetStrongFrontalDJ( 43, 0 );
	SetStrongFrontalDJ( 51, 1 );
	SetStrongBackDJ( 52, 0 );
	SetStrongBackDJ( 59, 1 );
	SetRun( 60, 0 );
	SetRun( 68, 1 );
	SetJumpBack( 69, 0 );
	SetJumpBack( 71, 1 );
	SetJumpBackFall( 72, 0 );
	SetJumpBackFall( 73, 1 );
	SetDefending( 74, 0 );
	SetDefending( 76, 1 );
	SetDefence( 77, 0 );
	SetDefence( 77, 1 );
	SetTakingDamage( 78, 0 );
	SetTakingDamage( 83, 1 );
	SetDefendExit( 74, 0 );
	SetDefendExit( 76, 1 );
	SetDefendingCrouched( 84, 0 );
	SetDefendingCrouched( 86, 1 );
	SetDefenceCrouched( 87, 0 );
	SetDefenceCrouched( 87, 1 );
	SetTakingDamageCrouched( 88, 0 );
	SetTakingDamageCrouched( 93, 1 );
	SetDefendExitCrouched( 84, 0 );
	SetDefendExitCrouched( 86, 1 );
	SetFrontRolling( 94, 0 );
	SetFrontRolling( 99, 1 );
	SetBackRolling( 100, 0 );
	SetBackRolling( 105, 1 );
	SetSlide( 106, 0 );
	SetSlide( 109, 1 );
	SetFrontRollingEnd( 110, 0 );
	SetFrontRollingEnd( 116, 1 );
	SetBackRollingEnd( 117, 0 );
	SetBackRollingEnd( 125, 1 );
	SetChangeSide( 126, 0 );
	SetChangeSide( 127, 1 );
	SetChangeSideCrouched( 128, 0 );
	SetChangeSideCrouched( 129, 1 );
	SetWeakPunch( 130, 0 );
	SetWeakPunch( 135, 1 );
	SetStrongPunch( 136, 0 );
	SetStrongPunch( 143, 1 );
	SetWeakKick( 144, 0 );
	SetWeakKick( 152, 1 );
	SetStrongKick( 153, 0 );
	SetStrongKick( 158, 1 );
	SetStrongKickEnd( 159, 0 );
	SetStrongKickEnd( 162, 1 );
	SetCrouchedWeakPunch( 163, 0 );
	SetCrouchedWeakPunch( 168, 1 );
	SetCrouchedStrongPunch( 169, 0 );
	SetCrouchedStrongPunch( 176, 1 );
	SetCrouchedWeakKick( 177, 0 );
	SetCrouchedWeakKick( 183, 1 );
	SetCrouchedStrongKick( 184, 0 );
	SetCrouchedStrongKick( 192, 1 );
	SetJumpingWeakPunch( 193, 0 );
	SetJumpingWeakPunch( 198, 1 );
	SetJumpingStrongPunch( 199, 0 );
	SetJumpingStrongPunch( 206, 1 );
	SetJumpingWeakKick( 207, 0 );
	SetJumpingWeakKick( 213, 1 );
	SetJumpingStrongKick( 214, 0 );
	SetJumpingStrongKick( 221, 1 );
	SetGluedStrongPunch( 222, 0 );
	SetGluedStrongPunch( 229, 1 );
	SetGluedStrongKick( 230, 0 );
	SetGluedStrongKick( 236, 1 );
	SetSpecialAttackStart( 261, 0 );
	SetSpecialAttackStart( 263, 1 );
	SetJumpingSpecialAttack( 237, 0 );
	SetJumpingSpecialAttack( 245, 1 );
	SetWeakPunchForward( 246, 0 );
	SetWeakPunchForward( 260, 1 );
	SetSpecialAttack( 264, 0 );
	SetSpecialAttack( 270, 1 );
	
}END_OF_FUNCTION(StartAttributes);


/**
 * Metodo que faz toda a rotina para movimentação do personagem
 */
BITMAP* Terry::GetPlayerSprite( int opponentX, int opponentY, bool gamePause, bool gameStart, bool opponentAttacking, bool takingDmg, bool flipCharacter )
{
	if( !gamePause )
	{
		//rotina da classe player
		if( gameStart ) PlayerRoutine( flipCharacter, opponentX, opponentY, opponentAttacking);
		
		//controle das animações do personagem
		TerryAnimations();
	}
	
	if( GetToRight() ) 
		return GetSprites( 0, GetFrame() );
	else 
		return GetSprites( 1, GetFrame() );
	
}END_OF_FUNCTION(GetPlayerSprite);






