#include <allegro.h>
#include "Terry.h"


/**
 * Carrega os sprites do personagem Terry
 */
void Terry::LoadSprites()
{
	
//Sprites do personagem virado para a direita
	//idle
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00idle/00.bmp", NULL), 0, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00idle/01.bmp", NULL), 1, 0);//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00idle/02.bmp", NULL), 2, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00idle/03.bmp", NULL), 3, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00idle/04.bmp", NULL), 4, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00idle/05.bmp", NULL), 5, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00idle/06.bmp", NULL), 6, 0 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00idle/07.bmp", NULL), 7, 0 );//frame 7
	
	//crouching
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/01crouching/00.bmp", NULL), 8, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/01crouching/01.bmp", NULL), 9, 0 );//frame 1
	
	//crouchedIdle
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/02crouchedIdle/00.bmp", NULL), 10, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/02crouchedIdle/01.bmp", NULL), 11, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/02crouchedIdle/02.bmp", NULL), 12, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/02crouchedIdle/03.bmp", NULL), 13, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/02crouchedIdle/04.bmp", NULL), 14, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/02crouchedIdle/05.bmp", NULL), 15, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/02crouchedIdle/06.bmp", NULL), 16, 0 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/02crouchedIdle/07.bmp", NULL), 17, 0 );//frame 7
	
	//walk
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04walk/00.bmp", NULL), 18, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04walk/01.bmp", NULL), 19, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04walk/02.bmp", NULL), 20, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04walk/03.bmp", NULL), 21, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04walk/04.bmp", NULL), 22, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04walk/05.bmp", NULL), 23, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04walk/06.bmp", NULL), 24, 0 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04walk/07.bmp", NULL), 25, 0 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04walk/08.bmp", NULL), 26, 0 );//frame 8
	
	//walkBack
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05walkBack/00.bmp", NULL), 27, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05walkBack/01.bmp", NULL), 28, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05walkBack/02.bmp", NULL), 29, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05walkBack/03.bmp", NULL), 30, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05walkBack/04.bmp", NULL), 31, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05walkBack/05.bmp", NULL), 32, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05walkBack/06.bmp", NULL), 33, 0 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05walkBack/07.bmp", NULL), 34, 0 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05walkBack/08.bmp", NULL), 35, 0 );//frame 8
	
	//rising
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/06rising/00.bmp", NULL), 36, 0 );//frame 0
	
	//endOfClimp
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/07endOfClimp/00.bmp", NULL), 37, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/07endOfClimp/01.bmp", NULL), 38, 0 );//frame 1
	
	//falling
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/08falling/00.bmp", NULL), 39, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/08falling/01.bmp", NULL), 40, 0 );//frame 1
	
	//fall
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/09fall/00.bmp", NULL), 41, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/09fall/01.bmp", NULL), 42, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/09fall/02.bmp", NULL), 43, 0 );//frame 2
	
	//strongFrontalDiagonalJump
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/00.bmp", NULL), 44, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/01.bmp", NULL), 45, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/02.bmp", NULL), 46, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/03.bmp", NULL), 47, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/04.bmp", NULL), 48, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/05.bmp", NULL), 49, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/06.bmp", NULL), 50, 0 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/07.bmp", NULL), 51, 0 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/08.bmp", NULL), 52, 0 );//frame 8
	
	//strongBackDiagonalJump
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/00.bmp", NULL), 53, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/01.bmp", NULL), 54, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/02.bmp", NULL), 55, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/03.bmp", NULL), 56, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/04.bmp", NULL), 57, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/05.bmp", NULL), 58, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/06.bmp", NULL), 59, 0 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/07.bmp", NULL), 60, 0 );//frame 7
	
	//run
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12run/00.bmp", NULL), 61, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12run/01.bmp", NULL), 62, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12run/02.bmp", NULL), 63, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12run/03.bmp", NULL), 64, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12run/04.bmp", NULL), 65, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12run/05.bmp", NULL), 66, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12run/06.bmp", NULL), 67, 0 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12run/07.bmp", NULL), 68, 0 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12run/08.bmp", NULL), 69, 0 );//frame 8
	
	//jumpingBack
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/13jumpingBack/00.bmp", NULL), 70, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/13jumpingBack/01.bmp", NULL), 71, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/13jumpingBack/02.bmp", NULL), 72, 0 );//frame 2
	
	//jumpingBackFall
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/14jumpingBackFall/00.bmp", NULL), 73, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/14jumpingBackFall/01.bmp", NULL), 74, 0 );//frame 1
	
	//defending
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/15defending/00.bmp", NULL), 75, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/15defending/01.bmp", NULL), 76, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/15defending/02.bmp", NULL), 77, 0 );//frame 2
	
	//defence
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/16defence/00.bmp", NULL), 78, 0 );//frame 0
	
	//takingDamage
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/17takingDamage/00.bmp", NULL), 79, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/17takingDamage/01.bmp", NULL), 80, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/17takingDamage/02.bmp", NULL), 81, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/17takingDamage/03.bmp", NULL), 82, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/17takingDamage/04.bmp", NULL), 83, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/17takingDamage/05.bmp", NULL), 84, 0 );//frame 5
	
	//defendingCrouched
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/19defendingCrouched/00.bmp", NULL), 85, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/19defendingCrouched/01.bmp", NULL), 86, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/19defendingCrouched/02.bmp", NULL), 87, 0 );//frame 2
	
	//defenceCrouched
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/20defenceCrouched/00.bmp", NULL), 88, 0 );//frame 0
	
	//takingDamageCrouched
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/21takingDamageCrouched/00.bmp", NULL), 89, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/21takingDamageCrouched/01.bmp", NULL), 90, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/21takingDamageCrouched/02.bmp", NULL), 91, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/21takingDamageCrouched/03.bmp", NULL), 92, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/21takingDamageCrouched/04.bmp", NULL), 93, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/21takingDamageCrouched/05.bmp", NULL), 94, 0 );//frame 5
	
	//frontRolling
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/23frontRolling/00.bmp", NULL), 95, 0  );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/23frontRolling/01.bmp", NULL), 96, 0  );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/23frontRolling/02.bmp", NULL), 97, 0  );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/23frontRolling/03.bmp", NULL), 98, 0  );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/23frontRolling/04.bmp", NULL), 99, 0  );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/23frontRolling/05.bmp", NULL), 100, 0 );//frame 5
	
	//backRolling
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/00.bmp", NULL), 101, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/01.bmp", NULL), 102, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/02.bmp", NULL), 103, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/03.bmp", NULL), 104, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/04.bmp", NULL), 105, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/05.bmp", NULL), 106, 0 );//frame 5
	
	//slide
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/25slide/00.bmp", NULL), 107, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/25slide/01.bmp", NULL), 108, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/25slide/02.bmp", NULL), 109, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/25slide/03.bmp", NULL), 110, 0 );//frame 3
	
	//frontRollingEnd
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/26frontRollingEnd/00.bmp", NULL), 111, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/26frontRollingEnd/01.bmp", NULL), 112, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/26frontRollingEnd/02.bmp", NULL), 113, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/26frontRollingEnd/03.bmp", NULL), 114, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/26frontRollingEnd/04.bmp", NULL), 115, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/26frontRollingEnd/05.bmp", NULL), 116, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/26frontRollingEnd/06.bmp", NULL), 117, 0 );//frame 6
	
	//backRollingEnd
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/27backRollingEnd/00.bmp", NULL), 118, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/27backRollingEnd/01.bmp", NULL), 119, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/27backRollingEnd/02.bmp", NULL), 120, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/27backRollingEnd/03.bmp", NULL), 121, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/27backRollingEnd/04.bmp", NULL), 122, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/27backRollingEnd/05.bmp", NULL), 123, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/27backRollingEnd/06.bmp", NULL), 124, 0 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/27backRollingEnd/07.bmp", NULL), 125, 0 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/27backRollingEnd/08.bmp", NULL), 126, 0 );//frame 8
	
	//changeSide
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/28changeSide/00.bmp", NULL), 127, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/28changeSide/01.bmp", NULL), 128, 0 );//frame 1
	
	//changeSideCrouched
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/29changeSideCrouched/00.bmp", NULL), 129, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/29changeSideCrouched/01.bmp", NULL), 130, 0 );//frame 1
	
	
//Sprites do personagem virado para a esquerda
//idle
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/00idle/00.bmp", NULL), 0, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/00idle/01.bmp", NULL), 1, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/00idle/02.bmp", NULL), 2, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/00idle/03.bmp", NULL), 3, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/00idle/04.bmp", NULL), 4, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/00idle/05.bmp", NULL), 5, 1 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/00idle/06.bmp", NULL), 6, 1 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/00idle/07.bmp", NULL), 7, 1 );//frame 7
	
	//crouching
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/01crouching/00.bmp", NULL), 8, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/01crouching/01.bmp", NULL), 9, 1 );//frame 1
	
	//crouchedIdle
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/02crouchedIdle/00.bmp", NULL), 10, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/02crouchedIdle/01.bmp", NULL), 11, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/02crouchedIdle/02.bmp", NULL), 12, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/02crouchedIdle/03.bmp", NULL), 13, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/02crouchedIdle/04.bmp", NULL), 14, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/02crouchedIdle/05.bmp", NULL), 15, 1 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/02crouchedIdle/06.bmp", NULL), 16, 1 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/02crouchedIdle/07.bmp", NULL), 17, 1 );//frame 7
	
	//walk
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04walk/00.bmp", NULL), 18, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04walk/01.bmp", NULL), 19, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04walk/02.bmp", NULL), 20, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04walk/03.bmp", NULL), 21, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04walk/04.bmp", NULL), 22, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04walk/05.bmp", NULL), 23, 1 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04walk/06.bmp", NULL), 24, 1 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04walk/07.bmp", NULL), 25, 1 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04walk/08.bmp", NULL), 26, 1 );//frame 8
	
	//walkBack
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05walkBack/00.bmp", NULL), 27, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05walkBack/01.bmp", NULL), 28, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05walkBack/02.bmp", NULL), 29, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05walkBack/03.bmp", NULL), 30, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05walkBack/04.bmp", NULL), 31, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05walkBack/05.bmp", NULL), 32, 1 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05walkBack/06.bmp", NULL), 33, 1 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05walkBack/07.bmp", NULL), 34, 1 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05walkBack/08.bmp", NULL), 35, 1 );//frame 8
	
	//rising
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/06rising/00.bmp", NULL), 36, 1 );//frame 0
	
	//endOfClimp
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/07endOfClimp/00.bmp", NULL), 37, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/07endOfClimp/01.bmp", NULL), 38, 1 );//frame 1
	
	//falling
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/08falling/00.bmp", NULL), 39, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/08falling/01.bmp", NULL), 40, 1 );//frame 1
	
	//fall
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/09fall/00.bmp", NULL), 41, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/09fall/01.bmp", NULL), 42, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/09fall/02.bmp", NULL), 43, 1 );//frame 2
	
	//strongFrontalDiagonalJump
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/00.bmp", NULL), 44, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/01.bmp", NULL), 45, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/02.bmp", NULL), 46, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/03.bmp", NULL), 47, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/04.bmp", NULL), 48, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/05.bmp", NULL), 49, 1 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/06.bmp", NULL), 50, 1 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/07.bmp", NULL), 51, 1 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/08.bmp", NULL), 52, 1 );//frame 8
	
	//strongBackDiagonalJump
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/00.bmp", NULL), 53, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/01.bmp", NULL), 54, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/02.bmp", NULL), 55, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/03.bmp", NULL), 56, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/04.bmp", NULL), 57, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/05.bmp", NULL), 58, 1 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/06.bmp", NULL), 59, 1 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/07.bmp", NULL), 60, 1 );//frame 7
	
	//run
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12run/00.bmp", NULL), 61, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12run/01.bmp", NULL), 62, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12run/02.bmp", NULL), 63, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12run/03.bmp", NULL), 64, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12run/04.bmp", NULL), 65, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12run/05.bmp", NULL), 66, 1 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12run/06.bmp", NULL), 67, 1 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12run/07.bmp", NULL), 68, 1 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12run/08.bmp", NULL), 69, 1 );//frame 8
	
	//jumpingBack
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/13jumpingBack/00.bmp", NULL), 70, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/13jumpingBack/01.bmp", NULL), 71, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/13jumpingBack/02.bmp", NULL), 72, 1 );//frame 2
	
	//jumpingBackFall
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/14jumpingBackFall/00.bmp", NULL), 73, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/14jumpingBackFall/01.bmp", NULL), 74, 1 );//frame 1
	
	//defending
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/15defending/00.bmp", NULL), 75, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/15defending/01.bmp", NULL), 76, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/15defending/02.bmp", NULL), 77, 1 );//frame 2
	
	//defence
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/16defence/00.bmp", NULL), 78, 1 );//frame 0
	
	//takingDamage
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/17takingDamage/00.bmp", NULL), 79, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/17takingDamage/01.bmp", NULL), 80, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/17takingDamage/02.bmp", NULL), 81, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/17takingDamage/03.bmp", NULL), 82, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/17takingDamage/04.bmp", NULL), 83, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/17takingDamage/05.bmp", NULL), 84, 1 );//frame 5
	
	//defendingCrouched
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/19defendingCrouched/00.bmp", NULL), 85, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/19defendingCrouched/01.bmp", NULL), 86, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/19defendingCrouched/02.bmp", NULL), 87, 1 );//frame 2
	
	//defenceCrouched
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/20defenceCrouched/00.bmp", NULL), 88, 1 );//frame 0
	
	//takingDamageCrouched
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/21takingDamageCrouched/00.bmp", NULL), 89, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/21takingDamageCrouched/01.bmp", NULL), 90, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/21takingDamageCrouched/02.bmp", NULL), 91, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/21takingDamageCrouched/03.bmp", NULL), 92, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/21takingDamageCrouched/04.bmp", NULL), 93, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/21takingDamageCrouched/05.bmp", NULL), 94, 1 );//frame 5
	
	//frontRolling
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/23frontRolling/00.bmp", NULL), 95, 1  );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/23frontRolling/01.bmp", NULL), 96, 1  );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/23frontRolling/02.bmp", NULL), 97, 1  );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/23frontRolling/03.bmp", NULL), 98, 1  );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/23frontRolling/04.bmp", NULL), 99, 1  );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/23frontRolling/05.bmp", NULL), 100, 1 );//frame 5
	
	//backRolling
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/00.bmp", NULL), 101, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/01.bmp", NULL), 102, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/02.bmp", NULL), 103, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/03.bmp", NULL), 104, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/04.bmp", NULL), 105, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/05.bmp", NULL), 106, 1 );//frame 5
	
	//slide
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/25slide/00.bmp", NULL), 107, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/25slide/01.bmp", NULL), 108, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/25slide/02.bmp", NULL), 109, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/25slide/03.bmp", NULL), 110, 1 );//frame 3
	
	//frontRollingEnd
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/26frontRollingEnd/00.bmp", NULL), 111, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/26frontRollingEnd/01.bmp", NULL), 112, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/26frontRollingEnd/02.bmp", NULL), 113, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/26frontRollingEnd/03.bmp", NULL), 114, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/26frontRollingEnd/04.bmp", NULL), 115, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/26frontRollingEnd/05.bmp", NULL), 116, 1 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/26frontRollingEnd/06.bmp", NULL), 117, 1 );//frame 6
	
	//backRollingEnd
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/27backRollingEnd/00.bmp", NULL), 118, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/27backRollingEnd/01.bmp", NULL), 119, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/27backRollingEnd/02.bmp", NULL), 120, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/27backRollingEnd/03.bmp", NULL), 121, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/27backRollingEnd/04.bmp", NULL), 122, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/27backRollingEnd/05.bmp", NULL), 123, 1 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/27backRollingEnd/06.bmp", NULL), 124, 1 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/27backRollingEnd/07.bmp", NULL), 125, 1 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/27backRollingEnd/08.bmp", NULL), 126, 1 );//frame 8
	
	//changeSide
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/28changeSide/00.bmp", NULL), 127, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/28changeSide/01.bmp", NULL), 128, 1 );//frame 1
	
	//changeSideCrouched
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/29changeSideCrouched/00.bmp", NULL), 129, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/29changeSideCrouched/01.bmp", NULL), 130, 1 );//frame 1
	
}END_OF_FUNCTION(LoadSprites)












