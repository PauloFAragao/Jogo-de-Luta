#include "includes.h"
#include "Terry.h"

/**
 * controle central da animação do Terry
 */
void Terry::TerryAnimations()
{
	switch( GetAction() )
	{

//animações basicas
		case 0://idle
		case 300://preparation to weak punch
		case 310://preparation to strong punch
		case 320://preparation to weak kick
		case 330://preparation to strong kick
		case 420://preparation to glued strong punch
		case 430://preparation to glued strong kick
			Anim00();
		break;
	
		case 10://Crouching
		case 40://Jump Start
		case 60://Jump Start
		case 80://Jump Start
			Anim01();
		break;
		
		case 11://Crouched Idle
		case 340://preparation to crouched weak punch
		case 350://preparation to crouched strong punch
		case 360://preparation to crouched weak kick
		case 370://preparation to crouched strong kick
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
		
//ataques basicos
		case 301://weak punch
			Anim30();
		break;
	
		case 311://strong punch
			Anim31();
		break;
	
		case 321://weak kick
			Anim32();
		break;
	
		case 331://strong kick
			Anim33();
		break;
		
		case 332://strong kick End
			Anim34();
		break;
	
		case 341://crouched weak punch
			Anim35();
		break;
	
		case 351://crouched strong punch
			Anim36();
		break;
	
		case 361://crouched weak kick
			Anim37();
		break;
	
		case 371://crouched strong kick
			Anim38();
		break;
	
		case 380://Jumping Weak Punch
			Anim39();
		break;
	
		case 390://Jumping strong Punch
			Anim40();
		break;
	
		case 400://Jumping Weak kick
			Anim41();
		break;
	
		case 410://Jumping strong kick
			Anim42();
		break;
	
		case 421://Glued strong punch
			Anim43();
		break;
	
		case 431://Glued strong kick
			Anim44();
		break;
	
		case 440://Special Attack
			Anim45();
		break;
	
		case 441://Special Attack
			Anim48();
		break;
	
		case 450://Jumping Special Attack
			Anim46();
		break;
	
		case 461://Weak Punch Forward
			Anim47();
		break;
			
		default://ERROR
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
	else if( GetFrame() >= GetCrouchedIdle(0) && GetFrame() < GetCrouchedIdle(1) && clock() - GetCapturaTempo() > TEF+50 )
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
	else if( GetFrame() >= GetJumpBack(0) && GetFrame() < GetJumpBack(1) && clock() - GetCapturaTempo() > TEF+75 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim13);


void Terry::Anim14()//Fall - depois de Jumping Back	
{
	if( !GetStartAnimation() )
	{ SetFrame( GetJumpBackFall(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetJumpBackFall(0) && GetFrame() < GetJumpBackFall(1) && clock() - GetCapturaTempo() > TEF )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim14);


void Terry::Anim15()//Defending
{
	if( !GetStartAnimation() )
	{ SetFrame( GetDefending(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetDefending(0) && GetFrame() < GetDefending(1) && clock() - GetCapturaTempo() > TEF-75 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim15);


void Terry::Anim16()//Defence
{
	if( !GetStartAnimation() )
	{ SetFrame(GetDefence(0)); SetStartAnimation(true); SetCapturaTempo(clock()); }//frame 0
}END_OF_FUNCTION(Anim16);


void Terry::Anim17()//Taking Damage
{
	if( !GetStartAnimation() )
	{ SetFrame( GetTakingDamage(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetTakingDamage(0) && GetFrame() < GetTakingDamage(1) && clock() - GetCapturaTempo() > TEF-75 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim17);


void Terry::Anim18()//Defend Exit
{
	if( !GetStartAnimation() )
	{ SetFrame( GetDefendExit(1) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() > GetDefendExit(0) && GetFrame() <= GetDefendExit(1) && clock() - GetCapturaTempo() > TEF-75 )
	{ SetFrame( GetFrame()-1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim18);


void Terry::Anim19()//Defending Crouched		
{
	if( !GetStartAnimation() )
	{ SetFrame( GetDefendingCrouched(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetDefendingCrouched(0) && GetFrame() < GetDefendingCrouched(1) && clock() - GetCapturaTempo() > TEF-75 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim19);


void Terry::Anim20()//Defence Crouched
{
	if( !GetStartAnimation() )
	{ SetFrame(87); SetStartAnimation(true); SetCapturaTempo(clock()); }//frame 0
}END_OF_FUNCTION(Anim20);


void Terry::Anim21()//Taking Damage Crouched
{
	if( !GetStartAnimation() )
	{ SetFrame( GetTakingDamageCrouched(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetTakingDamageCrouched(0) && GetFrame() < GetTakingDamageCrouched(1) && clock() - GetCapturaTempo() > TEF-75 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim21);


void Terry::Anim22()//Defend Exit Crouched
{
	if( !GetStartAnimation() )
	{ SetFrame( GetDefendExitCrouched(1) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() > GetDefendExitCrouched(0) && GetFrame() <= GetDefendExitCrouched(1) && clock() - GetCapturaTempo() > TEF-75 )
	{ SetFrame( GetFrame()-1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim22);


void Terry::Anim23()//Front Rolling
{
	if( !GetStartAnimation() )
	{ SetFrame( GetFrontRolling(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetFrontRolling(0) && GetFrame() < GetFrontRolling(1) && clock() - GetCapturaTempo() > TEF-60 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim23);


void Terry::Anim24()//Back Rolling
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


void Terry::Anim26()//Front Rolling End
{
	if( !GetStartAnimation() )
	{ SetFrame( GetFrontRollingEnd(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetFrontRollingEnd(0) && GetFrame() < GetFrontRollingEnd(1) && clock() - GetCapturaTempo() > TEF-60 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim26);


void Terry::Anim27()//Back Rolling End
{
	if( !GetStartAnimation() )
	{ SetFrame( GetBackRollingEnd(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetBackRollingEnd(0) && GetFrame() < GetBackRollingEnd(1) && clock() - GetCapturaTempo() > TEF-60 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim27);


void Terry::Anim28()//changeSide
{
	if( !GetStartAnimation() )
	{ SetFrame( GetChangeSide(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetChangeSide(0) && GetFrame() < GetChangeSide(1) && clock() - GetCapturaTempo() > TEF-50 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim28);


void Terry::Anim29()//changeSideCrouched
{
	if( !GetStartAnimation() )
	{ SetFrame( GetChangeSideCrouched(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetChangeSideCrouched(0) && GetFrame() < GetChangeSideCrouched(1) && clock() - GetCapturaTempo() > TEF-50 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim29);

void Terry::Anim30()//Weak Punch
{
	if( !GetStartAnimation() )
	{ SetFrame( GetWeakPunch(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetWeakPunch(0) && GetFrame() < GetWeakPunch(1) && clock() - GetCapturaTempo() > TEF-60 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim30);

void Terry::Anim31()//Strong Punch
{
	if( !GetStartAnimation() )
	{ SetFrame( GetStrongPunch(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetStrongPunch(0) && GetFrame() < GetStrongPunch(1) && clock() - GetCapturaTempo() > TEF-60 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim31);

void Terry::Anim32()//Weak Kick
{
	if( !GetStartAnimation() )
	{ SetFrame( GetWeakKick(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetWeakKick(0) && GetFrame() < GetWeakKick(1) && clock() - GetCapturaTempo() > TEF-60 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim32);

void Terry::Anim33()//Strong Kick
{
	if( !GetStartAnimation() )
	{ SetFrame( GetStrongKick(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetStrongKick(0) && GetFrame() < GetStrongKick(1) && clock() - GetCapturaTempo() > TEF-60 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim33);

void Terry::Anim34()//Strong Kick End
{
	if( !GetStartAnimation() )
	{ SetFrame( GetStrongKickEnd(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetStrongKickEnd(0) && GetFrame() < GetStrongKickEnd(1) && clock() - GetCapturaTempo() > TEF-60 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim34);

void Terry::Anim35()//Crouched Weak Punch
{
	if( !GetStartAnimation() )
	{ SetFrame( GetCrouchedWeakPunch(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetCrouchedWeakPunch(0) && GetFrame() < GetCrouchedWeakPunch(1) && clock() - GetCapturaTempo() > TEF-60 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim35);

void Terry::Anim36()//Crouched Strong Punch
{
	if( !GetStartAnimation() )
	{ SetFrame( GetCrouchedStrongPunch(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetCrouchedStrongPunch(0) && GetFrame() < GetCrouchedStrongPunch(1) && clock() - GetCapturaTempo() > TEF-60 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim36);

void Terry::Anim37()//Crouched Weak Kick
{
	if( !GetStartAnimation() )
	{ SetFrame( GetCrouchedWeakKick(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetCrouchedWeakKick(0) && GetFrame() < GetCrouchedWeakKick(1) && clock() - GetCapturaTempo() > TEF-60 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim37);

void Terry::Anim38()//Crouched Strong Kick
{
	if( !GetStartAnimation() )
	{ SetFrame( GetCrouchedStrongKick(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetCrouchedStrongKick(0) && GetFrame() < GetCrouchedStrongKick(1) && clock() - GetCapturaTempo() > TEF-60 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim38);

void Terry::Anim39()//Jumping Weak Punch
{
	if( !GetStartAnimation() )
	{ SetFrame( GetJumpingWeakPunch(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetJumpingWeakPunch(0) && GetFrame() < GetJumpingWeakPunch(1) && clock() - GetCapturaTempo() > TEF-60 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim39);

void Terry::Anim40()//Jumping Strong Punch
{
	if( !GetStartAnimation() )
	{ SetFrame( GetJumpingStrongPunch(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetJumpingStrongPunch(0) && GetFrame() < GetJumpingStrongPunch(1) && clock() - GetCapturaTempo() > TEF-60 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim40);

void Terry::Anim41()//Jumping Strong Kick
{
	if( !GetStartAnimation() )
	{ SetFrame( GetJumpingStrongKick(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetJumpingStrongKick(0) && GetFrame() < GetJumpingStrongKick(1) && clock() - GetCapturaTempo() > TEF-60 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim41);

void Terry::Anim42()//Jumping Weak Kick
{
	if( !GetStartAnimation() )
	{ SetFrame( GetJumpingWeakKick(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetJumpingWeakKick(0) && GetFrame() < GetJumpingWeakKick(1) && clock() - GetCapturaTempo() > TEF-60 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim42);

void Terry::Anim43()//Glued Strong Punch
{
	if( !GetStartAnimation() )
	{ SetFrame( GetGluedStrongPunch(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetGluedStrongPunch(0) && GetFrame() < GetGluedStrongPunch(1) && clock() - GetCapturaTempo() > TEF-20 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim43);

void Terry::Anim44()//Glued Strong Kick
{
	if( !GetStartAnimation() )
	{ SetFrame( GetGluedStrongKick(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetGluedStrongKick(0) && GetFrame() < GetGluedStrongKick(1) && clock() - GetCapturaTempo() > TEF-60 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim44);

void Terry::Anim45()//Special Attack Start
{
	if( !GetStartAnimation() )
	{ SetFrame( GetSpecialAttackStart(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetSpecialAttackStart(0) && GetFrame() < GetSpecialAttackStart(1) && clock() - GetCapturaTempo() > TEF-60 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim45);

void Terry::Anim46()//Jumping Special Attack
{
	if( !GetStartAnimation() )
	{ SetFrame( GetJumpingSpecialAttack(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetJumpingSpecialAttack(0) && GetFrame() < GetJumpingSpecialAttack(1) && clock() - GetCapturaTempo() > TEF-60 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim46);

void Terry::Anim47()//Weak Punch Forward
{
	if( !GetStartAnimation() )
	{ SetFrame( GetWeakPunchForward(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetWeakPunchForward(0) && GetFrame() < GetWeakPunchForward(1) && clock() - GetCapturaTempo() > TEF-60 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim47);

void Terry::Anim48()//Special Attack
{
	if( !GetStartAnimation() )
	{ SetFrame( GetSpecialAttack(0) ); SetStartAnimation(true); SetCapturaTempo(clock()); }
	else if( GetFrame() >= GetSpecialAttack(0) && GetFrame() < GetSpecialAttack(1) && clock() - GetCapturaTempo() > TEF-60 )
	{ SetFrame( GetFrame()+1 ); SetCapturaTempo(clock()); }
}END_OF_FUNCTION(Anim48);










