#include <allegro.h>
#include "Terry.h"


/**
 * Carrega os sprites do personagem Terry
 */
void Terry::LoadSprites()
{
	
//Sprites do personagem virado para a direita
	//idle
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00idle/00.bmp", NULL), 0 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00idle/01.bmp", NULL), 1 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00idle/02.bmp", NULL), 2 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00idle/03.bmp", NULL), 3 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00idle/04.bmp", NULL), 4 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00idle/05.bmp", NULL), 5 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00idle/06.bmp", NULL), 6 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/00idle/07.bmp", NULL), 7 );//frame 7
	
	//crouching
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/01crouching/00.bmp", NULL), 8 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/01crouching/01.bmp", NULL), 9 );//frame 1
	
	//crouchedIdle
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/02crouchedIdle/00.bmp", NULL), 10 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/02crouchedIdle/01.bmp", NULL), 11 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/02crouchedIdle/02.bmp", NULL), 12 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/02crouchedIdle/03.bmp", NULL), 13 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/02crouchedIdle/04.bmp", NULL), 14 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/02crouchedIdle/05.bmp", NULL), 15 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/02crouchedIdle/06.bmp", NULL), 16 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/02crouchedIdle/07.bmp", NULL), 17 );//frame 7
	
	//walk
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04walk/00.bmp", NULL), 18 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04walk/01.bmp", NULL), 19 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04walk/02.bmp", NULL), 20 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04walk/03.bmp", NULL), 21 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04walk/04.bmp", NULL), 22 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04walk/05.bmp", NULL), 23 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04walk/06.bmp", NULL), 24 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04walk/07.bmp", NULL), 25 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/04walk/08.bmp", NULL), 26 );//frame 8
	
	//walkBack
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05walkBack/00.bmp", NULL), 27 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05walkBack/01.bmp", NULL), 28 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05walkBack/02.bmp", NULL), 29 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05walkBack/03.bmp", NULL), 30 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05walkBack/04.bmp", NULL), 31 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05walkBack/05.bmp", NULL), 32 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05walkBack/06.bmp", NULL), 33 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05walkBack/07.bmp", NULL), 34 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/05walkBack/08.bmp", NULL), 35 );//frame 8
	
	//rising
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/06rising/00.bmp", NULL), 36 );//frame 0
	
	//endOfClimp
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/07endOfClimp/00.bmp", NULL), 37 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/07endOfClimp/01.bmp", NULL), 38 );//frame 1
	
	//falling
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/08falling/00.bmp", NULL), 39 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/08falling/01.bmp", NULL), 40 );//frame 1
	
	//fall
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/09fall/00.bmp", NULL), 41 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/09fall/01.bmp", NULL), 42 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/09fall/02.bmp", NULL), 43 );//frame 2
	//SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/09fall/03.bmp", NULL), 44 );//frame 3
	
	//strongFrontalDiagonalJump
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/00.bmp", NULL), 44 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/01.bmp", NULL), 45 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/02.bmp", NULL), 46 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/03.bmp", NULL), 47 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/04.bmp", NULL), 48 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/05.bmp", NULL), 49 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/06.bmp", NULL), 50 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/07.bmp", NULL), 51 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/10strongFrontalDiagonalJump/08.bmp", NULL), 52 );//frame 8
	
	//strongBackDiagonalJump
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/00.bmp", NULL), 53 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/01.bmp", NULL), 54 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/02.bmp", NULL), 55 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/03.bmp", NULL), 56 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/04.bmp", NULL), 57 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/05.bmp", NULL), 58 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/06.bmp", NULL), 59 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/11strongBackDiagonalJump/07.bmp", NULL), 60 );//frame 7
	
	//run
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12run/00.bmp", NULL), 61 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12run/01.bmp", NULL), 62 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12run/02.bmp", NULL), 63 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12run/03.bmp", NULL), 64 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12run/04.bmp", NULL), 65 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12run/05.bmp", NULL), 66 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12run/06.bmp", NULL), 67 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12run/07.bmp", NULL), 68 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/12run/08.bmp", NULL), 69 );//frame 8
	
	//jumpingBack
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/13jumpingBack/00.bmp", NULL), 70 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/13jumpingBack/01.bmp", NULL), 71 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/13jumpingBack/02.bmp", NULL), 72 );//frame 2
	
	//jumpingBackFall
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/14jumpingBackFall/00.bmp", NULL), 73 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/14jumpingBackFall/01.bmp", NULL), 74 );//frame 1
	
	//defending
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/15defending/00.bmp", NULL), 75 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/15defending/01.bmp", NULL), 76 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/15defending/02.bmp", NULL), 77 );//frame 2
	
	//defence
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/16defence/00.bmp", NULL), 78 );//frame 0
	
	//takingDamage
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/17takingDamage/00.bmp", NULL), 79 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/17takingDamage/01.bmp", NULL), 80 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/17takingDamage/02.bmp", NULL), 81 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/17takingDamage/03.bmp", NULL), 82 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/17takingDamage/04.bmp", NULL), 83 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/17takingDamage/05.bmp", NULL), 84 );//frame 5
	
	//defendingCrouched
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/19defendingCrouched/00.bmp", NULL), 85 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/19defendingCrouched/01.bmp", NULL), 86 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/19defendingCrouched/02.bmp", NULL), 87 );//frame 2
	
	//defenceCrouched
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/20defenceCrouched/00.bmp", NULL), 88 );//frame 0
	
	//takingDamageCrouched
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/21takingDamageCrouched/00.bmp", NULL), 89 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/21takingDamageCrouched/01.bmp", NULL), 90 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/21takingDamageCrouched/02.bmp", NULL), 91 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/21takingDamageCrouched/03.bmp", NULL), 92 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/21takingDamageCrouched/04.bmp", NULL), 93 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/21takingDamageCrouched/05.bmp", NULL), 94 );//frame 5
	
	//frontRolling
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/23frontRolling/00.bmp", NULL), 95  );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/23frontRolling/01.bmp", NULL), 96  );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/23frontRolling/02.bmp", NULL), 97  );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/23frontRolling/03.bmp", NULL), 98  );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/23frontRolling/04.bmp", NULL), 99  );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/23frontRolling/05.bmp", NULL), 100 );//frame 5
	
	//backRolling
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/00.bmp", NULL), 101 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/01.bmp", NULL), 102 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/02.bmp", NULL), 103 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/03.bmp", NULL), 104 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/04.bmp", NULL), 105 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/24backRolling/05.bmp", NULL), 106 );//frame 5
	
	//slide
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/25slide/00.bmp", NULL), 107 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/25slide/01.bmp", NULL), 108 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/25slide/02.bmp", NULL), 109 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/25slide/03.bmp", NULL), 110 );//frame 3
	
	//frontRollingEnd
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/26frontRollingEnd/00.bmp", NULL), 111 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/26frontRollingEnd/01.bmp", NULL), 112 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/26frontRollingEnd/02.bmp", NULL), 113 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/26frontRollingEnd/03.bmp", NULL), 114 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/26frontRollingEnd/04.bmp", NULL), 115 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/26frontRollingEnd/05.bmp", NULL), 116 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/26frontRollingEnd/06.bmp", NULL), 117 );//frame 6
	
	//backRollingEnd
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/27backRollingEnd/00.bmp", NULL), 118 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/27backRollingEnd/01.bmp", NULL), 119 );//frame 1
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/27backRollingEnd/02.bmp", NULL), 120 );//frame 2
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/27backRollingEnd/03.bmp", NULL), 121 );//frame 3
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/27backRollingEnd/04.bmp", NULL), 122 );//frame 4
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/27backRollingEnd/05.bmp", NULL), 123 );//frame 5
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/27backRollingEnd/06.bmp", NULL), 124 );//frame 6
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/27backRollingEnd/07.bmp", NULL), 125 );//frame 7
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/27backRollingEnd/08.bmp", NULL), 126 );//frame 8
	
	//changeSide
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/28changeSide/00.bmp", NULL), 127 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/28changeSide/01.bmp", NULL), 128 );//frame 1
	
	//changeSideCrouched
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/29changeSideCrouched/00.bmp", NULL), 129 );//frame 0
	SetSrites( load_bitmap("sprites/personagens/terry/toRight/standardColor/29changeSideCrouched/01.bmp", NULL), 130 );//frame 1
	
	
//Sprites do personagem virado para a esquerda
	//idle
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/00idle/00.bmp", NULL), 0 );//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/00idle/01.bmp", NULL), 1 );//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/00idle/02.bmp", NULL), 2 );//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/00idle/03.bmp", NULL), 3 );//frame 3
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/00idle/04.bmp", NULL), 4 );//frame 4
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/00idle/05.bmp", NULL), 5 );//frame 5
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/00idle/06.bmp", NULL), 6 );//frame 6
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/00idle/07.bmp", NULL), 7 );//frame 7
	
	//crouching
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/01crouching/00.bmp", NULL), 8 );//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/01crouching/01.bmp", NULL), 9 );//frame 1
	
	//crouchedIdle
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/02crouchedIdle/00.bmp", NULL), 10 );//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/02crouchedIdle/01.bmp", NULL), 11 );//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/02crouchedIdle/02.bmp", NULL), 12 );//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/02crouchedIdle/03.bmp", NULL), 13 );//frame 3
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/02crouchedIdle/04.bmp", NULL), 14 );//frame 4
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/02crouchedIdle/05.bmp", NULL), 15 );//frame 5
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/02crouchedIdle/06.bmp", NULL), 16 );//frame 6
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/02crouchedIdle/07.bmp", NULL), 17 );//frame 7
	
	//walk
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04walk/00.bmp", NULL), 18 );//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04walk/01.bmp", NULL), 19 );//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04walk/02.bmp", NULL), 20 );//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04walk/03.bmp", NULL), 21 );//frame 3
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04walk/04.bmp", NULL), 22 );//frame 4
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04walk/05.bmp", NULL), 23 );//frame 5
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04walk/06.bmp", NULL), 24 );//frame 6
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04walk/07.bmp", NULL), 25 );//frame 7
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/04walk/08.bmp", NULL), 26 );//frame 8
	
	//walkBack
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05walkBack/00.bmp", NULL), 27 );//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05walkBack/01.bmp", NULL), 28 );//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05walkBack/02.bmp", NULL), 29 );//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05walkBack/03.bmp", NULL), 30 );//frame 3
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05walkBack/04.bmp", NULL), 31 );//frame 4
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05walkBack/05.bmp", NULL), 32 );//frame 5
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05walkBack/06.bmp", NULL), 33 );//frame 6
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05walkBack/07.bmp", NULL), 34 );//frame 7
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/05walkBack/08.bmp", NULL), 35 );//frame 8
	
	//rising
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/06rising/00.bmp", NULL), 36 );//frame 0
	
	//endOfClimp
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/07endOfClimp/00.bmp", NULL), 37 );//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/07endOfClimp/01.bmp", NULL), 38 );//frame 1
	
	//falling
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/08falling/00.bmp", NULL), 39 );//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/08falling/01.bmp", NULL), 40 );//frame 1
	
	//fall
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/09fall/00.bmp", NULL), 41 );//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/09fall/01.bmp", NULL), 42 );//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/09fall/02.bmp", NULL), 43 );//frame 2
	//SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/09fall/03.bmp", NULL), 44 );//frame 3
	
	//strongFrontalDiagonalJump
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/00.bmp", NULL), 44 );//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/01.bmp", NULL), 45 );//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/02.bmp", NULL), 46 );//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/03.bmp", NULL), 47 );//frame 3
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/04.bmp", NULL), 48 );//frame 4
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/05.bmp", NULL), 49 );//frame 5
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/06.bmp", NULL), 50 );//frame 6
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/07.bmp", NULL), 51 );//frame 7
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/10strongFrontalDiagonalJump/08.bmp", NULL), 52 );//frame 8
	
	//strongBackDiagonalJump
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/00.bmp", NULL), 53 );//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/01.bmp", NULL), 54 );//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/02.bmp", NULL), 55 );//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/03.bmp", NULL), 56 );//frame 3
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/04.bmp", NULL), 57 );//frame 4
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/05.bmp", NULL), 58 );//frame 5
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/06.bmp", NULL), 59 );//frame 6
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/11strongBackDiagonalJump/07.bmp", NULL), 60 );//frame 7
	
	//run
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12run/00.bmp", NULL), 61 );//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12run/01.bmp", NULL), 62 );//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12run/02.bmp", NULL), 63 );//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12run/03.bmp", NULL), 64 );//frame 3
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12run/04.bmp", NULL), 65 );//frame 4
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12run/05.bmp", NULL), 66 );//frame 5
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12run/06.bmp", NULL), 67 );//frame 6
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12run/07.bmp", NULL), 68 );//frame 7
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/12run/08.bmp", NULL), 69 );//frame 8
	
	//jumpingBack
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/13jumpingBack/00.bmp", NULL), 70 );//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/13jumpingBack/01.bmp", NULL), 71 );//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/13jumpingBack/02.bmp", NULL), 72 );//frame 2
	
	//jumpingBackFall
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/14jumpingBackFall/00.bmp", NULL), 73 );//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/14jumpingBackFall/01.bmp", NULL), 74 );//frame 1
	
	//defending
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/15defending/00.bmp", NULL), 75 );//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/15defending/01.bmp", NULL), 76 );//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/15defending/02.bmp", NULL), 77 );//frame 2
	
	//defence
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/16defence/00.bmp", NULL), 78 );//frame 0
	
	//takingDamage
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/17takingDamage/00.bmp", NULL), 79 );//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/17takingDamage/01.bmp", NULL), 80 );//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/17takingDamage/02.bmp", NULL), 81 );//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/17takingDamage/03.bmp", NULL), 82 );//frame 3
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/17takingDamage/04.bmp", NULL), 83 );//frame 4
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/17takingDamage/05.bmp", NULL), 84 );//frame 5
	
	//defendingCrouched
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/19defendingCrouched/00.bmp", NULL), 85 );//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/19defendingCrouched/01.bmp", NULL), 86 );//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/19defendingCrouched/02.bmp", NULL), 87 );//frame 2
	
	//defenceCrouched
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/20defenceCrouched/00.bmp", NULL), 88 );//frame 0
	
	//takingDamageCrouched
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/21takingDamageCrouched/00.bmp", NULL), 89 );//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/21takingDamageCrouched/01.bmp", NULL), 90 );//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/21takingDamageCrouched/02.bmp", NULL), 91 );//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/21takingDamageCrouched/03.bmp", NULL), 92 );//frame 3
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/21takingDamageCrouched/04.bmp", NULL), 93 );//frame 4
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/21takingDamageCrouched/05.bmp", NULL), 94 );//frame 5
	
	//frontRolling
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/23frontRolling/00.bmp", NULL), 95  );//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/23frontRolling/01.bmp", NULL), 96  );//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/23frontRolling/02.bmp", NULL), 97  );//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/23frontRolling/03.bmp", NULL), 98  );//frame 3
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/23frontRolling/04.bmp", NULL), 99  );//frame 4
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/23frontRolling/05.bmp", NULL), 100 );//frame 5
	
	//backRolling
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/00.bmp", NULL), 101 );//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/01.bmp", NULL), 102 );//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/02.bmp", NULL), 103 );//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/03.bmp", NULL), 104 );//frame 3
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/04.bmp", NULL), 105 );//frame 4
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/24backRolling/05.bmp", NULL), 106 );//frame 5
	
	//slide
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/25slide/00.bmp", NULL), 107 );//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/25slide/01.bmp", NULL), 108 );//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/25slide/02.bmp", NULL), 109 );//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/25slide/03.bmp", NULL), 110 );//frame 3
	
	//frontRollingEnd
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/26frontRollingEnd/00.bmp", NULL), 111 );//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/26frontRollingEnd/01.bmp", NULL), 112 );//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/26frontRollingEnd/02.bmp", NULL), 113 );//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/26frontRollingEnd/03.bmp", NULL), 114 );//frame 3
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/26frontRollingEnd/04.bmp", NULL), 115 );//frame 4
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/26frontRollingEnd/05.bmp", NULL), 116 );//frame 5
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/26frontRollingEnd/06.bmp", NULL), 117 );//frame 6
	
	//backRollingEnd
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/27backRollingEnd/00.bmp", NULL), 118 );//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/27backRollingEnd/01.bmp", NULL), 119 );//frame 1
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/27backRollingEnd/02.bmp", NULL), 120 );//frame 2
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/27backRollingEnd/03.bmp", NULL), 121 );//frame 3
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/27backRollingEnd/04.bmp", NULL), 122 );//frame 4
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/27backRollingEnd/05.bmp", NULL), 123 );//frame 5
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/27backRollingEnd/06.bmp", NULL), 124 );//frame 6
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/27backRollingEnd/07.bmp", NULL), 125 );//frame 7
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/27backRollingEnd/08.bmp", NULL), 126 );//frame 8
	
	//changeSide
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/28changeSide/00.bmp", NULL), 127 );//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/28changeSide/01.bmp", NULL), 128 );//frame 1
	
	//changeSideCrouched
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/29changeSideCrouched/00.bmp", NULL), 129 );//frame 0
	SetSpritesToLeft( load_bitmap("sprites/personagens/terry/notToRight/standardColor/29changeSideCrouched/01.bmp", NULL), 130 );//frame 1

}END_OF_FUNCTION(LoadSprites)












