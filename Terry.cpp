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
	SetSlide( 74, 0 );
	SetSlide( 77, 0 );
	
}


/**
 * função para ser chamada na rotina principal do alegro
 */
void Terry::Routine()
{
	//motor de interpretação
	InterpretationEngine();
	
	//rotina da classe player
	PlayerRoutine();
	
	//controle das animações do personagem
	TerryAnimations();
	
}END_OF_FUNCTION(PlayerRoutine)


/**
 * Esse metodo é responsavel por imterpletar as situações em que o personagem se encontra e mudar os valores de action
 */
void Terry::InterpretationEngine()
{
	
//walk - walkBack - run
	if( GetSpeedX() == 0 && VerifyFrame( 0 ) && ( GetAction() == 20 || GetAction() == 30 || GetAction() == 100 || GetAction() == 101 )  )
	{
		SetAction(0);
		SetStartAnimation(false);
	}
	if( GetAction() == 100 && GetSpeedX() != 0 )
	{
		if( GetToRight() && !GetButton02() )
		{
			ChangeAction(101);
		}
		else if( !GetToRight() && !GetButton00() )
		{
			ChangeAction(101);
		}
	}
	

//jumpBack
	if( GetAction() == 110 && GetY() >= CHAO )//animação do personagem pulando para tras em quando está no ar
	{
		ChangeAction(111);
		SetCapturaTParaOUltimoFrame( clock() );
	}
	if( GetAction() == 111 && GetCapturaTParaOUltimoFrame() > TEF )//animação do personagem caindo no chão e se recuperando da queda
	{
		//continua antando para tras
		if( GetButton00() && GetToRight() )
		{
			SetSpeedX( -WALKSPEED );
			ChangeAction(30);
		}
		if( GetButton02() && !GetToRight() )
		{
			SetSpeedX( WALKSPEED );
			ChangeAction(30);
		}
		
		//o personagem parou de andar para tras
		if( GetSpeedX() == 0 )
		{
			ChangeAction(0);
		}
	}


//jump
	//muda de rising para endOfClimp
	if( GetAction() == 41 && GetSpeedY() > - 3 ) ChangeAction( 42 );
	if( GetAction() == 51 && GetSpeedY() > - 3 ) ChangeAction( 52 );
	if( GetAction() == 61 && GetSpeedY() > - 3 ) ChangeAction( 62 );
	if( GetAction() == 81 && GetSpeedY() > - 3 ) ChangeAction( 82 );

	//muda de endOfClimp para falling
	if( GetAction() == 42 && GetSpeedY() > 5 ) ChangeAction( 43 );
	if( GetAction() == 52 && GetSpeedY() > 5 ) ChangeAction( 53 );
	if( GetAction() == 62 && GetSpeedY() > 5 ) ChangeAction( 63 );
	if( GetAction() == 82 && GetSpeedY() > 5 ) ChangeAction( 83 );
	
	//muda de falling para fall
	if( GetAction() == 43 && GetY() >= CHAO ) ChangeAction( 44 );
	if( GetAction() == 53 && GetY() >= CHAO ) ChangeAction( 54 );
	if( GetAction() == 63 && GetY() >= CHAO ) ChangeAction( 64 );
	if( GetAction() == 83 && GetY() >= CHAO ) ChangeAction( 84 );
	
	//muda de fall para idle
	if( GetAction() == 44 || GetAction() == 54 || GetAction() == 64 || GetAction() == 84 )
	{
		//aqui a animação deve ser completamente executada e depois mudar para a animação idle
		if( GetFrame() == 50 ) SetCapturaTParaOUltimoFrame( clock() );
		if( GetFrame() == 50 && GetCapturaTParaOUltimoFrame() > TEF-20 )
		{
			ChangeAction(0);
		}
	}
	

//strongFrontalDiagonalJump
	if( GetAction() == 71 )//strongFrontalDiagonalJump
	{
		//essa animação deve rodar até o ultimo frame e entao mudar para a animação falling
		if( GetFrame() == 59 ) SetCapturaTParaOUltimoFrame( clock() );
		if( GetFrame() == 59 && GetCapturaTParaOUltimoFrame() > TEF-20 )
		{
			ChangeAction(43);
		}
	}
	
	
//strongBackDiagonalJump
	if( GetAction() == 91 )//strongFrontalDiagonalJump
	{
		//essa animação deve rodar até o ultimo frame e entao mudar para a animação falling
		if( GetFrame() == 67 ) SetCapturaTParaOUltimoFrame( clock() );
		if( GetFrame() == 67 && GetCapturaTParaOUltimoFrame() > TEF-20 )
		{
			ChangeAction(43);
		}
	}
	
	
//crouched
	if( GetButton01() && ValidateAction( 10 ) )//crouching
	{
		ChangeAction( 10 );
	}
	if( GetButton01() && GetAction() == 10 && GetFrame() == 41)//crouchedIdle
	{
		ChangeAction( 11 );
	}
	if( !GetButton01() && ( GetAction() == 11 || GetAction() == 10 ) )//raiseCrouched
	{
		ChangeAction( 12 );
	}
	if( !GetButton01() && GetAction() == 12 && GetFrame() == 40)//idle
	{
		ChangeAction( 0 );
	}

	
}END_OF_FUNCTION(InterpretationEngine);


//>>>>>>>>>>>>>>>>>>>>>>>>>>>> Validadores <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<



















