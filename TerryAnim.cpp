#include <allegro.h>
#include "Terry.h"

#define TEF 120					//tempo entre os frames

/**
 * controle central da animação do Terry
 */
void Terry::TerryAnimations()
{
	switch( GetAction() )
	{
		case 0://idle
			Anim00();
		break;
		
		case 10://Crouching
		case 40://Jump Start
		case 60://Jump Start
		case 80://Jump Start
			Anim01();
		break;
		
		case 11://Crouched Idle
			Anim02();
		break;
		
		case 12://Raise Crouched
			Anim03();
		break;
		
		case 20://Walk
			Anim04();
		break;
		
		case 30://Walk Back
			Anim05();
		break;
		
		case 41://Rising
		case 51://Rising
		case 61://Rising
		case 81://Rising
			Anim06();
		break;
		
		case 42://End of Climp
		case 52://End of Climp
		case 62://End of Climp
		case 82://End of Climp
			Anim07();
		break;
		
		case 43://Falling
		case 53://Falling
		case 63://Falling
		case 73://Falling
		case 83://Falling
		case 93://Falling
			Anim08();
		break;
		
		case 44://Fall
		case 54://Fall
		case 64://Fall
		case 74://Fall
		case 84://Fall
		case 94://Fall
			Anim09();
		break;

		case 71://Strong Frontal Diagonal Jump
			Anim10();
		break;
		
		case 91://Strong Back Diagonal Jump
			Anim11();
		break;

		case 100://Run
			Anim12();
		break;
	
		case 101://Slide
			Anim25();
		break;
		
		case 110://Jumping Back
			Anim13();
		break;
	
		case 111://Fall - depois de Jumping Back
			Anim14();
		break;
	
		case 120://Defending
			Anim15();
		break;
			
		case 121://Defence
			Anim16();
		break;
	
		case 122://Taking Damage
			Anim17();
		break;
	
		case 123://Defend Exit
			Anim18();
		break;	
	
		case 130://Defending Crouched
			Anim19();
		break;
		
		case 131://Defence Crouched
			Anim20();
		break;
	
		case 132://Taking Damage Crouched
			Anim21();
		break;
	
		case 133://Defend Exit Crouched
			Anim22();
		break;
	
		case 140://Front Rolling
			Anim23();
		break;
	
		case 141://Front Rolling End
			Anim26();
		break;
	
		case 150://Back Rolling
			Anim24();
		break;
	
		case 151://Back Rolling End
			Anim27();
		break;
	
		case 160://changeSide
			Anim28();
		break;
	
		case 170://changeSideCrouched
			Anim29();
		break;
	
		default: //ERROR
			SetFrame(0);
		break;
	}
	
}END_OF_FUNCTION(TerryBasicAnimations)


void Terry::Anim00()//idle
{
	if( !GetStartAnimation() )
	{ SetFrame( GetIdle(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetIdle(0) && GetFrame() < GetIdle(1) && clock() - GetCapturaTempo() > TEF )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); if( GetFrame() == GetIdle(1) ) SetFrame( GetIdle(0) ); }
}END_OF_FUNCTION(anim00);


void Terry::Anim01()//crouching 
{
	if( !GetStartAnimation() )
	{ SetFrame( GetCrouching(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetCrouching(0) && GetFrame() < GetCrouching(1) && clock() - GetCapturaTempo() > TEF )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(anim01);


void Terry::Anim02()//crouchedIdle
{
	if( !GetStartAnimation() )
	{ SetFrame( GetCrouchedIdle(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetCrouchedIdle(0) && GetFrame() < GetCrouchedIdle(1) && clock() - GetCapturaTempo() > TEF+10 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); if( GetFrame() == GetCrouchedIdle(1) ) SetFrame( GetCrouchedIdle(0) ); }
}END_OF_FUNCTION(anim02);


void Terry::Anim03()//raiseCrouched  
{
	if( !GetStartAnimation() )
	{ SetFrame( GetCrouching (1) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() > GetCrouching(0) && GetFrame() <= GetCrouching(1) && clock() - GetCapturaTempo() > TEF )
	{ SetFrame( GetFrame()-1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(anim03);


void Terry::Anim04()//walk
{
	if( !GetStartAnimation() )
	{ SetFrame( GetWalk(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetWalk(0) && GetFrame() < GetWalk(1) && clock() - GetCapturaTempo() > TEF )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); if( GetFrame() == GetWalk(1) ) SetFrame( GetWalk(0) ); }
}END_OF_FUNCTION(anim04);


void Terry::Anim05()//walkBack
{
	if( !GetStartAnimation() )
	{ SetFrame( GetWalkBack(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetWalkBack(0) && GetFrame() < GetWalkBack(1) && clock() - GetCapturaTempo() > TEF )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); if( GetFrame() == GetWalkBack(1) ) SetFrame( GetWalkBack(0) ); }
}END_OF_FUNCTION(anim05);

void Terry::Anim06()//rising 
{
	if( !GetStartAnimation() )
	{ SetFrame( GetRising(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetRising(0) && GetFrame() < GetRising(1) && clock() - GetCapturaTempo() > TEF )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(anim06);


void Terry::Anim07()//endOfClimp
{
	if( !GetStartAnimation() )
	{ SetFrame( GetEndOfClimp(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetEndOfClimp(0) && GetFrame() < GetEndOfClimp(1) && clock() - GetCapturaTempo() > TEF )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(anim07);


void Terry::Anim08()//falling
{
	if( !GetStartAnimation() )
	{ SetFrame( GetFalling(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetFalling(0) && GetFrame() < GetFalling(1) && clock() - GetCapturaTempo() > TEF )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(anim08);


void Terry::Anim09()//fall
{
	if( !GetStartAnimation() )
	{ SetFrame( GetFall(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetFall(0) && GetFrame() < GetFall(1) && clock() - GetCapturaTempo() > TEF )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(anim09);


void Terry::Anim10()//strongFrontalDiagonalJump
{
	if( !GetStartAnimation() )
	{ SetFrame( GetStrongFrontalDJ(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetStrongFrontalDJ(0) && GetFrame() < GetStrongFrontalDJ(1) && clock() - GetCapturaTempo() > TEF-20 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(anim10);


void Terry::Anim11()//strongBackDiagonalJump
{
	if( !GetStartAnimation() )
	{ SetFrame( GetStrongBackDJ(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetStrongBackDJ(0) && GetFrame() < GetStrongBackDJ(1) && clock() - GetCapturaTempo() > TEF-20 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim11);


void Terry::Anim12()//run
{
	if( !GetStartAnimation() )
	{ SetFrame( GetRun(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetRun(0) && GetFrame() < GetRun(1) && clock() - GetCapturaTempo() > TEF-20 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); if( GetFrame() == GetRun(1) ) SetFrame( GetRun(0)+1 ); }
}END_OF_FUNCTION(Anim12);


void Terry::Anim13()//jumpingBack
{
	if( !GetStartAnimation() )
	{ SetFrame( GetJumpBack(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetJumpBack(0) && GetFrame() < GetJumpBack(1) && clock() - GetCapturaTempo() > TEF+50 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim13);


void Terry::Anim14()//Fall - depois de Jumping Back
{
	if( !GetStartAnimation() )
	{ SetFrame( GetJumpBackFall(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetJumpBackFall(0) && GetFrame() < GetJumpBackFall(1) && clock() - GetCapturaTempo() > TEF+50 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim14);


void Terry::Anim15()//Defending					78-81
{
	if( !GetStartAnimation() )
	{ SetFrame( GetDefending(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetDefending(0) && GetFrame() < GetDefending(1) && clock() - GetCapturaTempo() > TEF-50 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim15);


void Terry::Anim16()//Defence					82
{
	if( !GetStartAnimation() )
	{ SetFrame(82); SetStartAnimation(true); SetCapturaTempo(clock()); }//frame 0
}END_OF_FUNCTION(Anim16);


void Terry::Anim17()//Taking Damage				114-118
{
	if( !GetStartAnimation() )
	{ SetFrame( GetTakingDamage(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetTakingDamage(0) && GetFrame() < GetTakingDamage(1) && clock() - GetCapturaTempo() > TEF-75 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim17);


void Terry::Anim18()//Defend Exit				81-79
{
	if( !GetStartAnimation() )
	{ SetFrame( GetDefendExit(1) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() > GetDefendExit(0) && GetFrame() <= GetDefendExit(1) && clock() - GetCapturaTempo() > TEF )
	{ SetFrame( GetFrame()-1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim18);


void Terry::Anim19()//Defending Crouched		83-86		
{
	if( !GetStartAnimation() )
	{ SetFrame( GetDefendingCrouched(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetDefendingCrouched(0) && GetFrame() < GetDefendingCrouched(1) && clock() - GetCapturaTempo() > TEF-20 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim19);


void Terry::Anim20()//Defence Crouched			87
{
	if( !GetStartAnimation() )
	{ SetFrame(87); SetStartAnimation(true); SetCapturaTempo(clock()); }//frame 0
}END_OF_FUNCTION(Anim20);


void Terry::Anim21()//Taking Damage Crouched	119-123
{
	if( !GetStartAnimation() )
	{ SetFrame( GetTakingDamageCrouched(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetTakingDamageCrouched(0) && GetFrame() < GetTakingDamageCrouched(1) && clock() - GetCapturaTempo() > TEF-75 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim21);


void Terry::Anim22()//Defend Exit Crouched		85-84
{
	if( !GetStartAnimation() )
	{ SetFrame( GetDefendExitCrouched(1) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() > GetDefendExitCrouched(0) && GetFrame() <= GetDefendExitCrouched(1) && clock() - GetCapturaTempo() > TEF )
	{ SetFrame( GetFrame()-1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim22);


void Terry::Anim23()//Front Rolling				88-93
{
	if( !GetStartAnimation() )
	{ SetFrame( GetFrontRolling(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetFrontRolling(0) && GetFrame() < GetFrontRolling(1) && clock() - GetCapturaTempo() > TEF-60 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim23);


void Terry::Anim24()//Back Rolling				100-107
{
	if( !GetStartAnimation() )
	{ SetFrame( GetBackRolling(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetBackRolling(0) && GetFrame() < GetBackRolling(1) && clock() - GetCapturaTempo() > TEF-60 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim24);


void Terry::Anim25()//slide
{
	if( !GetStartAnimation() )
	{ SetFrame( GetSlide(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetSlide(0) && GetFrame() <= GetSlide(1) && clock() - GetCapturaTempo() > TEF )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim25);


void Terry::Anim26()//Front Rolling End					94-99
{
	if( !GetStartAnimation() )
	{ SetFrame( GetFrontRollingEnd(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetFrontRollingEnd(0) && GetFrame() < GetFrontRollingEnd(1) && clock() - GetCapturaTempo() > TEF-60 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim26);


void Terry::Anim27()//Back Rolling End					106 - 113
{
	if( !GetStartAnimation() )
	{ SetFrame( GetBackRollingEnd(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetBackRollingEnd(0) && GetFrame() < GetBackRollingEnd(1) && clock() - GetCapturaTempo() > TEF-60 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim27);


void Terry::Anim28()//changeSide						124-126
{
	if( !GetStartAnimation() )
	{ SetFrame( GetChangeSide(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetChangeSide(0) && GetFrame() < GetChangeSide(1) && clock() - GetCapturaTempo() > TEF-50 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim28);


void Terry::Anim29()//changeSideCrouched				127-129
{
	if( !GetStartAnimation() )
	{ SetFrame( GetChangeSideCrouched(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetChangeSideCrouched(0) && GetFrame() < GetChangeSideCrouched(1) && clock() - GetCapturaTempo() > TEF-50 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim29);








