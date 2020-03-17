#include <allegro.h>
#include "Player.h"

//sprites
BITMAP* Player::GetPlayerSprite()//esse metodo retorna o frame que deve ser renderizado
{
	if( toRight ) 
		return sprites[ frame ];
	else 
		return spritesToLeft[ frame ];
	
}END_OF_FUNCTION(GetPlayerSprite);

//sprites
BITMAP* Player::GetSprites(int index)
{
	return sprites[index];
}END_OF_FUNCTION(GetSprites)

//sprites
void Player::SetSrites(BITMAP *sprite, int index)
{
	this->sprites[index] = sprite;
}END_OF_FUNCTION(SetSrite)

//spritesToLeft
void Player::SetSpritesToLeft(BITMAP *spritesToLeft, int index)
{
	this->spritesToLeft[index] = spritesToLeft;
}END_OF_FUNCTION(SetSrite)

//x
float Player::GetX()
{
	return x;
}END_OF_FUNCTION(GetX);
void  Player::SetX(float x)
{
	this->x = x;
}END_OF_FUNCTION(SetX);

//y
float Player::GetY()
{
	return y;
}END_OF_FUNCTION(GetY);
void  Player::SetY(float y)
{
	this->y = y;
}END_OF_FUNCTION(SetY);

//speedX
float Player::GetSpeedX()
{
	return speedX;
}END_OF_FUNCTION(GetSpeedX);
void  Player::SetSpeedX(float speedX)
{
	this->speedX = speedX;
}END_OF_FUNCTION(SetSpeedX);

//speedY
float Player::GetSpeedY()
{
	return speedY;
}END_OF_FUNCTION(GetSpeedY);
void  Player::SetSpeedY(float speedY)
{
	this->speedY = speedY;
}END_OF_FUNCTION(SetSpeedY);

//action
int   Player::GetAction()
{
	return action;
}END_OF_FUNCTION(GetAction);
void  Player::SetAction(int action)
{
	this->action = action;
}END_OF_FUNCTION(SetAction);

//frame
int Player::GetFrame()
{
	return frame;
}END_OF_FUNCTION(GetFrame);
void Player::SetFrame(int frame)
{
	this->frame = frame;
}END_OF_FUNCTION(SetFrame);

//startAnimation
bool Player::GetStartAnimation()
{
	return startAnimation;
}
void Player::SetStartAnimation(bool startAnimation)
{
	this->startAnimation = startAnimation;
}

//toRight
bool  Player::GetToRight()
{
	return toRight;
}END_OF_FUNCTION(GetToRight);
void  Player::SetToRight(bool toRight)
{
	this->toRight = toRight;
}END_OF_FUNCTION(SetToRight);

//button00
bool Player::GetButton00()
{
	return button00;
}END_OF_FUNCTION(GetButton00);

//button01
bool Player::GetButton01()
{
	return button01;
}END_OF_FUNCTION(GetButton01);

//button02
bool Player::GetButton02()
{
	return button02;
}END_OF_FUNCTION(GetButton02);

//button03
bool Player::GetButton03()
{
	return button03;
}END_OF_FUNCTION(GetButton03);

//button04
bool Player::GetButton04()
{
	return button04;
}END_OF_FUNCTION(GetButton04);

//button05
bool Player::GetButton05()
{
	return button05;
}END_OF_FUNCTION(GetButton05);

//button06
bool Player::GetButton06()
{
	return button06;
}END_OF_FUNCTION(GetButton06);

//button07
bool Player::GetButton07()
{
	return button07;
}END_OF_FUNCTION(GetButton07);

//btTPress
int Player::GetBtTPress(int botao, int pos)
{
	return btTPress[botao][pos];
}END_OF_FUNCTION(getBtTPress);

//lifePoints
void Player::SetLifePoints(int lifePoints)
{
	this->lifePoints = lifePoints;
}END_OF_FUNCTION(SetLifePoints);
int Player::GetLifePoints()
{
	return lifePoints;
}END_OF_FUNCTION(GetLifePoints);

//lifePointsMax
void Player::SetLifePointsMax(int lifePointsMax)
{
	this->lifePointsMax = lifePointsMax;
}END_OF_FUNCTION(SetLifePointsMax);
int Player::GetLifePointsMax()
{
	return lifePointsMax;
}END_OF_FUNCTION(GetLifePointsMax);

//defence
void Player::SetShild(int shild)
{
	this->shild = shild;
}END_OF_FUNCTION(SetShild);
int Player::GetShild()
{
	return shild;
}END_OF_FUNCTION(GetShild);

//especialBar
void Player::SetEspecialBar(int especialBar)
{
	this->especialBar = especialBar;
}END_OF_FUNCTION(SetEspecialBar);
int Player::GetEspecialBar()
{
	return especialBar;
}END_OF_FUNCTION(GetEspecialBar);

//especialQuantity
void Player::SetEspecialQuantity(int especialQuantity)
{
	this->especialQuantity = especialQuantity;
}END_OF_FUNCTION(SetEspecialQuantity);
int Player::GetEspecialQuantity()
{
	return especialQuantity;
}END_OF_FUNCTION(GetEspecialQuantity);

//powTime
void Player::SetPowTime(int powTime)
{
	this->powTime = powTime;
}END_OF_FUNCTION(SetPowTime);
int Player::GetPowTime()
{
	return powTime;
}END_OF_FUNCTION(GetPowTime);

//pow
void Player::SetPow(int pow)
{
	this->pow = pow;
}END_OF_FUNCTION(SetPow);
bool Player::GetPow()
{
	return pow;
}END_OF_FUNCTION(GetPow);


//capturaTempo
int Player::GetCapturaTempo()
{
	return capturaTempo;
}
void Player::SetCapturaTempo(int capturaTempo)
{
	this->capturaTempo = capturaTempo;
}

//animações
void Player::SetIdle(int idle, int index)
{
	this->idle[index] = idle;
}
void Player::SetCrouching(int crouching, int index)
{
	this->crouching[index] = crouching;
}
void Player::SetCrouchedIdle(int crouchedIdle, int index)
{
	this->crouchedIdle[index] = crouchedIdle;
}
void Player::SetWalk(int walk, int index)
{
	this->walk[index] = walk;
}
void Player::SetWalkBack(int walkBack, int index)
{
	this->walkBack[index] = walkBack;
}
void Player::SetRising(int rising, int index)
{
	this->rising[index] = rising;
}
void Player::SetEndOfClimp(int endOfClimp, int index)
{
	this->endOfClimp[index] = endOfClimp;
}
void Player::SetFalling(int falling, int index)
{
	this->falling[index] = falling;
}
void Player::SetFall(int fall, int index)
{
	this->fall[index] = fall;
}
void Player::SetStrongFrontalDJ(int strongFrontalDJ, int index)
{
	this->strongFrontalDJ[index] = strongFrontalDJ;
}
void Player::SetStrongBackDJ(int strongBackDJ, int index)
{
	this->strongBackDJ[index] = strongBackDJ;
}
void Player::SetRun(int run, int index)
{
	this->run[index] = run;
}
void Player::SetJumpBack(int jumpBack, int index)
{
	this->jumpBack[index] = jumpBack;
}
void Player::SetJumpBackFall(int jumpBackFall, int index)
{
	this->jumpBackFall[index] = jumpBackFall;
}
void Player::SetDefending (int defending, int index)
{
	this->defending[index] = defending;
}
void Player::SetDefence(int defence, int index)
{
	this->defence[index] = defence;
}
void Player::SetTakingDamage(int takingDamage, int index)
{
	this->takingDamage[index] = takingDamage;
}
void Player::SetDefendExit(int defendExit, int index)
{
	this->defendExit[index] = defendExit;
}
void Player::SetDefendingCrouched(int defendingCrouched, int index)
{
	this->defendingCrouched[index] = defendingCrouched;
}
void Player::SetDefenceCrouched(int defenceCrouched, int index)
{
	this->defenceCrouched[index]= defenceCrouched;
}
void Player::SetTakingDamageCrouched(int takingDamageCrouched, int index)
{
	this->takingDamageCrouched[index] = takingDamageCrouched;
}
void Player::SetDefendExitCrouched(int defendExitCrouched, int index)
{
	this->defendExitCrouched[index] = defendExitCrouched;
}
void Player::SetFrontRolling(int frontRolling, int index)
{
	this->frontRolling[index] = frontRolling;
}
void Player::SetBackRolling(int backRolling, int index)
{
	this->backRolling[index] = backRolling;
}
void Player::SetSlide(int slide, int index)
{
	this->slide[index] = slide;
}
void Player::SetFrontRollingEnd(int frontRollingEnd, int index)
{
	this->frontRollingEnd[index] = frontRollingEnd;
}
void Player::SetBackRollingEnd(int backRollingEnd, int index)
{
	this->backRollingEnd[index] = backRollingEnd;
}
void Player::SetChangeSide(int changeSide, int index)
{
	this->changeSide[index] = changeSide;
}
void Player::SetChangeSideCrouched(int changeSideCrouched, int index)
{
	this->changeSideCrouched[index] = changeSideCrouched;
}
void Player::SetTakingDmg(bool takingDmg)
{
	this->takingDmg = takingDmg;
}












