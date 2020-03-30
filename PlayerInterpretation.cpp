#include <allegro.h>
#include "Player.h"

#define TEF 120
#define CHAO 160
#define	WALKSPEED 5


/**
 *	Esse metodo é responsavel por imterpetar as ações: walk-20, walkBack-30 e run-100
 */
void Player::InterpretationWalkWalkBackRun()
{
	if( speedX == 0 && VerifyFrame( 0 ) && ( action == 20 || action == 30 || action == 100 || action == 101 )  )
		ChangeAction(0);
	if( action == 100 && speedX != 0 )
	{
		if( toRight && !button02 )
		{
			ChangeAction(101);
		}
		else if( !toRight && !button00 )
		{
			ChangeAction(101);
		}
	}
}END_OF_FUNCTION(InterpretationWalkWalkBackRun);


/**
 *	Esse metodo é responsavel por imterpetar a ação: jumpBack-110/111
 */

void Player::InterpretationJumpBack()
{
	if( action == 110 && y >= CHAO )//animação do personagem pulando para tras em quando está no ar
	{
		ChangeAction(111);
	}
	if( action == 111 && clock() - capturaTempo > TEF )//animação do personagem caindo no chão e se recuperando da queda
	{
		//continua antando para tras
		if( button00 && toRight )
		{
			speedX = -WALKSPEED;
			ChangeAction(30);
		}
		if( button02 && !toRight )
		{
			speedX = WALKSPEED;
			ChangeAction(30);
		}
		
		//o personagem parou de andar para tras
		if( speedX == 0 )
		{
			ChangeAction(0);
		}
	}
}END_OF_FUNCTION(InterpretationJumpBack);


/**
 *	Esse metodo é responsavel por imterpetar as ações: (jump) endOfClimp-42/52/62/82, falling-43/53/63/83, fall-44/54/64/84
 */
void Player::InterpretationJump()
{
	//muda de rising para endOfClimp
	if( action == 41 && speedY > - 3 ) ChangeAction( 42 );
	if( action == 51 && speedY > - 3 ) ChangeAction( 52 );
	if( action == 61 && speedY > - 3 ) ChangeAction( 62 );
	if( action == 81 && speedY > - 3 ) ChangeAction( 82 );
	//muda de endOfClimp para falling
	if( action == 42 && speedY > 5 ) ChangeAction( 43 );
	if( action == 52 && speedY > 5 ) ChangeAction( 53 );
	if( action == 62 && speedY > 5 ) ChangeAction( 63 );
	if( action == 82 && speedY > 5 ) ChangeAction( 83 );
	//muda de falling para fall
	if( action == 43 && y >= CHAO ) { ChangeAction( 44 ); speedX = 0; }
	if( action == 53 && y >= CHAO ) { ChangeAction( 54 ); speedX = 0; }
	if( action == 63 && y >= CHAO ) { ChangeAction( 64 ); speedX = 0; }
	if( action == 83 && y >= CHAO ) { ChangeAction( 84 ); speedX = 0; }
	//muda de fall para idle
	if( action == 44 || action == 54 || action == 64 || action == 84 )
	{
		//aqui a animação deve ser completamente executada e depois mudar para a animação idle
		if( frame == fall[1] && clock() - capturaTempo > TEF  )
		{
			ChangeAction(0);
		}
	}
}END_OF_FUNCTION(InterpretationJump);


/**
 *	Esse metodo é responsavel por imterpetar as ações: (Strong Diagonal Jump) strongFrontalDiagonalJump-71, strongBackDiagonalJump-91
 */
void Player::InterpretationStrongDiagonalJump()
{
//strongFrontalDiagonalJump
	if( action == 71 )
	{
		//essa animação deve rodar até o ultimo frame e entao mudar para a animação falling
		if( frame == strongFrontalDJ[1] && clock() - capturaTempo > TEF )
		{
			ChangeAction(43);
		}
	}
//strongBackDiagonalJump
	if( action == 91 )
	{
		//essa animação deve rodar até o ultimo frame e entao mudar para a animação falling
		if( frame == strongBackDJ[1] && clock() - capturaTempo > TEF )
		{
			ChangeAction(43);
		}
	}
}END_OF_FUNCTION(InterpretationStrongDiagonalJump);


/**
 *	Esse metodo é responsavel por imterpetar as ações: (crouched) crouching-10, crouchedIdle-11, crouchedIdle-12
 */
void Player::InterpretationCrouch()
{
	if( button01 && ValidateAction( 10 ) )//crouching
	{
		ChangeAction( 10 );
	}
	if( button01 && action == 10 && frame == crouching[1] && clock() - capturaTempo > TEF )//crouchedIdle
	{
		ChangeAction( 11 );
	}
	if( !button01 && ( action == 10 || action == 11 ) )//raiseCrouched
	{
		ChangeAction( 12 );
	}
	if( !button01 && action == 12 && frame == crouching[0] && clock() - capturaTempo > TEF )//idle
	{
		ChangeAction( 0 );
	}
}END_OF_FUNCTION(InterpretationCrouch);


/**
 *	Esse metodo é responsavel por imterpetar as ações: (defence) Defending-120/130, Defence-121/131, Taking Damage-122/132, Defend Exit-123/133
 */
void Player::InterpretationDefence()
{
//defence
	if( action == 120 && opponentAttacking && frame == defending[1] && clock() - capturaTempo > TEF )//animação que inicia a defesa
	{
		if( toRight && button00  ) ChangeAction(121);
		if( !toRight && button01 ) ChangeAction(121);
	}
	if( takingDmg && ( action == 120 || action == 121 ) )//animação de sofrendo dano
	{
		ChangeAction(122);
	}
	if( action == 122 && frame == takingDamage[1] && clock() - capturaTempo > TEF )//animação de defesa
	{
		takingDmg = false;
		if( toRight && button00  ) ChangeAction(121);
		if( !toRight && button02 ) ChangeAction(121);
	}
	if( ( action == 120 || action == 121 || action == 122 ) && ( ( !button00 && toRight ) || ( !button02 && !toRight ) || !opponentAttacking) )//animação de saida da defesa
	{
		ChangeAction(123);
	}

	if( action == 123 && frame == defendExit[0] && clock() - capturaTempo > TEF )//voltando para idle
	{
		ChangeAction(0);
	}
	
//Defence Crouched
	if( action == 130 && opponentAttacking && frame == defendingCrouched[1] && clock() - capturaTempo > TEF )//animação que inicia a defesa
	{
		if( toRight && button00  ) ChangeAction(131);
		if( !toRight && button01 ) ChangeAction(131);
	}
	if( takingDmg && ( action == 130 || action == 131 ) )//animação de sofrendo dano
	{
		ChangeAction(132);
	}
	if( action == 132 && frame == takingDamageCrouched[1] && clock() - capturaTempo > TEF )//animação de defesa
	{
		takingDmg = false;
		if( toRight && button00  ) ChangeAction(131);
		if( !toRight && button02 ) ChangeAction(131);
	}
	if( ( action == 130 || action == 131  || action == 132 ) && ( ( !button00 && toRight ) || ( !button02 && !toRight ) || !opponentAttacking) )//animação de saida da defesa
	{
		ChangeAction(133);
	}
	if( action == 133 && frame == defendExitCrouched[0] && clock() - capturaTempo > TEF )//voltando para idle
	{
		ChangeAction(11);
	}
}END_OF_FUNCTION(InterpretationDefence);


/**
 *	Esse metodo é responsavel por imterpetar as ações: (rolling) Front Rolling-140, Front Rolling End-141, Back Rolling-150, Back Rolling End-151
 */
void Player::InterpretationRolling()
{
//rolamento para frente
	if( action == 140 && frame == frontRolling[1] && clock() - capturaTempo > TEF-60 )
	{
		ChangeAction(141);
	}
	if( action == 141 && frame == frontRollingEnd[1] && clock() - capturaTempo > TEF-60 )
	{
		ChangeAction(0);
	}
	
//rolamento para tras
	if( action == 150 && frame == backRolling[1] && clock() - capturaTempo > TEF-60 )
	{
		ChangeAction(151);
	}
	if( action == 151 && frame == backRollingEnd[1] && clock() - capturaTempo > TEF-60 )
	{
		ChangeAction(0);
	}
}END_OF_FUNCTION(InterpretationRolling);


/**
 *	Esse metodo é responsavel por imterpetar as ações: (Change Side)
 */
void Player::InterpretationChangeSide( bool flipCharacter )
{
//personagem em pé
	if( !button01 && flipCharacter )
	{
		if( ValidateAction(160) )
		{
			ChangeAction(160);
		}
	}
	if( action == 160 && frame == changeSide[1] && clock() - capturaTempo > TEF-50 )
	{
		toRight = !toRight;
		ChangeAction(0);
	}
	
//personagem agachado
	if( button01 && flipCharacter )
	{
		if( ValidateAction(170) )
		{
			ChangeAction(170);
		}
	}
	if( action == 170 && frame == changeSideCrouched[1] && clock() - capturaTempo > TEF-50 )
	{
		toRight = !toRight;
		ChangeAction(11);
	}
	
}END_OF_FUNCTION(InterpretationChangeSide);

/**
 * Esse metodo é responsavel por fazer o controle da barra de especial e o 
 * controle da quantidade de especiais que o personagem tem
 */
void Player::SpecialControl()
{
	if( especialBar >= 100 )
	{
		especialBar = 0;
		if( especialQuantity < 5 ) especialQuantity++;
	}
}

































