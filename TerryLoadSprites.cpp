#include "includes.h"
#include "Terry.h"


/**
 * Carrega os sprites do personagem Terry
 */
void Terry::LoadSprites()
{
	
//Sprites do personagem virado para a direita
	//idle
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00idle/00.bmp", NULL), 0, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00idle/01.bmp", NULL), 1, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00idle/02.bmp", NULL), 2, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00idle/03.bmp", NULL), 3, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00idle/04.bmp", NULL), 4, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00idle/05.bmp", NULL), 5, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00idle/06.bmp", NULL), 6, 0 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00idle/07.bmp", NULL), 7, 0 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00idle/08.bmp", NULL), 8, 0 );//frame 9
	
	//crouching
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/01crouching/00.bmp", NULL), 9, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/01crouching/01.bmp", NULL), 10, 0 );//frame 1
	
	//crouchedIdle
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/02crouchedIdle/00.bmp", NULL), 11, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/02crouchedIdle/01.bmp", NULL), 12, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/02crouchedIdle/02.bmp", NULL), 13, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/02crouchedIdle/03.bmp", NULL), 14, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/02crouchedIdle/04.bmp", NULL), 15, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/02crouchedIdle/05.bmp", NULL), 16, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/02crouchedIdle/06.bmp", NULL), 17, 0 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/02crouchedIdle/07.bmp", NULL), 18, 0 );//frame 7
	
	//walk
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04walk/00.bmp", NULL), 17, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04walk/01.bmp", NULL), 18, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04walk/02.bmp", NULL), 19, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04walk/03.bmp", NULL), 20, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04walk/04.bmp", NULL), 21, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04walk/05.bmp", NULL), 22, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04walk/06.bmp", NULL), 23, 0 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04walk/07.bmp", NULL), 24, 0 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04walk/08.bmp", NULL), 25, 0 );//frame 8
	
	//walkBack
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05walkBack/00.bmp", NULL), 26, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05walkBack/01.bmp", NULL), 27, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05walkBack/02.bmp", NULL), 28, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05walkBack/03.bmp", NULL), 29, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05walkBack/04.bmp", NULL), 30, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05walkBack/05.bmp", NULL), 31, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05walkBack/06.bmp", NULL), 32, 0 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05walkBack/07.bmp", NULL), 33, 0 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05walkBack/08.bmp", NULL), 34, 0 );//frame 8
	
	//rising
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/06rising/00.bmp", NULL), 35, 0 );//frame 0
	
	//endOfClimp
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/07endOfClimp/00.bmp", NULL), 36, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/07endOfClimp/01.bmp", NULL), 37, 0 );//frame 1
	
	//falling
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/08falling/00.bmp", NULL), 38, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/08falling/01.bmp", NULL), 39, 0 );//frame 1
	
	//fall
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/09fall/00.bmp", NULL), 40, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/09fall/01.bmp", NULL), 41, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/09fall/02.bmp", NULL), 42, 0 );//frame 2
	
	//strongFrontalDiagonalJump
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/00.bmp", NULL), 43, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/01.bmp", NULL), 44, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/02.bmp", NULL), 45, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/03.bmp", NULL), 46, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/04.bmp", NULL), 47, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/05.bmp", NULL), 48, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/06.bmp", NULL), 49, 0 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/07.bmp", NULL), 50, 0 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/08.bmp", NULL), 51, 0 );//frame 8
	
	//strongBackDiagonalJump
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/00.bmp", NULL), 52, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/01.bmp", NULL), 53, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/02.bmp", NULL), 54, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/03.bmp", NULL), 55, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/04.bmp", NULL), 56, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/05.bmp", NULL), 57, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/06.bmp", NULL), 58, 0 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/07.bmp", NULL), 59, 0 );//frame 7
	
	//run
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12run/00.bmp", NULL), 60, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12run/01.bmp", NULL), 61, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12run/02.bmp", NULL), 62, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12run/03.bmp", NULL), 63, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12run/04.bmp", NULL), 64, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12run/05.bmp", NULL), 65, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12run/06.bmp", NULL), 66, 0 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12run/07.bmp", NULL), 67, 0 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12run/08.bmp", NULL), 68, 0 );//frame 8
	
	//jumpingBack
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/13jumpingBack/00.bmp", NULL), 69, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/13jumpingBack/01.bmp", NULL), 70, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/13jumpingBack/02.bmp", NULL), 71, 0 );//frame 2
	
	//jumpingBackFall
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/14jumpingBackFall/00.bmp", NULL), 72, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/14jumpingBackFall/01.bmp", NULL), 73, 0 );//frame 1
	
	//defending
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/15defending/00.bmp", NULL), 74, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/15defending/01.bmp", NULL), 75, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/15defending/02.bmp", NULL), 76, 0 );//frame 2
	
	//defence
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/16defence/00.bmp", NULL), 77, 0 );//frame 0
	
	//takingDamage
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/17takingDamage/00.bmp", NULL), 78, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/17takingDamage/01.bmp", NULL), 79, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/17takingDamage/02.bmp", NULL), 80, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/17takingDamage/03.bmp", NULL), 81, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/17takingDamage/04.bmp", NULL), 82, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/17takingDamage/05.bmp", NULL), 83, 0 );//frame 5
	
	//defendingCrouched
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/19defendingCrouched/00.bmp", NULL), 84, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/19defendingCrouched/01.bmp", NULL), 85, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/19defendingCrouched/02.bmp", NULL), 86, 0 );//frame 2
	
	//defenceCrouched
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/20defenceCrouched/00.bmp", NULL), 87, 0 );//frame 0
	
	//takingDamageCrouched
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/21takingDamageCrouched/00.bmp", NULL), 88, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/21takingDamageCrouched/01.bmp", NULL), 89, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/21takingDamageCrouched/02.bmp", NULL), 90, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/21takingDamageCrouched/03.bmp", NULL), 91, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/21takingDamageCrouched/04.bmp", NULL), 92, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/21takingDamageCrouched/05.bmp", NULL), 93, 0 );//frame 5
	
	//frontRolling
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/23frontRolling/00.bmp", NULL), 94, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/23frontRolling/01.bmp", NULL), 95, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/23frontRolling/02.bmp", NULL), 96, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/23frontRolling/03.bmp", NULL), 97, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/23frontRolling/04.bmp", NULL), 98, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/23frontRolling/05.bmp", NULL), 99, 0 );//frame 5
	
	//backRolling
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/00.bmp", NULL), 100, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/01.bmp", NULL), 101, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/02.bmp", NULL), 102, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/03.bmp", NULL), 103, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/04.bmp", NULL), 104, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/05.bmp", NULL), 105, 0 );//frame 5
	
	//slide
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/25slide/00.bmp", NULL), 106, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/25slide/01.bmp", NULL), 107, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/25slide/02.bmp", NULL), 108, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/25slide/03.bmp", NULL), 109, 0 );//frame 3
	
	//frontRollingEnd
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/26frontRollingEnd/00.bmp", NULL), 110, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/26frontRollingEnd/01.bmp", NULL), 111, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/26frontRollingEnd/02.bmp", NULL), 112, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/26frontRollingEnd/03.bmp", NULL), 113, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/26frontRollingEnd/04.bmp", NULL), 114, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/26frontRollingEnd/05.bmp", NULL), 115, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/26frontRollingEnd/06.bmp", NULL), 116, 0 );//frame 6
	
	//backRollingEnd
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/27backRollingEnd/00.bmp", NULL), 117, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/27backRollingEnd/01.bmp", NULL), 118, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/27backRollingEnd/02.bmp", NULL), 119, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/27backRollingEnd/03.bmp", NULL), 120, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/27backRollingEnd/04.bmp", NULL), 121, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/27backRollingEnd/05.bmp", NULL), 122, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/27backRollingEnd/06.bmp", NULL), 123, 0 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/27backRollingEnd/07.bmp", NULL), 124, 0 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/27backRollingEnd/08.bmp", NULL), 125, 0 );//frame 8
	
	//changeSide
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/28changeSide/00.bmp", NULL), 126, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/28changeSide/01.bmp", NULL), 127, 0 );//frame 1
	
	//changeSideCrouched
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/29changeSideCrouched/00.bmp", NULL), 128, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/29changeSideCrouched/01.bmp", NULL), 129, 0 );//frame 1

	//weakPunch
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/30weakPunch/00.bmp", NULL), 130, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/30weakPunch/01.bmp", NULL), 131, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/30weakPunch/02.bmp", NULL), 132, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/30weakPunch/03.bmp", NULL), 133, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/30weakPunch/04.bmp", NULL), 134, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/30weakPunch/05.bmp", NULL), 135, 0 );//frame 5
	
	//strongPunch
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/31strongPunch/00.bmp", NULL), 136, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/31strongPunch/01.bmp", NULL), 137, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/31strongPunch/02.bmp", NULL), 138, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/31strongPunch/03.bmp", NULL), 139, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/31strongPunch/04.bmp", NULL), 140, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/31strongPunch/05.bmp", NULL), 141, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/31strongPunch/06.bmp", NULL), 142, 0 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/31strongPunch/07.bmp", NULL), 143, 0 );//frame 7
	
	//weakKick
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/32weakKick/00.bmp", NULL), 144, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/32weakKick/01.bmp", NULL), 145, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/32weakKick/02.bmp", NULL), 146, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/32weakKick/03.bmp", NULL), 147, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/32weakKick/04.bmp", NULL), 148, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/32weakKick/05.bmp", NULL), 149, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/32weakKick/06.bmp", NULL), 150, 0 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/32weakKick/07.bmp", NULL), 151, 0 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/32weakKick/08.bmp", NULL), 152, 0 );//frame 8
	
	//strongKick
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/33strongKick/00.bmp", NULL), 153, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/33strongKick/01.bmp", NULL), 154, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/33strongKick/02.bmp", NULL), 155, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/33strongKick/03.bmp", NULL), 156, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/33strongKick/04.bmp", NULL), 157, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/33strongKick/05.bmp", NULL), 158, 0 );//frame 5
	
	//strongKickEnd
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/34strongKickEnd/00.bmp", NULL), 159, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/34strongKickEnd/01.bmp", NULL), 160, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/34strongKickEnd/02.bmp", NULL), 161, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/34strongKickEnd/03.bmp", NULL), 162, 0 );//frame 3
	
	//crouchedWeakPunch
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/35crouchedWeakPunch/00.bmp", NULL), 163, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/35crouchedWeakPunch/01.bmp", NULL), 164, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/35crouchedWeakPunch/02.bmp", NULL), 165, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/35crouchedWeakPunch/03.bmp", NULL), 166, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/35crouchedWeakPunch/04.bmp", NULL), 167, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/35crouchedWeakPunch/05.bmp", NULL), 168, 0 );//frame 5
	
	//crouchedStrongPunch
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/36crouchedStrongPunch/00.bmp", NULL), 169, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/36crouchedStrongPunch/01.bmp", NULL), 170, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/36crouchedStrongPunch/02.bmp", NULL), 171, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/36crouchedStrongPunch/03.bmp", NULL), 172, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/36crouchedStrongPunch/04.bmp", NULL), 173, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/36crouchedStrongPunch/05.bmp", NULL), 174, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/36crouchedStrongPunch/06.bmp", NULL), 175, 0 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/36crouchedStrongPunch/07.bmp", NULL), 176, 0 );//frame 7
	
	//crouchedWeakKick
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/37crouchedWeakKick/00.bmp", NULL), 177, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/37crouchedWeakKick/01.bmp", NULL), 178, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/37crouchedWeakKick/02.bmp", NULL), 179, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/37crouchedWeakKick/03.bmp", NULL), 180, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/37crouchedWeakKick/04.bmp", NULL), 181, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/37crouchedWeakKick/05.bmp", NULL), 182, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/37crouchedWeakKick/06.bmp", NULL), 183, 0 );//frame 6
	
	//crouchedStrongKick
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/38crouchedStrongKick/00.bmp", NULL), 184, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/38crouchedStrongKick/01.bmp", NULL), 185, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/38crouchedStrongKick/02.bmp", NULL), 186, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/38crouchedStrongKick/03.bmp", NULL), 187, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/38crouchedStrongKick/04.bmp", NULL), 188, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/38crouchedStrongKick/05.bmp", NULL), 189, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/38crouchedStrongKick/06.bmp", NULL), 190, 0 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/38crouchedStrongKick/07.bmp", NULL), 191, 0 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/38crouchedStrongKick/08.bmp", NULL), 192, 0 );//frame 8
	
	//jumpingWeakPunch
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/39jumpingWeakPunch/00.bmp", NULL), 193, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/39jumpingWeakPunch/01.bmp", NULL), 194, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/39jumpingWeakPunch/02.bmp", NULL), 195, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/39jumpingWeakPunch/03.bmp", NULL), 196, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/39jumpingWeakPunch/04.bmp", NULL), 197, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/39jumpingWeakPunch/05.bmp", NULL), 198, 0 );//frame 5
	
	//jumpingStrongPunch
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/40jumpingStrongPunch/00.bmp", NULL), 199, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/40jumpingStrongPunch/01.bmp", NULL), 200, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/40jumpingStrongPunch/02.bmp", NULL), 201, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/40jumpingStrongPunch/03.bmp", NULL), 202, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/40jumpingStrongPunch/04.bmp", NULL), 203, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/40jumpingStrongPunch/05.bmp", NULL), 204, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/40jumpingStrongPunch/06.bmp", NULL), 205, 0 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/40jumpingStrongPunch/07.bmp", NULL), 206, 0 );//frame 7
	
	//jumpingWeakKick
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/41jumpingWeakKick/00.bmp", NULL), 207, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/41jumpingWeakKick/01.bmp", NULL), 208, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/41jumpingWeakKick/02.bmp", NULL), 209, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/41jumpingWeakKick/03.bmp", NULL), 210, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/41jumpingWeakKick/04.bmp", NULL), 211, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/41jumpingWeakKick/05.bmp", NULL), 212, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/41jumpingWeakKick/06.bmp", NULL), 213, 0 );//frame 6
	
	//jumpingStrongKick
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/42jumpingStrongKick/00.bmp", NULL), 214, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/42jumpingStrongKick/01.bmp", NULL), 215, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/42jumpingStrongKick/02.bmp", NULL), 216, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/42jumpingStrongKick/03.bmp", NULL), 217, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/42jumpingStrongKick/04.bmp", NULL), 218, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/42jumpingStrongKick/05.bmp", NULL), 219, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/42jumpingStrongKick/06.bmp", NULL), 220, 0 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/42jumpingStrongKick/07.bmp", NULL), 221, 0 );//frame 7
	
	//gluedStrongPunch
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/43gluedStrongPunch/00.bmp", NULL), 222, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/43gluedStrongPunch/01.bmp", NULL), 223, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/43gluedStrongPunch/02.bmp", NULL), 224, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/43gluedStrongPunch/03.bmp", NULL), 225, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/43gluedStrongPunch/04.bmp", NULL), 226, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/43gluedStrongPunch/05.bmp", NULL), 227, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/43gluedStrongPunch/06.bmp", NULL), 228, 0 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/43gluedStrongPunch/07.bmp", NULL), 229, 0 );//frame 7
	
	//gluedStrongKick
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/44gluedStrongKick/00.bmp", NULL), 230, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/44gluedStrongKick/01.bmp", NULL), 231, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/44gluedStrongKick/02.bmp", NULL), 232, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/44gluedStrongKick/03.bmp", NULL), 233, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/44gluedStrongKick/04.bmp", NULL), 234, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/44gluedStrongKick/05.bmp", NULL), 235, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/44gluedStrongKick/06.bmp", NULL), 236, 0 );//frame 6
	
	//jumpingSpecialAttack
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/46jumpingSpecialAttack/00.bmp", NULL), 237, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/46jumpingSpecialAttack/01.bmp", NULL), 238, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/46jumpingSpecialAttack/02.bmp", NULL), 239, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/46jumpingSpecialAttack/03.bmp", NULL), 240, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/46jumpingSpecialAttack/04.bmp", NULL), 241, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/46jumpingSpecialAttack/05.bmp", NULL), 242, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/46jumpingSpecialAttack/06.bmp", NULL), 243, 0 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/46jumpingSpecialAttack/07.bmp", NULL), 244, 0 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/46jumpingSpecialAttack/08.bmp", NULL), 245, 0 );//frame 8
	
	//weakPunchForward
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/47weakPunchForward/00.bmp", NULL), 246, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/47weakPunchForward/01.bmp", NULL), 247, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/47weakPunchForward/02.bmp", NULL), 248, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/47weakPunchForward/03.bmp", NULL), 249, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/47weakPunchForward/04.bmp", NULL), 250, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/47weakPunchForward/05.bmp", NULL), 251, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/47weakPunchForward/06.bmp", NULL), 252, 0 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/47weakPunchForward/07.bmp", NULL), 253, 0 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/47weakPunchForward/08.bmp", NULL), 254, 0 );//frame 8
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/47weakPunchForward/09.bmp", NULL), 255, 0 );//frame 9
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/47weakPunchForward/10.bmp", NULL), 256, 0 );//frame 10
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/47weakPunchForward/11.bmp", NULL), 257, 0 );//frame 11
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/47weakPunchForward/12.bmp", NULL), 258, 0 );//frame 12
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/47weakPunchForward/13.bmp", NULL), 259, 0 );//frame 13
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/47weakPunchForward/14.bmp", NULL), 260, 0 );//frame 14
	
	//specialAttackStart
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/45specialAttackStart/00.bmp", NULL), 261, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/45specialAttackStart/01.bmp", NULL), 262, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/45specialAttackStart/02.bmp", NULL), 263, 0 );//frame 2
	
	//specialAttack
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/48specialAttack/00.bmp", NULL), 264, 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/48specialAttack/01.bmp", NULL), 265, 0 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/48specialAttack/02.bmp", NULL), 266, 0 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/48specialAttack/03.bmp", NULL), 267, 0 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/48specialAttack/04.bmp", NULL), 268, 0 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/48specialAttack/05.bmp", NULL), 269, 0 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/48specialAttack/06.bmp", NULL), 270, 0 );//frame 6
	
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
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/00idle/08.bmp", NULL), 8, 1 );//frame 9
	
	//crouching
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/01crouching/00.bmp", NULL), 9,  1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/01crouching/01.bmp", NULL), 10, 1 );//frame 1
	
	//crouchedIdle
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/02crouchedIdle/00.bmp", NULL), 11, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/02crouchedIdle/01.bmp", NULL), 12, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/02crouchedIdle/02.bmp", NULL), 13, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/02crouchedIdle/03.bmp", NULL), 14, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/02crouchedIdle/04.bmp", NULL), 15, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/02crouchedIdle/05.bmp", NULL), 16, 1 );//frame 5
	
	//walk
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04walk/00.bmp", NULL), 17, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04walk/01.bmp", NULL), 18, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04walk/02.bmp", NULL), 19, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04walk/03.bmp", NULL), 20, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04walk/04.bmp", NULL), 21, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04walk/05.bmp", NULL), 22, 1 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04walk/06.bmp", NULL), 23, 1 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04walk/07.bmp", NULL), 24, 1 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04walk/08.bmp", NULL), 25, 1 );//frame 8
	
	//walkBack
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05walkBack/00.bmp", NULL), 26, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05walkBack/01.bmp", NULL), 27, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05walkBack/02.bmp", NULL), 28, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05walkBack/03.bmp", NULL), 29, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05walkBack/04.bmp", NULL), 30, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05walkBack/05.bmp", NULL), 31, 1 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05walkBack/06.bmp", NULL), 32, 1 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05walkBack/07.bmp", NULL), 33, 1 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05walkBack/08.bmp", NULL), 34, 1 );//frame 8
	
	//rising
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/06rising/00.bmp", NULL), 35, 1 );//frame 0
	
	//endOfClimp
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/07endOfClimp/00.bmp", NULL), 36, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/07endOfClimp/01.bmp", NULL), 37, 1 );//frame 1

	//falling
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/08falling/00.bmp", NULL), 38, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/08falling/01.bmp", NULL), 39, 1 );//frame 1

	//fall
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/09fall/00.bmp", NULL), 40, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/09fall/01.bmp", NULL), 41, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/09fall/02.bmp", NULL), 42, 1 );//frame 2
	
	//strongFrontalDiagonalJump
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/00.bmp", NULL), 43, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/01.bmp", NULL), 44, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/02.bmp", NULL), 45, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/03.bmp", NULL), 46, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/04.bmp", NULL), 47, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/05.bmp", NULL), 48, 1 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/06.bmp", NULL), 49, 1 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/07.bmp", NULL), 50, 1 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/08.bmp", NULL), 51, 1 );//frame 8
	
	//strongBackDiagonalJump
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/00.bmp", NULL), 52, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/01.bmp", NULL), 53, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/02.bmp", NULL), 54, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/03.bmp", NULL), 55, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/04.bmp", NULL), 56, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/05.bmp", NULL), 57, 1 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/06.bmp", NULL), 58, 1 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/07.bmp", NULL), 59, 1 );//frame 7
	
	//run
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12run/00.bmp", NULL), 60, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12run/01.bmp", NULL), 61, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12run/02.bmp", NULL), 62, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12run/03.bmp", NULL), 63, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12run/04.bmp", NULL), 64, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12run/05.bmp", NULL), 65, 1 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12run/06.bmp", NULL), 66, 1 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12run/07.bmp", NULL), 67, 1 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12run/08.bmp", NULL), 68, 1 );//frame 8
	
	//jumpingBack
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/13jumpingBack/00.bmp", NULL), 69, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/13jumpingBack/01.bmp", NULL), 70, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/13jumpingBack/02.bmp", NULL), 71, 1 );//frame 2
	
	//jumpingBackFall
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/14jumpingBackFall/00.bmp", NULL), 72, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/14jumpingBackFall/01.bmp", NULL), 73, 1 );//frame 1
	
	//defending
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/15defending/00.bmp", NULL), 74, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/15defending/01.bmp", NULL), 75, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/15defending/02.bmp", NULL), 76, 1 );//frame 2
	
	//defence
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/16defence/00.bmp", NULL), 77, 1 );//frame 0
	
	//takingDamage
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/17takingDamage/00.bmp", NULL), 78, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/17takingDamage/01.bmp", NULL), 79, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/17takingDamage/02.bmp", NULL), 80, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/17takingDamage/03.bmp", NULL), 81, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/17takingDamage/04.bmp", NULL), 82, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/17takingDamage/05.bmp", NULL), 83, 1 );//frame 5
	
	//defendingCrouched
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/19defendingCrouched/00.bmp", NULL), 84, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/19defendingCrouched/01.bmp", NULL), 85, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/19defendingCrouched/02.bmp", NULL), 86, 1 );//frame 2
	
	//defenceCrouched
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/20defenceCrouched/00.bmp", NULL), 87, 1 );//frame 0
	
	//takingDamageCrouched
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/21takingDamageCrouched/00.bmp", NULL), 88, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/21takingDamageCrouched/01.bmp", NULL), 89, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/21takingDamageCrouched/02.bmp", NULL), 90, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/21takingDamageCrouched/03.bmp", NULL), 91, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/21takingDamageCrouched/04.bmp", NULL), 92, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/21takingDamageCrouched/05.bmp", NULL), 93, 1 );//frame 5
	
	//frontRolling
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/23frontRolling/00.bmp", NULL), 94, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/23frontRolling/01.bmp", NULL), 95, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/23frontRolling/02.bmp", NULL), 96, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/23frontRolling/03.bmp", NULL), 97, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/23frontRolling/04.bmp", NULL), 98, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/23frontRolling/05.bmp", NULL), 99, 1 );//frame 5
	
	//backRolling
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/00.bmp", NULL), 100, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/01.bmp", NULL), 101, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/02.bmp", NULL), 102, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/03.bmp", NULL), 103, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/04.bmp", NULL), 104, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/05.bmp", NULL), 105, 1 );//frame 5
	
	//slide
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/25slide/00.bmp", NULL), 106, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/25slide/01.bmp", NULL), 107, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/25slide/02.bmp", NULL), 108, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/25slide/03.bmp", NULL), 109, 1 );//frame 3
	
	//frontRollingEnd
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/26frontRollingEnd/00.bmp", NULL), 110, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/26frontRollingEnd/01.bmp", NULL), 111, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/26frontRollingEnd/02.bmp", NULL), 112, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/26frontRollingEnd/03.bmp", NULL), 113, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/26frontRollingEnd/04.bmp", NULL), 114, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/26frontRollingEnd/05.bmp", NULL), 115, 1 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/26frontRollingEnd/06.bmp", NULL), 116, 1 );//frame 6
	
	//backRollingEnd
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/27backRollingEnd/00.bmp", NULL), 117, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/27backRollingEnd/01.bmp", NULL), 118, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/27backRollingEnd/02.bmp", NULL), 119, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/27backRollingEnd/03.bmp", NULL), 120, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/27backRollingEnd/04.bmp", NULL), 121, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/27backRollingEnd/05.bmp", NULL), 122, 1 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/27backRollingEnd/06.bmp", NULL), 123, 1 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/27backRollingEnd/07.bmp", NULL), 124, 1 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/27backRollingEnd/08.bmp", NULL), 125, 1 );//frame 8
	
	//changeSide
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/28changeSide/00.bmp", NULL), 126, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/28changeSide/01.bmp", NULL), 127, 1 );//frame 1
	
	//changeSideCrouched
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/29changeSideCrouched/00.bmp", NULL), 128, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/29changeSideCrouched/01.bmp", NULL), 129, 1 );//frame 1

	//weakPunch
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/30weakPunch/00.bmp", NULL), 130, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/30weakPunch/01.bmp", NULL), 131, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/30weakPunch/02.bmp", NULL), 132, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/30weakPunch/03.bmp", NULL), 133, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/30weakPunch/04.bmp", NULL), 134, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/30weakPunch/05.bmp", NULL), 135, 1 );//frame 5
	
	//strongPunch
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/31strongPunch/00.bmp", NULL), 136, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/31strongPunch/01.bmp", NULL), 137, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/31strongPunch/02.bmp", NULL), 138, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/31strongPunch/03.bmp", NULL), 139, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/31strongPunch/04.bmp", NULL), 140, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/31strongPunch/05.bmp", NULL), 141, 1 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/31strongPunch/06.bmp", NULL), 142, 1 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/31strongPunch/07.bmp", NULL), 143, 1 );//frame 7
	
	//weakKick
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/32weakKick/00.bmp", NULL), 144, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/32weakKick/01.bmp", NULL), 145, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/32weakKick/02.bmp", NULL), 146, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/32weakKick/03.bmp", NULL), 147, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/32weakKick/04.bmp", NULL), 148, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/32weakKick/05.bmp", NULL), 149, 1 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/32weakKick/06.bmp", NULL), 150, 1 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/32weakKick/07.bmp", NULL), 151, 1 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/32weakKick/08.bmp", NULL), 152, 1 );//frame 8
	
	//strongKick
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/33strongKick/00.bmp", NULL), 153, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/33strongKick/01.bmp", NULL), 154, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/33strongKick/02.bmp", NULL), 155, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/33strongKick/03.bmp", NULL), 156, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/33strongKick/04.bmp", NULL), 157, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/33strongKick/05.bmp", NULL), 158, 1 );//frame 5
	
	//strongKickEnd
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/34strongKickEnd/00.bmp", NULL), 159, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/34strongKickEnd/01.bmp", NULL), 160, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/34strongKickEnd/02.bmp", NULL), 161, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/34strongKickEnd/03.bmp", NULL), 162, 1 );//frame 3
	
	//crouchedWeakPunch
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/35crouchedWeakPunch/00.bmp", NULL), 163, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/35crouchedWeakPunch/01.bmp", NULL), 164, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/35crouchedWeakPunch/02.bmp", NULL), 165, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/35crouchedWeakPunch/03.bmp", NULL), 166, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/35crouchedWeakPunch/04.bmp", NULL), 167, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/35crouchedWeakPunch/05.bmp", NULL), 168, 1 );//frame 5
	
	//crouchedStrongPunch
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/36crouchedStrongPunch/00.bmp", NULL), 169, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/36crouchedStrongPunch/01.bmp", NULL), 170, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/36crouchedStrongPunch/02.bmp", NULL), 171, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/36crouchedStrongPunch/03.bmp", NULL), 172, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/36crouchedStrongPunch/04.bmp", NULL), 173, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/36crouchedStrongPunch/05.bmp", NULL), 174, 1 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/36crouchedStrongPunch/06.bmp", NULL), 175, 1 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/36crouchedStrongPunch/07.bmp", NULL), 176, 1 );//frame 7
	
	//crouchedWeakKick
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/37crouchedWeakKick/00.bmp", NULL), 177, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/37crouchedWeakKick/01.bmp", NULL), 178, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/37crouchedWeakKick/02.bmp", NULL), 179, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/37crouchedWeakKick/03.bmp", NULL), 180, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/37crouchedWeakKick/04.bmp", NULL), 181, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/37crouchedWeakKick/05.bmp", NULL), 182, 1 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/37crouchedWeakKick/06.bmp", NULL), 183, 1 );//frame 6
	
	//crouchedStrongKick
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/38crouchedStrongKick/00.bmp", NULL), 184, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/38crouchedStrongKick/01.bmp", NULL), 185, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/38crouchedStrongKick/02.bmp", NULL), 186, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/38crouchedStrongKick/03.bmp", NULL), 187, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/38crouchedStrongKick/04.bmp", NULL), 188, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/38crouchedStrongKick/05.bmp", NULL), 189, 1 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/38crouchedStrongKick/06.bmp", NULL), 190, 1 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/38crouchedStrongKick/07.bmp", NULL), 191, 1 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/38crouchedStrongKick/08.bmp", NULL), 192, 1 );//frame 8
	
	//jumpingWeakPunch
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/39jumpingWeakPunch/00.bmp", NULL), 193, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/39jumpingWeakPunch/01.bmp", NULL), 194, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/39jumpingWeakPunch/02.bmp", NULL), 195, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/39jumpingWeakPunch/03.bmp", NULL), 196, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/39jumpingWeakPunch/04.bmp", NULL), 197, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/39jumpingWeakPunch/05.bmp", NULL), 198, 1 );//frame 5

	//jumpingStrongPunch
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/40jumpingStrongPunch/00.bmp", NULL), 199, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/40jumpingStrongPunch/01.bmp", NULL), 200, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/40jumpingStrongPunch/02.bmp", NULL), 201, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/40jumpingStrongPunch/03.bmp", NULL), 202, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/40jumpingStrongPunch/04.bmp", NULL), 203, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/40jumpingStrongPunch/05.bmp", NULL), 204, 1 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/40jumpingStrongPunch/06.bmp", NULL), 205, 1 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/40jumpingStrongPunch/07.bmp", NULL), 206, 1 );//frame 7
	
	//jumpingWeakKick
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/41jumpingWeakKick/00.bmp", NULL), 207, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/41jumpingWeakKick/01.bmp", NULL), 208, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/41jumpingWeakKick/02.bmp", NULL), 209, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/41jumpingWeakKick/03.bmp", NULL), 210, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/41jumpingWeakKick/04.bmp", NULL), 211, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/41jumpingWeakKick/05.bmp", NULL), 212, 1 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/41jumpingWeakKick/06.bmp", NULL), 213, 1 );//frame 6
	
	//jumpingStrongKick
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/42jumpingStrongKick/00.bmp", NULL), 214, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/42jumpingStrongKick/01.bmp", NULL), 215, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/42jumpingStrongKick/02.bmp", NULL), 216, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/42jumpingStrongKick/03.bmp", NULL), 217, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/42jumpingStrongKick/04.bmp", NULL), 218, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/42jumpingStrongKick/05.bmp", NULL), 219, 1 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/42jumpingStrongKick/06.bmp", NULL), 220, 1 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/42jumpingStrongKick/07.bmp", NULL), 221, 1 );//frame 7

	//gluedStrongPunch
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/43gluedStrongPunch/00.bmp", NULL), 222, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/43gluedStrongPunch/01.bmp", NULL), 223, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/43gluedStrongPunch/02.bmp", NULL), 224, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/43gluedStrongPunch/03.bmp", NULL), 225, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/43gluedStrongPunch/04.bmp", NULL), 226, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/43gluedStrongPunch/05.bmp", NULL), 227, 1 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/43gluedStrongPunch/06.bmp", NULL), 228, 1 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/43gluedStrongPunch/07.bmp", NULL), 229, 1 );//frame 7
	
	//gluedStrongKick
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/44gluedStrongKick/00.bmp", NULL), 230, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/44gluedStrongKick/01.bmp", NULL), 231, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/44gluedStrongKick/02.bmp", NULL), 232, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/44gluedStrongKick/03.bmp", NULL), 233, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/44gluedStrongKick/04.bmp", NULL), 234, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/44gluedStrongKick/05.bmp", NULL), 235, 1 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/44gluedStrongKick/06.bmp", NULL), 236, 1 );//frame 6

	//jumpingSpecialAttack
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/46jumpingSpecialAttack/00.bmp", NULL), 237, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/46jumpingSpecialAttack/01.bmp", NULL), 238, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/46jumpingSpecialAttack/02.bmp", NULL), 239, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/46jumpingSpecialAttack/03.bmp", NULL), 240, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/46jumpingSpecialAttack/04.bmp", NULL), 241, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/46jumpingSpecialAttack/05.bmp", NULL), 242, 1 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/46jumpingSpecialAttack/06.bmp", NULL), 243, 1 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/46jumpingSpecialAttack/07.bmp", NULL), 244, 1 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/46jumpingSpecialAttack/08.bmp", NULL), 245, 1 );//frame 8
	
	//weakPunchForward
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/47weakPunchForward/00.bmp", NULL), 246, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/47weakPunchForward/01.bmp", NULL), 247, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/47weakPunchForward/02.bmp", NULL), 248, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/47weakPunchForward/03.bmp", NULL), 249, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/47weakPunchForward/04.bmp", NULL), 250, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/47weakPunchForward/05.bmp", NULL), 251, 1 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/47weakPunchForward/06.bmp", NULL), 252, 1 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/47weakPunchForward/07.bmp", NULL), 253, 1 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/47weakPunchForward/08.bmp", NULL), 254, 1 );//frame 8
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/47weakPunchForward/09.bmp", NULL), 255, 1 );//frame 9
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/47weakPunchForward/10.bmp", NULL), 256, 1 );//frame 10
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/47weakPunchForward/11.bmp", NULL), 257, 1 );//frame 11
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/47weakPunchForward/12.bmp", NULL), 258, 1 );//frame 12
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/47weakPunchForward/13.bmp", NULL), 259, 1 );//frame 13
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/47weakPunchForward/14.bmp", NULL), 260, 1 );//frame 14
	
	//specialAttackStart
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/45specialAttackStart/00.bmp", NULL), 261, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/45specialAttackStart/01.bmp", NULL), 262, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/45specialAttackStart/02.bmp", NULL), 263, 1 );//frame 2
	
	//specialAttack
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/48specialAttack/00.bmp", NULL), 264, 1 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/48specialAttack/01.bmp", NULL), 265, 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/48specialAttack/02.bmp", NULL), 266, 1 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/48specialAttack/03.bmp", NULL), 267, 1 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/48specialAttack/04.bmp", NULL), 268, 1 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/48specialAttack/05.bmp", NULL), 269, 1 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/notToRight/standardColor/48specialAttack/06.bmp", NULL), 270, 1 );//frame 6
	
}END_OF_FUNCTION(LoadSprites)












