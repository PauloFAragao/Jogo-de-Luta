#include <allegro.h>
#include "Terry.h"


/**
 * Carrega os sprites do personagem Terry
 */
void Terry::LoadSprites()
{
	
//Sprites do personagem virado para a direita
	
	//idle
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00Idle/idle000.bmp", NULL), 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00Idle/idle001.bmp", NULL), 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00Idle/idle002.bmp", NULL), 2 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00Idle/idle003.bmp", NULL), 3 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00Idle/idle004.bmp", NULL), 4 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00Idle/idle005.bmp", NULL), 5 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00Idle/idle006.bmp", NULL), 6 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00Idle/idle007.bmp", NULL), 7 );//frame 7
	
	//walk
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04Walk/walk00.bmp", NULL), 8 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04Walk/walk01.bmp", NULL), 9 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04Walk/walk02.bmp", NULL), 10);//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04Walk/walk03.bmp", NULL), 11);//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04Walk/walk04.bmp", NULL), 12);//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04Walk/walk05.bmp", NULL), 13);//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04Walk/walk06.bmp", NULL), 14);//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04Walk/walk07.bmp", NULL), 15);//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04Walk/walk08.bmp", NULL), 16);//frame 8
	
	//walkBack
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05WalkBack/WalkBack00.bmp", NULL), 17);//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05WalkBack/WalkBack01.bmp", NULL), 18);//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05WalkBack/WalkBack02.bmp", NULL), 19);//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05WalkBack/WalkBack03.bmp", NULL), 20);//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05WalkBack/WalkBack04.bmp", NULL), 21);//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05WalkBack/WalkBack05.bmp", NULL), 22);//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05WalkBack/WalkBack06.bmp", NULL), 23);//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05WalkBack/WalkBack07.bmp", NULL), 24);//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05WalkBack/WalkBack08.bmp", NULL), 25);//frame 8
	
	//run
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12Run/run00.bmp", NULL), 26);//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12Run/run01.bmp", NULL), 27);//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12Run/run02.bmp", NULL), 28);//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12Run/run03.bmp", NULL), 29);//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12Run/run04.bmp", NULL), 30);//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12Run/run05.bmp", NULL), 31);//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12Run/run06.bmp", NULL), 32);//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12Run/run07.bmp", NULL), 33);//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12Run/run08.bmp", NULL), 34);//frame 8
	
	//jumpBack
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/13jumpBack/jumpBack00.bmp", NULL), 35);//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/13jumpBack/jumpBack01.bmp", NULL), 36);//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/13jumpBack/jumpBack02.bmp", NULL), 37);//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/13jumpBack/jumpBack03.bmp", NULL), 38);//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/13jumpBack/jumpBack04.bmp", NULL), 39);//frame 4
	
	//crouching 
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/01crouching/crouching00.bmp", NULL), 40);//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/01crouching/crouching01.bmp", NULL), 41);//frame 1
	
	//rising
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/06rising/jump00.bmp", NULL), 42);//frame 0
	
	//endOfClimp
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/07endOfClimp/endOfClimp00.bmp", NULL), 43);//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/07endOfClimp/endOfClimp01.bmp", NULL), 44);//frame 1
	
	//falling
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/08falling/falling00.bmp", NULL), 45);//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/08falling/falling01.bmp", NULL), 46);//frame 1
	
	//fall
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/09fall/fall00.bmp", NULL), 47);//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/09fall/fall01.bmp", NULL), 48);//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/09fall/fall02.bmp", NULL), 49);//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/09fall/fall03.bmp", NULL), 50);//frame 3
	
	//strongFrontalDiagonalJump
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/strongFrontalDiagonalJump00.bmp", NULL), 51);//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/strongFrontalDiagonalJump01.bmp", NULL), 52);//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/strongFrontalDiagonalJump02.bmp", NULL), 53);//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/strongFrontalDiagonalJump03.bmp", NULL), 54);//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/strongFrontalDiagonalJump04.bmp", NULL), 55);//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/strongFrontalDiagonalJump05.bmp", NULL), 56);//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/strongFrontalDiagonalJump06.bmp", NULL), 57);//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/strongFrontalDiagonalJump07.bmp", NULL), 58);//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/strongFrontalDiagonalJump08.bmp", NULL), 59);//frame 8
	
	//strongBackDiagonalJump
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/strongBackDiagonalJump00.bmp", NULL), 60);//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/strongBackDiagonalJump01.bmp", NULL), 61);//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/strongBackDiagonalJump02.bmp", NULL), 62);//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/strongBackDiagonalJump03.bmp", NULL), 63);//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/strongBackDiagonalJump04.bmp", NULL), 64);//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/strongBackDiagonalJump05.bmp", NULL), 65);//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/strongBackDiagonalJump06.bmp", NULL), 66);//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/strongBackDiagonalJump07.bmp", NULL), 67);//frame 7
	
	//crouchedIdle
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/02crouchedIdle/crouchedIdle00.bmp", NULL), 68);//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/02crouchedIdle/crouchedIdle01.bmp", NULL), 69);//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/02crouchedIdle/crouchedIdle02.bmp", NULL), 70);//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/02crouchedIdle/crouchedIdle03.bmp", NULL), 71);//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/02crouchedIdle/crouchedIdle04.bmp", NULL), 72);//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/02crouchedIdle/crouchedIdle05.bmp", NULL), 73);//frame 5
	
	//slide
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/25slide/slide00.bmp", NULL), 74);//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/25slide/slide01.bmp", NULL), 75);//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/25slide/slide02.bmp", NULL), 76);//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/25slide/slide03.bmp", NULL), 77);//frame 3
	
	//defending
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/15defending/defending00.bmp", NULL), 78);//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/15defending/defending01.bmp", NULL), 79);//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/15defending/defending02.bmp", NULL), 80);//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/15defending/defending03.bmp", NULL), 81);//frame 3
	
	//defence
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/16defence/defence.bmp", NULL), 82);//frame 0
	
	//defendingCrouched
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/19defendingCrouched/crouchedDefend00.bmp", NULL), 83);//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/19defendingCrouched/crouchedDefend01.bmp", NULL), 84);//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/19defendingCrouched/crouchedDefend02.bmp", NULL), 85);//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/19defendingCrouched/crouchedDefend03.bmp", NULL), 86);//frame 3
	
	//defenceCrouched
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/20defenceCrouched/crouchedDefence.bmp", NULL), 87);//frame 0
	
	//frontRolling
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/23frontRolling/frontRolling00.bmp", NULL), 88);//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/23frontRolling/frontRolling01.bmp", NULL), 89);//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/23frontRolling/frontRolling02.bmp", NULL), 90);//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/23frontRolling/frontRolling03.bmp", NULL), 91);//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/23frontRolling/frontRolling04.bmp", NULL), 92);//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/23frontRolling/frontRolling05.bmp", NULL), 93);//frame 5

	
	//frontRollingEnd
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/23frontRolling/frontRolling06.bmp", NULL), 94);//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/23frontRolling/frontRolling07.bmp", NULL), 95);//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/23frontRolling/frontRolling08.bmp", NULL), 96);//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/23frontRolling/frontRolling09.bmp", NULL), 97);//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/23frontRolling/frontRolling10.bmp", NULL), 98);//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/23frontRolling/frontRolling11.bmp", NULL), 99);//frame 5
	
	//backRolling
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/backRolling00.bmp", NULL), 100);//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/backRolling01.bmp", NULL), 101);//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/backRolling02.bmp", NULL), 102);//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/backRolling03.bmp", NULL), 103);//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/backRolling04.bmp", NULL), 104);//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/backRolling05.bmp", NULL), 105);//frame 5
	
	//backRollingEnd
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/backRolling06.bmp", NULL), 106);//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/backRolling07.bmp", NULL), 107);//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/backRolling08.bmp", NULL), 108);//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/backRolling09.bmp", NULL), 109);//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/backRolling10.bmp", NULL), 110);//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/backRolling11.bmp", NULL), 111);//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/backRolling12.bmp", NULL), 112);//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/backRolling13.bmp", NULL), 113);//frame 7
	
	//takingDamage
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/17takingDamage/takingDamage00.bmp", NULL), 114);//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/17takingDamage/takingDamage01.bmp", NULL), 115);//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/17takingDamage/takingDamage02.bmp", NULL), 116);//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/17takingDamage/takingDamage03.bmp", NULL), 117);//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/17takingDamage/takingDamage04.bmp", NULL), 118);//frame 4
	
	//takingDamageCrouched
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/21takingDamageCrouched/takingDamageCrouched00.bmp", NULL), 119);//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/21takingDamageCrouched/takingDamageCrouched01.bmp", NULL), 120);//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/21takingDamageCrouched/takingDamageCrouched02.bmp", NULL), 121);//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/21takingDamageCrouched/takingDamageCrouched03.bmp", NULL), 122);//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/21takingDamageCrouched/takingDamageCrouched04.bmp", NULL), 123);//frame 4
	
	
	
//Sprites do personagem virado para a esquerda
	
	//idle
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/00Idle/idle000.bmp", NULL), 0 );//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/00Idle/idle001.bmp", NULL), 1 );//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/00Idle/idle002.bmp", NULL), 2 );//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/00Idle/idle003.bmp", NULL), 3 );//frame 3
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/00Idle/idle004.bmp", NULL), 4 );//frame 4
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/00Idle/idle005.bmp", NULL), 5 );//frame 5
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/00Idle/idle006.bmp", NULL), 6 );//frame 6
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/00Idle/idle007.bmp", NULL), 7 );//frame 7
	
	//walk
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04Walk/walk00.bmp", NULL), 8 );//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04Walk/walk01.bmp", NULL), 9 );//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04Walk/walk02.bmp", NULL), 10);//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04Walk/walk03.bmp", NULL), 11);//frame 3
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04Walk/walk04.bmp", NULL), 12);//frame 4
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04Walk/walk05.bmp", NULL), 13);//frame 5
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04Walk/walk06.bmp", NULL), 14);//frame 6
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04Walk/walk07.bmp", NULL), 15);//frame 7
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04Walk/walk08.bmp", NULL), 16);//frame 8
	
	//walkBack
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05WalkBack/WalkBack00.bmp", NULL), 17);//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05WalkBack/WalkBack01.bmp", NULL), 18);//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05WalkBack/WalkBack02.bmp", NULL), 19);//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05WalkBack/WalkBack03.bmp", NULL), 20);//frame 3
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05WalkBack/WalkBack04.bmp", NULL), 21);//frame 4
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05WalkBack/WalkBack05.bmp", NULL), 22);//frame 5
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05WalkBack/WalkBack06.bmp", NULL), 23);//frame 6
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05WalkBack/WalkBack07.bmp", NULL), 24);//frame 7
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05WalkBack/WalkBack08.bmp", NULL), 25);//frame 8
	
	//run
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12Run/run00.bmp", NULL), 26);//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12Run/run01.bmp", NULL), 27);//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12Run/run02.bmp", NULL), 28);//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12Run/run03.bmp", NULL), 29);//frame 3
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12Run/run04.bmp", NULL), 30);//frame 4
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12Run/run05.bmp", NULL), 31);//frame 5
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12Run/run06.bmp", NULL), 32);//frame 6
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12Run/run07.bmp", NULL), 33);//frame 7
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12Run/run08.bmp", NULL), 34);//frame 8
	
	//jumpBack
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/13jumpBack/jumpBack00.bmp", NULL), 35);//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/13jumpBack/jumpBack01.bmp", NULL), 36);//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/13jumpBack/jumpBack02.bmp", NULL), 37);//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/13jumpBack/jumpBack03.bmp", NULL), 38);//frame 3
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/13jumpBack/jumpBack04.bmp", NULL), 39);//frame 4
	
	//crouching 
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/01crouching/crouching00.bmp", NULL), 40);//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/01crouching/crouching01.bmp", NULL), 41);//frame 1
	
	//rising
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/06rising/jump00.bmp", NULL), 42);//frame 0
	
	//endOfClimp
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/07endOfClimp/endOfClimp00.bmp", NULL), 43);//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/07endOfClimp/endOfClimp01.bmp", NULL), 44);//frame 1
	
	//falling
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/08falling/falling00.bmp", NULL), 45);//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/08falling/falling01.bmp", NULL), 46);//frame 1
	
	//fall
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/09fall/fall00.bmp", NULL), 47);//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/09fall/fall01.bmp", NULL), 48);//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/09fall/fall02.bmp", NULL), 49);//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/09fall/fall03.bmp", NULL), 50);//frame 3
	
	//strongFrontalDiagonalJump
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/strongFrontalDiagonalJump00.bmp", NULL), 51);//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/strongFrontalDiagonalJump01.bmp", NULL), 52);//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/strongFrontalDiagonalJump02.bmp", NULL), 53);//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/strongFrontalDiagonalJump03.bmp", NULL), 54);//frame 3
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/strongFrontalDiagonalJump04.bmp", NULL), 55);//frame 4
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/strongFrontalDiagonalJump05.bmp", NULL), 56);//frame 5
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/strongFrontalDiagonalJump06.bmp", NULL), 57);//frame 6
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/strongFrontalDiagonalJump07.bmp", NULL), 58);//frame 7
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/strongFrontalDiagonalJump08.bmp", NULL), 59);//frame 8
	
	//strongBackDiagonalJump
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/strongBackDiagonalJump00.bmp", NULL), 60);//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/strongBackDiagonalJump01.bmp", NULL), 61);//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/strongBackDiagonalJump02.bmp", NULL), 62);//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/strongBackDiagonalJump03.bmp", NULL), 63);//frame 3
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/strongBackDiagonalJump04.bmp", NULL), 64);//frame 4
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/strongBackDiagonalJump05.bmp", NULL), 65);//frame 5
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/strongBackDiagonalJump06.bmp", NULL), 66);//frame 6
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/strongBackDiagonalJump07.bmp", NULL), 67);//frame 7
	
	//crouchedIdle
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/02crouchedIdle/crouchedIdle00.bmp", NULL), 68);//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/02crouchedIdle/crouchedIdle01.bmp", NULL), 69);//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/02crouchedIdle/crouchedIdle02.bmp", NULL), 70);//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/02crouchedIdle/crouchedIdle03.bmp", NULL), 71);//frame 3
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/02crouchedIdle/crouchedIdle04.bmp", NULL), 72);//frame 4
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/02crouchedIdle/crouchedIdle05.bmp", NULL), 73);//frame 5
	
	//slide
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/25slide/slide00.bmp", NULL), 74);//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/25slide/slide01.bmp", NULL), 75);//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/25slide/slide02.bmp", NULL), 76);//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/25slide/slide03.bmp", NULL), 77);//frame 3
	
	//defending
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/15defending/defending00.bmp", NULL), 78);//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/15defending/defending01.bmp", NULL), 79);//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/15defending/defending02.bmp", NULL), 80);//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/15defending/defending03.bmp", NULL), 81);//frame 3
	
	//defence
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/16defence/defence.bmp", NULL), 82);//frame 0
	
	//defendingCrouched
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/19defendingCrouched/crouchedDefend00.bmp", NULL), 83);//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/19defendingCrouched/crouchedDefend01.bmp", NULL), 84);//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/19defendingCrouched/crouchedDefend02.bmp", NULL), 85);//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/19defendingCrouched/crouchedDefend03.bmp", NULL), 86);//frame 3
	
	//defenceCrouched
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/20defenceCrouched/crouchedDefence.bmp", NULL), 87);//frame 0
	
	//frontRolling
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/23frontRolling/frontRolling00.bmp", NULL), 88);//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/23frontRolling/frontRolling01.bmp", NULL), 89);//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/23frontRolling/frontRolling02.bmp", NULL), 90);//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/23frontRolling/frontRolling03.bmp", NULL), 91);//frame 3
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/23frontRolling/frontRolling04.bmp", NULL), 92);//frame 4
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/23frontRolling/frontRolling05.bmp", NULL), 93);//frame 5

	
	//frontRollingEnd
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/23frontRolling/frontRolling06.bmp", NULL), 94);//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/23frontRolling/frontRolling07.bmp", NULL), 95);//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/23frontRolling/frontRolling08.bmp", NULL), 96);//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/23frontRolling/frontRolling09.bmp", NULL), 97);//frame 3
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/23frontRolling/frontRolling10.bmp", NULL), 98);//frame 4
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/23frontRolling/frontRolling11.bmp", NULL), 99);//frame 5
	
	//backRolling
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/backRolling00.bmp", NULL), 100);//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/backRolling01.bmp", NULL), 101);//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/backRolling02.bmp", NULL), 102);//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/backRolling03.bmp", NULL), 103);//frame 3
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/backRolling04.bmp", NULL), 104);//frame 4
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/backRolling05.bmp", NULL), 105);//frame 5
	
	//backRollingEnd
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/backRolling06.bmp", NULL), 106);//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/backRolling07.bmp", NULL), 107);//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/backRolling08.bmp", NULL), 108);//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/backRolling09.bmp", NULL), 109);//frame 3
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/backRolling10.bmp", NULL), 110);//frame 4
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/backRolling11.bmp", NULL), 111);//frame 5
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/backRolling12.bmp", NULL), 112);//frame 6
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/backRolling13.bmp", NULL), 113);//frame 7
	
	//takingDamage
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/17takingDamage/takingDamage00.bmp", NULL), 114);//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/17takingDamage/takingDamage01.bmp", NULL), 115);//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/17takingDamage/takingDamage02.bmp", NULL), 116);//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/17takingDamage/takingDamage03.bmp", NULL), 117);//frame 3
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/17takingDamage/takingDamage04.bmp", NULL), 118);//frame 4
	
	//takingDamageCrouched
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/21takingDamageCrouched/takingDamageCrouched00.bmp", NULL), 119);//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/21takingDamageCrouched/takingDamageCrouched01.bmp", NULL), 120);//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/21takingDamageCrouched/takingDamageCrouched02.bmp", NULL), 121);//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/21takingDamageCrouched/takingDamageCrouched03.bmp", NULL), 122);//frame 3
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/21takingDamageCrouched/takingDamageCrouched04.bmp", NULL), 123);//frame 4
	
	
	
}END_OF_FUNCTION(LoadSprites)












