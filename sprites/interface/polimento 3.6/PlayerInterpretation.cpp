#include "includes.h"
#include "Player.h"

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
	if( action == 110 && y >= CHAO && frame >= jumpBack[1] )//animação do personagem pulando para tras em quando está no ar
	{
		ChangeAction(111);
	}
	if( action == 111 && clock() - capturaTempo > TEF+75 )//animação do personagem caindo no chão e se recuperando da queda
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
	if( ( action == 120 || action == 121 || action == 122 ) && ( ( !button00 && toRight ) || ( !button02 && !toRight ) || !opponentAttacking ) )//animação de saida da defesa
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
}END_OF_FUNCTION(SpecialControl);

/**
 * Esse metodo é responsavel por fazer todas as imterpletações quando o jogador pressiona o
 * botão 4
 */
void Player::InterpretationWeakPunch( int opponentX, int opponentY )
{
	if( antLoopBT4 && button04 )//soco fraco
	{
		antLoopBT4 = false;
		
		timeDelay = clock();
		
		//Todas as ações terminadas com soco fraco
		
		//soco pulando
		if( y < CHAO && ValidateAction(380) )
			ChangeAction(380);
		
		//soco agachado
		else  if( button01 && ValidateAction(340) )
			ChangeAction(340);
		
		//soco fraco para frente
		else if( ValidateAction(460) && ( (button02 && toRight) || (button00 && !toRight) ) )
			ChangeAction(460);

		//soco normal
		else if( ValidateAction(300) )
			ChangeAction(300);
	}
	
	//weakPunchForward
	if( action == 460 && clock() - timeDelay > 37 && ValidateAction(461) )
	{
		ChangeAction(461);
	}
	if( action == 461 && frame == weakPunchForward[1] && clock() - capturaTempo > TEF - 60 )
	{
		if( toRight && button02 )
		{
			antLoopBT2 = false;
			ChangeAction(20);
		}
		else if(!toRight && button00 )
		{
			antLoopBT0 = false;
			ChangeAction(20);
		}
		else
			ChangeAction(0);
	}
	
	//weakPunch
	if( action == 300 && clock() - timeDelay > 37 && ValidateAction(301) )
	{
		ChangeAction(301);
	}
	if( action == 301 && frame == weakPunch[1] && clock() - capturaTempo > TEF - 60 )
	{
		ChangeAction(0);
	}
	
	//crouchedWeakPunch
	if( action == 340 && clock() - timeDelay > 37 && ValidateAction(341) )
	{
		ChangeAction(341);
	}
	if( action == 341 && frame == crouchedWeakPunch[1] && clock() - capturaTempo > TEF - 60 )
	{
		if(button01)
			ChangeAction(11);
		else
			ChangeAction(12);
	}
	
	//jumpingWeakPunch
	if( action == 380 && y > CHAO )
	{
		//animação fall
		ChangeAction(44);
	}
	
	if( !antLoopBT4 && !button04 )
	{
		antLoopBT4 = true;
	}
	
}END_OF_FUNCTION(InterpretationWeakPunch);

/**
 * Esse metodo é responsavel por fazer todas as imterpletações quando o jogador pressiona o
 * botão 5
 */
void Player::InterpretationStrongPunch( int opponentX, int opponentY )
{
	if( antLoopBT5 && button05 )//soco forte
	{
		antLoopBT5 = false;
		
		timeDelay = clock();
		
		//Todas as ações terminadas com soco forte
		
		
		//soco pulando
		if( y < CHAO && ValidateAction(390) )
			ChangeAction(390);
		
		//soco agachado
		else if( button01 && ValidateAction(350) )
			ChangeAction(350);
		
		//soco forte colado
		else if( x - opponentX >= -140 && x - opponentX <= 140 && ValidateAction(420) )
		{
			ChangeAction(420);
		}
		
		//soco normal
		else if( ValidateAction(310) )
		{
			ChangeAction(310);
		}
	}
	
	//strongPunch
	if( action == 310 && clock() - timeDelay > 37 && ValidateAction(311) )
	{
		ChangeAction(311);
	}
	if( action == 311 && frame == strongPunch[1] && clock() - capturaTempo > TEF - 60 )
	{
		ChangeAction(0);
	}
	
	//gluedStrongPunch
	if( action == 420 && clock() - timeDelay > 37 && ValidateAction(421) )
	{
		ChangeAction(421);
	}
	if( action == 421 && frame == gluedStrongPunch[1] && clock() - capturaTempo > TEF - 60 )
	{
		ChangeAction(0);
	}
	
	//crouchedStrongPunch
	if( action == 350 && clock() - timeDelay > 37 && ValidateAction(351) )
	{
		ChangeAction(351);
	}
	if( action == 351 && frame == crouchedStrongPunch[1] && clock() - capturaTempo > TEF - 60 )
	{
		if(button01)
			ChangeAction(11);
		else
			ChangeAction(12);
	}
	
	//jumpingStrongPunch
	if( action == 390 && y > CHAO )
	{
		//animação fall
		ChangeAction(44);
	}
	
	if( !antLoopBT5 && !button05 )
	{
		antLoopBT5 = true;
	}
	
}END_OF_FUNCTION(InterpretationStrongPunch);

/**
 * Esse metodo é responsavel por fazer todas as imterpletações quando o jogador pressiona o
 * botão 6
 */
void Player::InterpretationWeakKick( int opponentX, int opponentY )
{
	if( antLoopBT6 && button06 )//chute fraco
	{
		antLoopBT6 = false;
		
		timeDelay = clock();
		
		//Todas as ações terminadas com chute fraco
		
		//chute pulando
		if( y < CHAO && ValidateAction(400) )
			ChangeAction(400);
		
		//chute agachado
		else if( button01 && ValidateAction(360) )
			ChangeAction(360);
				
		//chute normal
		else if( ValidateAction(320) )
		{
			ChangeAction(320);
		}
		
	}
	//weakKick
	if( action == 320 && clock() - timeDelay > 37 && ValidateAction(321) )
	{
		ChangeAction(321);
	}
	if( action == 321 && frame == weakKick[1] && clock() - capturaTempo > TEF - 60 )
	{
		ChangeAction(0);
	}
	
	//crouchedWeakKick
	if( action == 360 && clock() - timeDelay > 37 && ValidateAction(361) )
	{
		ChangeAction(361);
	}
	if( action == 361 && frame == crouchedWeakKick[1] && clock() - capturaTempo > TEF - 60 )
	{
		if(button01)
			ChangeAction(11);
		else
			ChangeAction(12);
	}
	
	//jumpingWeakKick
	if( action == 400 && y > CHAO )
	{
		//animação fall
		ChangeAction(44);
	}
	
	if( !antLoopBT6 && !button06 )
	{
		antLoopBT6 = true;
	}
	
}END_OF_FUNCTION(InterpretationWeakKick);

/**
 * Esse metodo é responsavel por fazer todas as imterpletações quando o jogador pressiona o
 * botão 7
 */
void Player::InterpretationStrongKick( int opponentX, int opponentY )
{
	if( antLoopBT7 && button07 )//chute forte
	{
		antLoopBT7 = false;
		
		timeDelay = clock();
		
		//Todas as ações terminadas com chute forte
		
		//chute pulando
		if( y < CHAO && ValidateAction(410) )
			ChangeAction(410);
		
		//chute agachado
		else if( button01 && ValidateAction(370) )
			ChangeAction(370);
		
		//soco forte colado
		else if( x - opponentX >= -140 && x - opponentX <= 140 && ValidateAction(430) )
		{
			ChangeAction(430);
		}
		
		//chute normal
		else if( ValidateAction(330) )
		{
			ChangeAction(330);
		}
		
	}
	
	//strongKick
	if( action == 330 && clock() - timeDelay > 37 && ValidateAction(331) )
	{
		ChangeAction(331);
	}
	if( action == 331 && frame == strongKick[1] && clock() - capturaTempo > TEF - 60 )
	{
		ChangeAction(332);
	}
	else if( action  == 331 )
	{
		if(toRight) 
			speedX = 3;
		else
			speedX = -3;
	}
	if( action == 332 && frame == strongKickEnd[1] && clock() - capturaTempo > TEF - 60 )
	{
		ChangeAction(0);
	}
	
	
	//gluedStrongKick
	if( action == 430 && clock() - timeDelay > 37 && ValidateAction(431) )
	{
		ChangeAction(431);
	}
	if( action == 431 && frame == gluedStrongKick[1] && clock() - capturaTempo > TEF - 60 )
	{
		ChangeAction(0);
	}
	
	//crouchedStrongKick
	if( action == 370 && clock() - timeDelay > 37 && ValidateAction(371) )
	{
		ChangeAction(371);
	}
	if( action == 371 && frame == crouchedStrongKick[1] && clock() - capturaTempo > TEF - 60 )
	{
		if(button01)
			ChangeAction(11);
		else
			ChangeAction(12);
	}
	
	//jumpingStrongKick
	if( action == 410 && y > CHAO )
	{
		//animação fall
		ChangeAction(44);
	}
	
	if( !antLoopBT7 && !button07 )
	{
		antLoopBT7 = true;
	}
	
}END_OF_FUNCTION(InterpretationStrongKick);

void Player::InterpretationSpecialAttack()
{
	
	if( button05 && button07 )
	{
		//jumping special attack
		if( y < CHAO && ValidateAction(450) )
		{
			ChangeAction(450);
		}
		
		//special attack
		if( ValidateAction(440) )
		{
			ChangeAction(440);
		}
	}
	
	//special attack
	if( action == 440 && frame == specialAttackStart[1] && clock() - capturaTempo > TEF - 60 )
	{
		ChangeAction(441);
	}
	if( action == 441 )
	{
		speedX = WALKSPEED;
		
		if( frame == specialAttack[1] && clock() - capturaTempo > TEF - 60 )
		{
			ChangeAction(0);
		}
		
	}
	
	//jumping special attack
	if( action == 450 && y >= CHAO /*&& frame == specialAttackStart[1] && clock() - capturaTempo > TEF - 60*/ )
	{
		//animação fall
		ChangeAction(44);
	}

}END_OF_FUNCTION(InterpretationSpecialAttack);














