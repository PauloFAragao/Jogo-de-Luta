#include <allegro.h>
#include "Terry.h"

//construtor
Terry::Terry(){LoadSprites();}

//destrutor
Terry::~Terry(){}


void  Terry::TerryAnimations()//animações de ataques especificos
{
	
}END_OF_FUNCTION(TerryAnimations)


void Terry::LoadSprites()
{
	
	//idle
	SetSrites( load_bitmap("sprites/Terry/00Idle/idle000.bmp", NULL), 0 );//frame 0
	SetSrites( load_bitmap("sprites/Terry/00Idle/idle001.bmp", NULL), 1 );//frame 1
	SetSrites( load_bitmap("sprites/Terry/00Idle/idle002.bmp", NULL), 2 );//frame 2
	SetSrites( load_bitmap("sprites/Terry/00Idle/idle003.bmp", NULL), 3 );//frame 3
	SetSrites( load_bitmap("sprites/Terry/00Idle/idle004.bmp", NULL), 4 );//frame 4
	SetSrites( load_bitmap("sprites/Terry/00Idle/idle005.bmp", NULL), 5 );//frame 5
	SetSrites( load_bitmap("sprites/Terry/00Idle/idle006.bmp", NULL), 6 );//frame 6
	SetSrites( load_bitmap("sprites/Terry/00Idle/idle007.bmp", NULL), 7 );//frame 7
	
	//walk
	SetSrites( load_bitmap("sprites/Terry/04Walk/walk00.bmp", NULL), 8 );//frame 0
	SetSrites( load_bitmap("sprites/Terry/04Walk/walk01.bmp", NULL), 9 );//frame 1
	SetSrites( load_bitmap("sprites/Terry/04Walk/walk02.bmp", NULL), 10);//frame 2
	SetSrites( load_bitmap("sprites/Terry/04Walk/walk03.bmp", NULL), 11);//frame 3
	SetSrites( load_bitmap("sprites/Terry/04Walk/walk04.bmp", NULL), 12);//frame 4
	SetSrites( load_bitmap("sprites/Terry/04Walk/walk05.bmp", NULL), 13);//frame 5
	SetSrites( load_bitmap("sprites/Terry/04Walk/walk06.bmp", NULL), 14);//frame 6
	SetSrites( load_bitmap("sprites/Terry/04Walk/walk07.bmp", NULL), 15);//frame 7
	SetSrites( load_bitmap("sprites/Terry/04Walk/walk08.bmp", NULL), 16);//frame 8
	
	//walkBack
	SetSrites( load_bitmap("sprites/Terry/05WalkBack/WalkBack00.bmp", NULL), 17);//frame 0
	SetSrites( load_bitmap("sprites/Terry/05WalkBack/WalkBack01.bmp", NULL), 18);//frame 1
	SetSrites( load_bitmap("sprites/Terry/05WalkBack/WalkBack02.bmp", NULL), 19);//frame 2
	SetSrites( load_bitmap("sprites/Terry/05WalkBack/WalkBack03.bmp", NULL), 20);//frame 3
	SetSrites( load_bitmap("sprites/Terry/05WalkBack/WalkBack04.bmp", NULL), 21);//frame 4
	SetSrites( load_bitmap("sprites/Terry/05WalkBack/WalkBack05.bmp", NULL), 22);//frame 5
	SetSrites( load_bitmap("sprites/Terry/05WalkBack/WalkBack06.bmp", NULL), 23);//frame 6
	SetSrites( load_bitmap("sprites/Terry/05WalkBack/WalkBack07.bmp", NULL), 24);//frame 7
	SetSrites( load_bitmap("sprites/Terry/05WalkBack/WalkBack08.bmp", NULL), 25);//frame 8
	
	//run
	SetSrites( load_bitmap("sprites/Terry/12Run/run00.bmp", NULL), 26);//frame 0
	SetSrites( load_bitmap("sprites/Terry/12Run/run01.bmp", NULL), 27);//frame 1
	SetSrites( load_bitmap("sprites/Terry/12Run/run02.bmp", NULL), 28);//frame 2
	SetSrites( load_bitmap("sprites/Terry/12Run/run03.bmp", NULL), 29);//frame 3
	SetSrites( load_bitmap("sprites/Terry/12Run/run04.bmp", NULL), 30);//frame 4
	SetSrites( load_bitmap("sprites/Terry/12Run/run05.bmp", NULL), 31);//frame 5
	SetSrites( load_bitmap("sprites/Terry/12Run/run06.bmp", NULL), 32);//frame 6
	SetSrites( load_bitmap("sprites/Terry/12Run/run07.bmp", NULL), 33);//frame 7
	SetSrites( load_bitmap("sprites/Terry/12Run/run08.bmp", NULL), 34);//frame 8
	
	//jumpBack
	SetSrites( load_bitmap("sprites/Terry/13jumpBack/jumpBack00.bmp", NULL), 35);//frame 0
	SetSrites( load_bitmap("sprites/Terry/13jumpBack/jumpBack01.bmp", NULL), 36);//frame 1
	SetSrites( load_bitmap("sprites/Terry/13jumpBack/jumpBack02.bmp", NULL), 37);//frame 2
	SetSrites( load_bitmap("sprites/Terry/13jumpBack/jumpBack03.bmp", NULL), 38);//frame 3
	SetSrites( load_bitmap("sprites/Terry/13jumpBack/jumpBack04.bmp", NULL), 39);//frame 4
	
	//crouching 
	SetSrites( load_bitmap("sprites/Terry/02crouching/crouching00.bmp", NULL), 40);//frame 0
	SetSrites( load_bitmap("sprites/Terry/02crouching/crouching01.bmp", NULL), 41);//frame 1
	
	//rising
	SetSrites( load_bitmap("sprites/Terry/06-2rising/jump00.bmp", NULL), 42);//frame 0
	
	//endOfClimp
	SetSrites( load_bitmap("sprites/Terry/06-3endOfClimp/endOfClimp00.bmp", NULL), 43);//frame 0
	SetSrites( load_bitmap("sprites/Terry/06-3endOfClimp/endOfClimp01.bmp", NULL), 44);//frame 1
	
	//falling
	SetSrites( load_bitmap("sprites/Terry/06-4falling/falling00.bmp", NULL), 45);//frame 0
	SetSrites( load_bitmap("sprites/Terry/06-4falling/falling01.bmp", NULL), 46);//frame 1
	
	//fall
	SetSrites( load_bitmap("sprites/Terry/06-5fall/fall00.bmp", NULL), 47);//frame 0
	SetSrites( load_bitmap("sprites/Terry/06-5fall/fall01.bmp", NULL), 48);//frame 1
	SetSrites( load_bitmap("sprites/Terry/06-5fall/fall02.bmp", NULL), 49);//frame 2
	SetSrites( load_bitmap("sprites/Terry/06-5fall/fall03.bmp", NULL), 50);//frame 3
	
	//strongFrontalDiagonalJump
	SetSrites( load_bitmap("sprites/Terry/09strongFrontalDiagonalJump/strongFrontalDiagonalJump00.bmp", NULL), 51);//frame 0
	SetSrites( load_bitmap("sprites/Terry/09strongFrontalDiagonalJump/strongFrontalDiagonalJump01.bmp", NULL), 52);//frame 1
	SetSrites( load_bitmap("sprites/Terry/09strongFrontalDiagonalJump/strongFrontalDiagonalJump02.bmp", NULL), 53);//frame 2
	SetSrites( load_bitmap("sprites/Terry/09strongFrontalDiagonalJump/strongFrontalDiagonalJump03.bmp", NULL), 54);//frame 3
	SetSrites( load_bitmap("sprites/Terry/09strongFrontalDiagonalJump/strongFrontalDiagonalJump04.bmp", NULL), 55);//frame 4
	SetSrites( load_bitmap("sprites/Terry/09strongFrontalDiagonalJump/strongFrontalDiagonalJump05.bmp", NULL), 56);//frame 5
	SetSrites( load_bitmap("sprites/Terry/09strongFrontalDiagonalJump/strongFrontalDiagonalJump06.bmp", NULL), 57);//frame 6
	SetSrites( load_bitmap("sprites/Terry/09strongFrontalDiagonalJump/strongFrontalDiagonalJump07.bmp", NULL), 58);//frame 7
	SetSrites( load_bitmap("sprites/Terry/09strongFrontalDiagonalJump/strongFrontalDiagonalJump08.bmp", NULL), 59);//frame 8
	
	//strongBackDiagonalJump
	SetSrites( load_bitmap("sprites/Terry/11strongBackDiagonalJump/strongBackDiagonalJump00.bmp", NULL), 60);//frame 0
	SetSrites( load_bitmap("sprites/Terry/11strongBackDiagonalJump/strongBackDiagonalJump01.bmp", NULL), 61);//frame 1
	SetSrites( load_bitmap("sprites/Terry/11strongBackDiagonalJump/strongBackDiagonalJump02.bmp", NULL), 62);//frame 2
	SetSrites( load_bitmap("sprites/Terry/11strongBackDiagonalJump/strongBackDiagonalJump03.bmp", NULL), 63);//frame 3
	SetSrites( load_bitmap("sprites/Terry/11strongBackDiagonalJump/strongBackDiagonalJump04.bmp", NULL), 64);//frame 4
	SetSrites( load_bitmap("sprites/Terry/11strongBackDiagonalJump/strongBackDiagonalJump05.bmp", NULL), 65);//frame 5
	SetSrites( load_bitmap("sprites/Terry/11strongBackDiagonalJump/strongBackDiagonalJump06.bmp", NULL), 66);//frame 6
	SetSrites( load_bitmap("sprites/Terry/11strongBackDiagonalJump/strongBackDiagonalJump07.bmp", NULL), 67);//frame 7
	
	//crouchedIdle
	SetSrites( load_bitmap("sprites/Terry/01crouchedIdle/crouchedIdle00.bmp", NULL), 68);//frame 0
	SetSrites( load_bitmap("sprites/Terry/01crouchedIdle/crouchedIdle01.bmp", NULL), 69);//frame 1
	SetSrites( load_bitmap("sprites/Terry/01crouchedIdle/crouchedIdle02.bmp", NULL), 70);//frame 2
	SetSrites( load_bitmap("sprites/Terry/01crouchedIdle/crouchedIdle03.bmp", NULL), 71);//frame 3
	SetSrites( load_bitmap("sprites/Terry/01crouchedIdle/crouchedIdle04.bmp", NULL), 72);//frame 4
	SetSrites( load_bitmap("sprites/Terry/01crouchedIdle/crouchedIdle05.bmp", NULL), 73);//frame 5
	
	

}END_OF_FUNCTION(LoadSprites)


















