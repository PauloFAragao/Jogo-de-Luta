#include <allegro.h>
#include "Interface.h"

#define TEF 120			//tempo entre os frames


void Interface::AnimControl()
{
	if( !startAnimation )//frame 0
	{ frame = 0; startAnimation = true; capturaTempo = clock(); }
	if(startAnimation)
	{
		if( frame == 0 && clock() - capturaTempo > TEF )//frame 1
		{ frame = 1; capturaTempo = clock(); }
		if( frame == 1 && clock() - capturaTempo > TEF )//frame 2
		{ frame = 2; capturaTempo = clock(); }
		if( frame == 2 && clock() - capturaTempo > TEF )//frame 3
		{ frame = 3; capturaTempo = clock(); }
		if( frame == 3 && clock() - capturaTempo > TEF )//frame 4
		{ frame = 4; capturaTempo = clock(); }
		if( frame == 4 && clock() - capturaTempo > TEF )//frame 5
		{ frame = 5; capturaTempo = clock(); }
		if( frame == 5 && clock() - capturaTempo > TEF )//frame 6
		{ frame = 6; capturaTempo = clock(); }
		if( frame == 6 && clock() - capturaTempo > TEF )//frame 0
		{ frame = 0; capturaTempo = clock(); }	
	}
}END_OF_FUNCTION(AnimControl);


void Interface::TimerControl()
{
	int elapsedTime = clock()/1000;
	switch(elapsedTime)
	{
		case 0://caso 60 segundos
			unitTime = 0;
			tenTime  = 6;
			if( clock() < 25 ) 			unitTimeAnimFrame = 0;
			else if( clock() < 050 )	unitTimeAnimFrame = 1;
			else if( clock() < 075 )	unitTimeAnimFrame = 2;
			else if( clock() < 100 )	unitTimeAnimFrame = 3;
		break;
	
		case 1://caso 59 segundos
			unitTime = 9;
			tenTime  = 5;
			if( clock() < 1025 ) 		unitTimeAnimFrame = 0;
			else if( clock() < 1050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 1075 )	unitTimeAnimFrame = 2;
			else if( clock() < 1100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 2://caso 58 segundos
			unitTime = 8;
			tenTime  = 5;
			if( clock() < 2025 ) 		unitTimeAnimFrame = 0;
			else if( clock() < 2050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 2075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 2100 ) 	unitTimeAnimFrame = 3;
		break;
		
		case 3://caso 57 segundos
			unitTime = 7;
			tenTime  = 5;
			if( clock() < 3025 ) 		unitTimeAnimFrame = 0;
			else if( clock() < 3050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 3075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 3100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 4://caso 56 segundos
			unitTime = 6;
			tenTime  = 5;
			if( clock() < 4025 ) 		unitTimeAnimFrame = 0;
			else if( clock() < 4050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 4075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 4100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 5://caso 55 segundos
			unitTime = 5;
			tenTime  = 5;
			if( clock() < 5025 ) 		unitTimeAnimFrame = 0;
			else if( clock() < 5050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 5075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 5100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 6://caso 54 segundos
			unitTime = 4;
			tenTime  = 5;
			if( clock() < 6025 ) 		unitTimeAnimFrame = 0;
			else if( clock() < 6050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 6075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 6100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 7://caso 53 segundos
			unitTime = 3;
			tenTime  = 5;
			if( clock() < 7025 ) 		unitTimeAnimFrame = 0;
			else if( clock() < 7050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 7075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 7100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 8://caso 52 segundos
			unitTime = 2;
			tenTime  = 5;
			if( clock() < 8025 ) 		unitTimeAnimFrame = 0;
			else if( clock() < 8050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 8075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 8100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 9://caso 51 segundos
			unitTime = 1;
			tenTime  = 5;
			if( clock() < 9025 ) 		unitTimeAnimFrame = 0;
			else if( clock() < 9050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 9075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 9100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 10://caso 50 segundos
			unitTime = 0;
			tenTime  = 5;
			if( clock() < 10025 ) 		unitTimeAnimFrame = 0;
			else if( clock() < 10050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 10075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 10100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 11://caso 49 segundos
			unitTime = 9;
			tenTime  = 4;
			if( clock() < 11025) 		{ unitTimeAnimFrame = 0; tenTimeAnimFrame=0; }
			else if( clock() < 11050 ) 	{ unitTimeAnimFrame = 1; tenTimeAnimFrame=1; }
			else if( clock() < 11075 ) 	{ unitTimeAnimFrame = 2; tenTimeAnimFrame=2; }
			else if( clock() < 11100 ) 	{ unitTimeAnimFrame = 3; tenTimeAnimFrame=3; }
		break;
	
		case 12://caso 48 segundos
			unitTime = 8;
			tenTime  = 4;
			if( clock() < 12025 ) 		unitTimeAnimFrame = 0;
			else if( clock() < 12050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 12075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 12100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 13://caso 47 segundos
			unitTime = 7;
			tenTime  = 4;
			if( clock() < 13025 ) 		unitTimeAnimFrame = 0;
			else if( clock() < 13050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 13075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 13100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 14://caso 46 segundos
			unitTime = 6;
			tenTime  = 4;
			if( clock() < 14025 ) 		unitTimeAnimFrame = 0;
			else if( clock() < 14050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 14075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 14100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 15://caso 45 segundos
			unitTime = 5;
			tenTime  = 4;
			if( clock() < 15025) 		unitTimeAnimFrame = 0;
			else if( clock() < 15050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 15075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 15100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 16://caso 44 segundos
			unitTime = 4;
			tenTime  = 4;
			if( clock() < 16025) 		unitTimeAnimFrame = 0;
			else if( clock() < 16050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 16075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 16100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 17://caso 43 segundos
			unitTime = 3;
			tenTime  = 4;
			if( clock() < 17025) 		unitTimeAnimFrame = 0;
			else if( clock() < 17050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 17075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 17100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 18://caso 42 segundos
			unitTime = 2;
			tenTime  = 4;
			if( clock() < 18025) 		unitTimeAnimFrame = 0;
			else if( clock() < 18050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 18075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 18100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 19://caso 41 segundos
			unitTime = 1;
			tenTime  = 4;
			if( clock() < 19025) 		unitTimeAnimFrame = 0;
			else if( clock() < 19050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 19075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 19100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 20://caso 40 segundos
			unitTime = 0;
			tenTime  = 4;
			if( clock() < 20025) 		unitTimeAnimFrame = 0;
			else if( clock() < 20050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 20075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 20100 ) 	unitTimeAnimFrame = 3;
		break;	
	
		case 21://caso 39 segundos
			unitTime = 9;
			tenTime  = 3;
			if( clock() < 21025) 		{ unitTimeAnimFrame = 0; tenTimeAnimFrame=0; }
			else if( clock() < 21050 ) 	{ unitTimeAnimFrame = 1; tenTimeAnimFrame=1; }
			else if( clock() < 21075 ) 	{ unitTimeAnimFrame = 2; tenTimeAnimFrame=2; }
			else if( clock() < 21100 ) 	{ unitTimeAnimFrame = 3; tenTimeAnimFrame=3; }
		break;
		
		case 22://caso 38 segundos
			unitTime = 8;
			tenTime  = 3;
			if( clock() < 22025) 		unitTimeAnimFrame = 0;
			else if( clock() < 22050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 22075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 22100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 23://caso 37 segundos
			unitTime = 7;
			tenTime  = 3;
			if( clock() < 23025) 		unitTimeAnimFrame = 0;
			else if( clock() < 23050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 23075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 23100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 24://caso 36 segundos
			unitTime = 6;
			tenTime  = 3;
			if( clock() < 24025) 		unitTimeAnimFrame = 0;
			else if( clock() < 24050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 24075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 24100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 25://caso 35 segundos
			unitTime = 5;
			tenTime  = 3;
			if( clock() < 25025) 		unitTimeAnimFrame = 0;
			else if( clock() < 25050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 25075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 25100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 26://caso 34 segundos
			unitTime = 4;
			tenTime  = 3;
			if( clock() < 26025) 		unitTimeAnimFrame = 0;
			else if( clock() < 26050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 26075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 26100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 27://caso 33 segundos
			unitTime = 3;
			tenTime  = 3;
			if( clock() < 27025) 		unitTimeAnimFrame = 0;
			else if( clock() < 27050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 27075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 27100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 28://caso 32 segundos
			unitTime = 2;
			tenTime  = 3;
			if( clock() < 28025) 		unitTimeAnimFrame = 0;
			else if( clock() < 28050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 28075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 28100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 29://caso 31 segundos
			unitTime = 1;
			tenTime  = 3;
			if( clock() < 29025) 		unitTimeAnimFrame = 0;
			else if( clock() < 29050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 29075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 29100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 30://caso 30 segundos
			unitTime = 0;
			tenTime  = 3;
			if( clock() < 30025) 		unitTimeAnimFrame = 0;
			else if( clock() < 30050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 30075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 30100 ) 	unitTimeAnimFrame = 3;
		break;	
	
		case 31://caso 29 segundos
			unitTime = 9;
			tenTime  = 2;
			if( clock() < 31025) 		{ unitTimeAnimFrame = 0; tenTimeAnimFrame=0; }
			else if( clock() < 31050 ) 	{ unitTimeAnimFrame = 1; tenTimeAnimFrame=1; }
			else if( clock() < 31075 ) 	{ unitTimeAnimFrame = 2; tenTimeAnimFrame=2; }
			else if( clock() < 31100 ) 	{ unitTimeAnimFrame = 3; tenTimeAnimFrame=3; }
		break;
		
		case 32://caso 28 segundos
			unitTime = 8;
			tenTime  = 2;
			if( clock() < 32025) 		unitTimeAnimFrame = 0;
			else if( clock() < 32050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 32075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 32100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 33://caso 27 segundos
			unitTime = 7;
			tenTime  = 2;
			if( clock() < 33025) 		unitTimeAnimFrame = 0;
			else if( clock() < 33050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 33075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 33100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 34://caso 26 segundos
			unitTime = 6;
			tenTime  = 2;
			if( clock() < 34025) 		unitTimeAnimFrame = 0;
			else if( clock() < 34050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 34075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 34100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 35://caso 25 segundos
			unitTime = 5;
			tenTime  = 2;
			if( clock() < 35025) 		unitTimeAnimFrame = 0;
			else if( clock() < 35050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 35075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 35100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 36://caso 24 segundos
			unitTime = 4;
			tenTime  = 2;
			if( clock() < 36025) 		unitTimeAnimFrame = 0;
			else if( clock() < 36050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 36075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 36100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 37://caso 23 segundos
			unitTime = 3;
			tenTime  = 2;
			if( clock() < 37025) 		unitTimeAnimFrame = 0;
			else if( clock() < 37050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 37075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 37100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 38://caso 22 segundos
			unitTime = 2;
			tenTime  = 2;
			if( clock() < 38025) 		unitTimeAnimFrame = 0;
			else if( clock() < 38050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 38075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 38100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 39://caso 21 segundos
			unitTime = 1;
			tenTime  = 2;
			if( clock() < 39025) 		unitTimeAnimFrame = 0;
			else if( clock() < 39050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 39075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 39100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 40://caso 20 segundos
			unitTime = 0;
			tenTime  = 2;
			if( clock() < 40025) 		unitTimeAnimFrame = 0;
			else if( clock() < 40050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 40075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 40100 ) 	unitTimeAnimFrame = 3;
		break;	
	
		case 41://caso 19 segundos
			unitTime = 9;
			tenTime  = 1;
			if( clock() < 41025) 		{ unitTimeAnimFrame = 0; tenTimeAnimFrame=0; }
			else if( clock() < 41050 ) 	{ unitTimeAnimFrame = 1; tenTimeAnimFrame=1; }
			else if( clock() < 41075 ) 	{ unitTimeAnimFrame = 2; tenTimeAnimFrame=2; }
			else if( clock() < 41100 ) 	{ unitTimeAnimFrame = 3; tenTimeAnimFrame=3; }
		break;
		
		case 42://caso 18 segundos
			unitTime = 8;
			tenTime  = 1;
			if( clock() < 42025) 		unitTimeAnimFrame = 0;
			else if( clock() < 42050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 42075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 42100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 43://caso 17 segundos
			unitTime = 7;
			tenTime  = 1;
			if( clock() < 43025) 		unitTimeAnimFrame = 0;
			else if( clock() < 43050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 43075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 43100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 44://caso 16 segundos
			unitTime = 6;
			tenTime  = 1;
			if( clock() < 44025) 		unitTimeAnimFrame = 0;
			else if( clock() < 44050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 44075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 44100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 45://caso 15 segundos
			unitTime = 5;
			tenTime  = 1;
			if( clock() < 45025) 		unitTimeAnimFrame = 0;
			else if( clock() < 45050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 45075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 45100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 46://caso 14 segundos
			unitTime = 4;
			tenTime  = 1;
			if( clock() < 46025) 		unitTimeAnimFrame = 0;
			else if( clock() < 46050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 46075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 46100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 47://caso 13 segundos
			unitTime = 3;
			tenTime  = 1;
			if( clock() < 47025) 		unitTimeAnimFrame = 0;
			else if( clock() < 47050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 47075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 47100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 48://caso 12 segundos
			unitTime = 2;
			tenTime  = 1;
			if( clock() < 48025) 		unitTimeAnimFrame = 0;
			else if( clock() < 48050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 48075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 48100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 49://caso 11 segundos
			unitTime = 1;
			tenTime  = 1;
			if( clock() < 49025) 		unitTimeAnimFrame = 0;
			else if( clock() < 49050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 49075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 49100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 50://caso 10 segundos
			unitTime = 0;
			tenTime  = 1;
			if( clock() < 50025) 		unitTimeAnimFrame = 0;
			else if( clock() < 50050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 50075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 50100 ) 	unitTimeAnimFrame = 3;
		break;	
	
		case 51://caso 09 segundos
			unitTime = 9;
			tenTime  = 0;
			if( clock() < 51025) 		{ unitTimeAnimFrame = 0; tenTimeAnimFrame=0; }
			else if( clock() < 51050 ) 	{ unitTimeAnimFrame = 1; tenTimeAnimFrame=1; }
			else if( clock() < 51075 ) 	{ unitTimeAnimFrame = 2; tenTimeAnimFrame=2; }
			else if( clock() < 51100 ) 	{ unitTimeAnimFrame = 3; tenTimeAnimFrame=3; }
		break;
		
		case 52://caso 08 segundos
			unitTime = 8;
			tenTime  = 0;
			if( clock() < 52025) 		unitTimeAnimFrame = 0;
			else if( clock() < 52050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 52075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 52100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 53://caso 07 segundos
			unitTime = 7;
			tenTime  = 0;
			if( clock() < 53025) 		unitTimeAnimFrame = 0;
			else if( clock() < 53050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 53075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 53100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 54://caso 06 segundos
			unitTime = 6;
			tenTime  = 0;
			if( clock() < 54025) 		unitTimeAnimFrame = 0;
			else if( clock() < 54050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 54075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 54100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 55://caso 05 segundos
			unitTime = 5;
			tenTime  = 0;
			if( clock() < 55025) 		unitTimeAnimFrame = 0;
			else if( clock() < 55050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 55075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 55100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 56://caso 14 segundos
			unitTime = 4;
			tenTime  = 0;
			if( clock() < 56025) 		unitTimeAnimFrame = 0;
			else if( clock() < 56050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 56075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 56100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 57://caso 03 segundos
			unitTime = 3;
			tenTime  = 0;
			if( clock() < 57025) 		unitTimeAnimFrame = 0;
			else if( clock() < 57050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 57075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 57100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 58://caso 02 segundos
			unitTime = 2;
			tenTime  = 0;
			if( clock() < 58025) 		unitTimeAnimFrame = 0;
			else if( clock() < 58050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 58075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 58100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 59://caso 01 segundos
			unitTime = 1;
			tenTime  = 0;
			if( clock() < 59025) 		unitTimeAnimFrame = 0;
			else if( clock() < 59050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 59075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 59100 ) 	unitTimeAnimFrame = 3;
		break;
	
		case 60://caso 00 segundos
			unitTime = 0;
			tenTime  = 0;
			if( clock() < 60025) 		unitTimeAnimFrame = 0;
			else if( clock() < 60050 ) 	unitTimeAnimFrame = 1;
			else if( clock() < 60075 ) 	unitTimeAnimFrame = 2;
			else if( clock() < 60100 ) 	unitTimeAnimFrame = 3;
		break;
	}
}END_OF_FUNCTION(TimerControl);









