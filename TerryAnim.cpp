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
		
		case 110://Jumping Back
			Anim13();
		break;

		case 111://Fall - depois de Jumping Back
			Anim14();
		break;
		
		case 101://Slide
			Anim25();
		break;
	
		default: //ERROR
			SetFrame(0);
		break;
	}
	
}END_OF_FUNCTION(TerryBasicAnimations)


void Terry::Anim00()//idle
{
	if( !GetStartAnimation() )
	{ SetFrame(0); SetStartAnimation(true); SetCapturaTempo(clock()); }//frame 0
	else
	{
		if( GetFrame() == 0 && clock() - GetCapturaTempo() > TEF )//frame 1
		{ SetFrame(1); SetCapturaTempo(clock()); }
		if( GetFrame() == 1 && clock() - GetCapturaTempo() > TEF )//frame 2
		{ SetFrame(2); SetCapturaTempo(clock()); }
		if( GetFrame() == 2 && clock() - GetCapturaTempo() > TEF )//frame 3
		{ SetFrame(3); SetCapturaTempo(clock()); }
		if( GetFrame() == 3 && clock() - GetCapturaTempo() > TEF )//frame 4
		{ SetFrame(4); SetCapturaTempo(clock()); }
		if( GetFrame() == 4 && clock() - GetCapturaTempo() > TEF )//frame 5
		{ SetFrame(5); SetCapturaTempo(clock()); }
		if( GetFrame() == 5 && clock() - GetCapturaTempo() > TEF )//frame 6
		{ SetFrame(6); SetCapturaTempo(clock()); }
		if( GetFrame() == 6 && clock() - GetCapturaTempo() > TEF )//frame 7
		{ SetFrame(7); SetCapturaTempo(clock()); }
		if( GetFrame() == 7 && clock() - GetCapturaTempo() > TEF )//frame 0
		{ SetFrame(0); SetCapturaTempo(clock()); }
	}
}END_OF_FUNCTION(anim00);


void Terry::Anim01()//crouching 
{
	if( !GetStartAnimation() )
	{ SetFrame(40); SetStartAnimation(true); SetCapturaTempo(clock()); }//frame 0
	else
	{
		if( GetFrame() == 40 && clock() - GetCapturaTempo() > TEF )//frame 1
		{ SetFrame(41); SetCapturaTempo(clock()); }
		
	}
}END_OF_FUNCTION(anim01);


void Terry::Anim02()//crouchedIdle
{
	if( !GetStartAnimation() )
	{ SetFrame(68); SetStartAnimation(true); SetCapturaTempo(clock()); }//frame 0
	else
	{
		if( GetFrame() == 68 && clock() - GetCapturaTempo() > TEF+10 )//frame 1
		{ SetFrame(69); SetCapturaTempo(clock()); }
		if( GetFrame() == 69 && clock() - GetCapturaTempo() > TEF+10 )//frame 2
		{ SetFrame(70); SetCapturaTempo(clock()); }
		if( GetFrame() == 70 && clock() - GetCapturaTempo() > TEF+10 )//frame 3
		{ SetFrame(71); SetCapturaTempo(clock()); }
		if( GetFrame() == 71 && clock() - GetCapturaTempo() > TEF+10 )//frame 4
		{ SetFrame(72); SetCapturaTempo(clock()); }
		if( GetFrame() == 72 && clock() - GetCapturaTempo() > TEF+10 )//frame 5
		{ SetFrame(73); SetCapturaTempo(clock()); }
		if( GetFrame() == 73 && clock() - GetCapturaTempo() > TEF+10 )//frame 0
		{ SetFrame(68); SetCapturaTempo(clock()); }
	}
}END_OF_FUNCTION(anim02);


void Terry::Anim03()//raiseCrouched  
{
	if( !GetStartAnimation() )
	{ SetFrame(41); SetStartAnimation(true); SetCapturaTempo(clock()); }//frame 0
	else
	{
		if( GetFrame() == 41 && clock() - GetCapturaTempo() > TEF )//frame 1
		{ SetFrame(40); SetCapturaTempo(clock()); }
		
	}
}END_OF_FUNCTION(anim03);


void Terry::Anim04()//walk
{
	if( !GetStartAnimation() )
	{ SetFrame(8); SetStartAnimation(true); SetCapturaTempo(clock()); }//frame 0
	else
	{
		if( GetFrame() == 8 && clock() - GetCapturaTempo() > TEF )//frame 1
		{ SetFrame(9);  SetCapturaTempo(clock()); }
		if( GetFrame() == 9 && clock() - GetCapturaTempo() > TEF )//frame 2
		{ SetFrame(10); SetCapturaTempo(clock()); }
		if( GetFrame() == 10 && clock() - GetCapturaTempo() > TEF )//frame 3
		{ SetFrame(11); SetCapturaTempo(clock()); }
		if( GetFrame() == 11 && clock() - GetCapturaTempo() > TEF )//frame 4
		{ SetFrame(12); SetCapturaTempo(clock()); }
		if( GetFrame() == 12 && clock() - GetCapturaTempo() > TEF )//frame 5
		{ SetFrame(13); SetCapturaTempo(clock()); }
		if( GetFrame() == 13 && clock() - GetCapturaTempo() > TEF )//frame 6
		{ SetFrame(14); SetCapturaTempo(clock()); }
		if( GetFrame() == 14 && clock() - GetCapturaTempo() > TEF )//frame 7
		{ SetFrame(15); SetCapturaTempo(clock()); }
		if( GetFrame() == 15 && clock() - GetCapturaTempo() > TEF )//frame 8
		{ SetFrame(16); SetCapturaTempo(clock()); }
		if( GetFrame() == 16 && clock() - GetCapturaTempo() > TEF )//frame 0
		{ SetFrame(8);  SetCapturaTempo(clock()); }
	}
}END_OF_FUNCTION(anim04);


void Terry::Anim05()//walkBack
{
	if( !GetStartAnimation() )
	{ SetFrame(17); SetStartAnimation(true); SetCapturaTempo(clock()); }//frame 0
	else
	{
		if( GetFrame() == 17 && clock() - GetCapturaTempo() > TEF )//frame 1
		{ SetFrame(18); SetCapturaTempo(clock()); }
		if( GetFrame() == 18 && clock() - GetCapturaTempo() > TEF )//frame 2
		{ SetFrame(19); SetCapturaTempo(clock()); }
		if( GetFrame() == 19 && clock() - GetCapturaTempo() > TEF )//frame 3
		{ SetFrame(20); SetCapturaTempo(clock()); }
		if( GetFrame() == 20 && clock() - GetCapturaTempo() > TEF )//frame 4
		{ SetFrame(21); SetCapturaTempo(clock()); }
		if( GetFrame() == 21 && clock() - GetCapturaTempo() > TEF )//frame 5
		{ SetFrame(22); SetCapturaTempo(clock()); }
		if( GetFrame() == 22 && clock() - GetCapturaTempo() > TEF )//frame 6
		{ SetFrame(23); SetCapturaTempo(clock()); }
		if( GetFrame() == 23 && clock() - GetCapturaTempo() > TEF )//frame 7
		{ SetFrame(24); SetCapturaTempo(clock()); }
		if( GetFrame() == 24 && clock() - GetCapturaTempo() > TEF )//frame 8
		{ SetFrame(25); SetCapturaTempo(clock()); }
		if( GetFrame() == 25 && clock() - GetCapturaTempo() > TEF )//frame 0
		{ SetFrame(17); SetCapturaTempo(clock()); }
	}
}END_OF_FUNCTION(anim05);

void Terry::Anim06()//rising 
{
	if( !GetStartAnimation() )
	{ SetFrame(42); SetStartAnimation(true); SetCapturaTempo(clock()); }//frame 0

}END_OF_FUNCTION(anim06);


void Terry::Anim07()//endOfClimp
{
	if( !GetStartAnimation() )
	{ SetFrame(43); SetStartAnimation(true); SetCapturaTempo(clock()); }//frame 0
	else
	{
		if( GetFrame() == 43 && clock() - GetCapturaTempo() > TEF )//frame 1
		{ SetFrame(44); SetCapturaTempo(clock()); }
	}
}END_OF_FUNCTION(anim07);


void Terry::Anim08()//falling
{
	if( !GetStartAnimation() )
	{ SetFrame(45); SetStartAnimation(true); SetCapturaTempo(clock()); }//frame 0
	else
	{
		if( GetFrame() == 45 && clock() - GetCapturaTempo() > TEF )//frame 1
		{ SetFrame(46); SetCapturaTempo(clock()); }
	}
}END_OF_FUNCTION(anim08);


void Terry::Anim09()//fall
{
	if( !GetStartAnimation() )
	{ SetFrame(47); SetStartAnimation(true); SetCapturaTempo(clock()); }//frame 0
	else
	{
		if( GetFrame() == 47 && clock() - GetCapturaTempo() > TEF )//frame 1
		{ SetFrame(48); SetCapturaTempo(clock()); }
		if( GetFrame() == 48 && clock() - GetCapturaTempo() > TEF )//frame 2
		{ SetFrame(49); SetCapturaTempo(clock()); }
		if( GetFrame() == 49 && clock() - GetCapturaTempo() > TEF )//frame 3
		{ SetFrame(50); SetCapturaTempo(clock()); }
	}
}END_OF_FUNCTION(anim09);


void Terry::Anim10()//strongFrontalDiagonalJump
{
	if( !GetStartAnimation() )
	{ SetFrame(51); SetStartAnimation(true); SetCapturaTempo(clock()); }//frame 0
	else
	{
		if( GetFrame() == 51 && clock() - GetCapturaTempo() > TEF-20 )//frame 1
		{ SetFrame(52); SetCapturaTempo(clock()); }
		if( GetFrame() == 52 && clock() - GetCapturaTempo() > TEF-20 )//frame 2
		{ SetFrame(53); SetCapturaTempo(clock()); }
		if( GetFrame() == 53 && clock() - GetCapturaTempo() > TEF-20 )//frame 3
		{ SetFrame(54); SetCapturaTempo(clock()); }
		if( GetFrame() == 54 && clock() - GetCapturaTempo() > TEF-20 )//frame 4
		{ SetFrame(55); SetCapturaTempo(clock()); }
		if( GetFrame() == 55 && clock() - GetCapturaTempo() > TEF-20 )//frame 5
		{ SetFrame(56); SetCapturaTempo(clock()); }
		if( GetFrame() == 56 && clock() - GetCapturaTempo() > TEF-20 )//frame 6
		{ SetFrame(57); SetCapturaTempo(clock()); }
		if( GetFrame() == 57 && clock() - GetCapturaTempo() > TEF-20 )//frame 7
		{ SetFrame(58); SetCapturaTempo(clock()); }
		if( GetFrame() == 58 && clock() - GetCapturaTempo() > TEF-20 )//frame 8
		{ SetFrame(59); SetCapturaTempo(clock()); }
	}
}END_OF_FUNCTION(anim10);


void Terry::Anim11()//strongBackDiagonalJump
{
	if( !GetStartAnimation() )
	{ SetFrame(60); SetStartAnimation(true); SetCapturaTempo(clock()); }//frame 0
	else
	{
		if( GetFrame() == 60 && clock() - GetCapturaTempo() > TEF-20 )//frame 1
		{ SetFrame(61); SetCapturaTempo(clock()); }
		if( GetFrame() == 61 && clock() - GetCapturaTempo() > TEF-20 )//frame 2
		{ SetFrame(62); SetCapturaTempo(clock()); }
		if( GetFrame() == 62 && clock() - GetCapturaTempo() > TEF-20 )//frame 3
		{ SetFrame(63); SetCapturaTempo(clock()); }
		if( GetFrame() == 63 && clock() - GetCapturaTempo() > TEF-20 )//frame 4
		{ SetFrame(64); SetCapturaTempo(clock()); }
		if( GetFrame() == 64 && clock() - GetCapturaTempo() > TEF-20 )//frame 5
		{ SetFrame(65); SetCapturaTempo(clock()); }
		if( GetFrame() == 65 && clock() - GetCapturaTempo() > TEF-20 )//frame 6
		{ SetFrame(66); SetCapturaTempo(clock()); }
		if( GetFrame() == 66 && clock() - GetCapturaTempo() > TEF-20 )//frame 7
		{ SetFrame(67); SetCapturaTempo(clock()); }
	}
}END_OF_FUNCTION(Anim11);


void Terry::Anim12()//run
{
	if( !GetStartAnimation() )
	{ SetFrame(26); SetStartAnimation(true); SetCapturaTempo(clock()); }//frame 0
	else
	{
		if( GetFrame() == 26 && clock() - GetCapturaTempo() > TEF-20 )//frame 1
		{ SetFrame(27); SetCapturaTempo(clock()); }
		if( GetFrame() == 27 && clock() - GetCapturaTempo() > TEF-20 )//frame 2
		{ SetFrame(28); SetCapturaTempo(clock()); }
		if( GetFrame() == 28 && clock() - GetCapturaTempo() > TEF-20 )//frame 3
		{ SetFrame(29); SetCapturaTempo(clock()); }
		if( GetFrame() == 29 && clock() - GetCapturaTempo() > TEF-20 )//frame 4
		{ SetFrame(30); SetCapturaTempo(clock()); }
		if( GetFrame() == 30 && clock() - GetCapturaTempo() > TEF-20 )//frame 5
		{ SetFrame(31); SetCapturaTempo(clock()); }
		if( GetFrame() == 31 && clock() - GetCapturaTempo() > TEF-20 )//frame 6
		{ SetFrame(32); SetCapturaTempo(clock()); }
		if( GetFrame() == 32 && clock() - GetCapturaTempo() > TEF-20 )//frame 7
		{ SetFrame(33); SetCapturaTempo(clock()); }
		if( GetFrame() == 33 && clock() - GetCapturaTempo() > TEF-20 )//frame 8
		{ SetFrame(34); SetCapturaTempo(clock()); }
		if( GetFrame() == 34 && clock() - GetCapturaTempo() > TEF-20 )//frame 1
		{ SetFrame(27); SetCapturaTempo(clock()); }
	}
}END_OF_FUNCTION(Anim12);


void Terry::Anim13()//jumpingBack
{
	if( !GetStartAnimation() )
	{ SetFrame(35); SetStartAnimation(true); SetCapturaTempo(clock()); }//frame 0
	else
	{
		if( GetFrame() == 35 && clock() - GetCapturaTempo() > TEF+50 )//frame 1
		{ SetFrame(36); SetCapturaTempo(clock()); }
		if( GetFrame() == 36 && clock() - GetCapturaTempo() > TEF+50 )//frame 2
		{ SetFrame(37); SetCapturaTempo(clock()); }
	}
}END_OF_FUNCTION(Anim13);


void Terry::Anim14()//fall
{
	if( !GetStartAnimation() )
	{ SetFrame(38); SetStartAnimation(true); SetCapturaTempo(clock()); }//frame 0
	else
	{
		if( GetFrame() == 38 && clock() - GetCapturaTempo() > TEF+50 )//frame 1
		{ SetFrame(39); SetCapturaTempo(clock()); }
	}
}END_OF_FUNCTION(Anim14);


void Terry::Anim25()//slide
{
	if( !GetStartAnimation() )
	{ SetFrame(74); SetStartAnimation(true); SetCapturaTempo(clock()); }//frame 0
	else
	{
		if( GetFrame() == 74 && clock() - GetCapturaTempo() > TEF)//frame 1
		{ SetFrame(75); SetCapturaTempo(clock()); }
		if( GetFrame() == 75 && clock() - GetCapturaTempo() > TEF)//frame 2
		{ SetFrame(76); SetCapturaTempo(clock()); }
		if( GetFrame() == 76 && clock() - GetCapturaTempo() > TEF)//frame 3
		{ SetFrame(77); SetCapturaTempo(clock()); }
	}
}END_OF_FUNCTION(Anim25);









