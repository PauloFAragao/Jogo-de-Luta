#include <allegro.h>
#include "Player.h"

//sprites
BITMAP* Player::GetSprites(int side, int index)
{
	return sprites[side][index];
}END_OF_FUNCTION(GetSprites);

//sprites
void Player::SetSrites(BITMAP *sprite, int index, int side )
{
	this->sprites[side][index] = sprite;
}END_OF_FUNCTION(SetSrite);

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
}END_OF_FUNCTION(GetStartAnimation);
void Player::SetStartAnimation(bool startAnimation)
{
	this->startAnimation = startAnimation;
}END_OF_FUNCTION(SetStartAnimation);

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
}END_OF_FUNCTION(GetCapturaTempo);
void Player::SetCapturaTempo(int capturaTempo)
{
	this->capturaTempo = capturaTempo;
}END_OF_FUNCTION(SetCapturaTempo);

	//animações

//idle
void Player::SetIdle(int idle, int index)
{
	this->idle[index] = idle;
}END_OF_FUNCTION(SetIdle);
int Player::GetIdle( int index )
{
	return idle[index];
}END_OF_FUNCTION(GetIdle);

//crouching
void Player::SetCrouching(int crouching, int index)
{
	this->crouching[index] = crouching;
}END_OF_FUNCTION(SetCrouching);
int Player::GetCrouching( int index )
{
	return crouching[index];
}END_OF_FUNCTION(GetCrouching);

//crouchedIdle
void Player::SetCrouchedIdle(int crouchedIdle, int index)
{
	this->crouchedIdle[index] = crouchedIdle;
}END_OF_FUNCTION(SetCrouchedIdle);
int Player::GetCrouchedIdle( int index )
{
	return crouchedIdle[index];
}END_OF_FUNCTION(GetCrouchedIdle);

//walk
void Player::SetWalk(int walk, int index)
{
	this->walk[index] = walk;
}END_OF_FUNCTION(SetWalk);
int Player::GetWalk( int index )
{
	return walk[index];
}END_OF_FUNCTION(GetWalk);

//walkBack
void Player::SetWalkBack(int walkBack, int index)
{
	this->walkBack[index] = walkBack;
}END_OF_FUNCTION(SetWalkBack);
int Player::GetWalkBack( int index )
{
	return walkBack[index];
}END_OF_FUNCTION(GetWalkBack);

//rising
void Player::SetRising(int rising, int index)
{
	this->rising[index] = rising;
}END_OF_FUNCTION(SetRising);
int Player::GetRising( int index )
{
	return rising[index];
}END_OF_FUNCTION(GetRising);

//endOfClimp
void Player::SetEndOfClimp(int endOfClimp, int index)
{
	this->endOfClimp[index] = endOfClimp;
}END_OF_FUNCTION(SetEndOfClimp);
int Player::GetEndOfClimp( int index )
{
	return endOfClimp[index];
}END_OF_FUNCTION(GetEndOfClimp);

//falling
void Player::SetFalling(int falling, int index)
{
	this->falling[index] = falling;
}END_OF_FUNCTION(SetFalling);
int Player::GetFalling( int index )
{
	return falling[index];
}END_OF_FUNCTION(GetFalling);

//fall
void Player::SetFall(int fall, int index)
{
	this->fall[index] = fall;
}END_OF_FUNCTION(SetFall);
int Player::GetFall( int index )
{
	return fall[index];
}END_OF_FUNCTION(GetFall);

//strongFrontalDJ
void Player::SetStrongFrontalDJ(int strongFrontalDJ, int index)
{
	this->strongFrontalDJ[index] = strongFrontalDJ;
}END_OF_FUNCTION(SetStrongFrontalDJ);
int Player::GetStrongFrontalDJ( int index )
{
	return strongFrontalDJ[index];
}END_OF_FUNCTION(GetStrongFrontalDJ);

//strongBackDJ
void Player::SetStrongBackDJ(int strongBackDJ, int index)
{
	this->strongBackDJ[index] = strongBackDJ;
}END_OF_FUNCTION(SetStrongBackDJ);
int Player::GetStrongBackDJ( int index )
{
	return strongBackDJ[index];
}END_OF_FUNCTION(GetStrongBackDJ);

//run
void Player::SetRun(int run, int index)
{
	this->run[index] = run;
}END_OF_FUNCTION(SetRun);
int Player::GetRun( int index )
{
	return run[index];
}END_OF_FUNCTION(GetRun);

//jumpBack
void Player::SetJumpBack(int jumpBack, int index)
{
	this->jumpBack[index] = jumpBack;
}END_OF_FUNCTION(SetJumpBack);
int Player::GetJumpBack( int index )
{
	return jumpBack[index];
}END_OF_FUNCTION(GetJumpBack);

//jumpBackFall
void Player::SetJumpBackFall(int jumpBackFall, int index)
{
	this->jumpBackFall[index] = jumpBackFall;
}END_OF_FUNCTION(SetJumpBackFall);
int Player::GetJumpBackFall( int index )
{
	return jumpBackFall[index];
}END_OF_FUNCTION(GetJumpBackFall);

//defending
void Player::SetDefending (int defending, int index)
{
	this->defending[index] = defending;
}END_OF_FUNCTION(SetDefending);
int Player::GetDefending( int index )
{
	return defending[index];
}END_OF_FUNCTION(GetDefending);

//defence
void Player::SetDefence(int defence, int index)
{
	this->defence[index] = defence;
}END_OF_FUNCTION(SetDefence);
int Player::GetDefence( int index )
{
	return defence[index];
}END_OF_FUNCTION(GetDefence);

//takingDamage
void Player::SetTakingDamage(int takingDamage, int index)
{
	this->takingDamage[index] = takingDamage;
}END_OF_FUNCTION(SetTakingDamage);
int Player::GetTakingDamage( int index )
{
	return takingDamage[index];
}END_OF_FUNCTION(GetTakingDamage);

//defendExit
void Player::SetDefendExit(int defendExit, int index)
{
	this->defendExit[index] = defendExit;
}END_OF_FUNCTION(SetDefendExit);
int Player::GetDefendExit( int index )
{
	return defendExit[index];
}END_OF_FUNCTION(GetDefendExit);

//defendingCrouched
void Player::SetDefendingCrouched(int defendingCrouched, int index)
{
	this->defendingCrouched[index] = defendingCrouched;
}END_OF_FUNCTION(SetDefendingCrouched);
int Player::GetDefendingCrouched( int index )
{
	return defendingCrouched[index];
}END_OF_FUNCTION(GetDefendingCrouched);

//defenceCrouched
void Player::SetDefenceCrouched(int defenceCrouched, int index)
{
	this->defenceCrouched[index]= defenceCrouched;
}END_OF_FUNCTION(SetDefenceCrouched);
int Player::GetDefenceCrouched( int index )
{
	return defenceCrouched[index];
}END_OF_FUNCTION(GetDefenceCrouched);

//takingDamageCrouched
void Player::SetTakingDamageCrouched(int takingDamageCrouched, int index)
{
	this->takingDamageCrouched[index] = takingDamageCrouched;
}END_OF_FUNCTION(SetTakingDamageCrouched);
int Player::GetTakingDamageCrouched( int index )
{
	return takingDamageCrouched[index];
}END_OF_FUNCTION(GetTakingDamageCrouched);

//defendExitCrouched
void Player::SetDefendExitCrouched(int defendExitCrouched, int index)
{
	this->defendExitCrouched[index] = defendExitCrouched;
}END_OF_FUNCTION(SetDefendExitCrouched);
int Player::GetDefendExitCrouched( int index )
{
	return defendExitCrouched[index];
}END_OF_FUNCTION(GetDefendExitCrouched);

//frontRolling
void Player::SetFrontRolling(int frontRolling, int index)
{
	this->frontRolling[index] = frontRolling;
}END_OF_FUNCTION(SetFrontRolling);
int Player::GetFrontRolling( int index )
{
	return frontRolling[index];
}END_OF_FUNCTION(GetFrontRolling);

//backRolling
void Player::SetBackRolling(int backRolling, int index)
{
	this->backRolling[index] = backRolling;
}END_OF_FUNCTION(SetBackRolling);
int Player::GetBackRolling( int index )
{
	return backRolling[index];
}END_OF_FUNCTION(GetBackRolling);

//slide
void Player::SetSlide(int slide, int index)
{
	this->slide[index] = slide;
}END_OF_FUNCTION(SetSlide);
int Player::GetSlide( int index )
{
	return slide[index];
}END_OF_FUNCTION(GetSlide);

//frontRollingEnd
void Player::SetFrontRollingEnd(int frontRollingEnd, int index)
{
	this->frontRollingEnd[index] = frontRollingEnd;
}END_OF_FUNCTION(SetFrontRollingEnd);
int Player::GetFrontRollingEnd( int index )
{
	return frontRollingEnd[index];
}END_OF_FUNCTION(GetFrontRollingEnd);

//backRollingEnd
void Player::SetBackRollingEnd(int backRollingEnd, int index)
{
	this->backRollingEnd[index] = backRollingEnd;
}END_OF_FUNCTION(SetBackRollingEnd);
int Player::GetBackRollingEnd( int index )
{
	return backRollingEnd[index];
}END_OF_FUNCTION(GetBackRollingEnd);

//changeSide
void Player::SetChangeSide(int changeSide, int index)
{
	this->changeSide[index] = changeSide;
}END_OF_FUNCTION(SetChangeSide);
int Player::GetChangeSide( int index )
{
	return changeSide[index];
}END_OF_FUNCTION(GetChangeSide);

//changeSideCrouched
void Player::SetChangeSideCrouched(int changeSideCrouched, int index)
{
	this->changeSideCrouched[index] = changeSideCrouched;
}END_OF_FUNCTION(SetChangeSideCrouched);
int Player::GetChangeSideCrouched( int index )
{
	return changeSideCrouched[index];
}END_OF_FUNCTION(GetChangeSideCrouched);

//weakPunch
int Player::GetWeakPunch( int index )
{
	return weakPunch[index];
}END_OF_FUNCTION(GetWeakPunch);
void Player::SetWeakPunch( int weakPunch, int index )
{
	this->weakPunch[index] = weakPunch;
}END_OF_FUNCTION(SetWeakPunch);

//strongPunch
int Player::GetStrongPunch( int index )
{
	return strongPunch[index];
}END_OF_FUNCTION(GetStrongPunch);
void Player::SetStrongPunch( int strongPunch, int index )
{
	this-> strongPunch[index] = strongPunch;
}END_OF_FUNCTION(SetStrongPunch);

//weakKick
int Player::GetWeakKick( int index )
{
	return weakKick[index];
}END_OF_FUNCTION(GetWeakKick);
void Player::SetWeakKick( int weakKick, int index )
{
	this-> weakKick[index] = weakKick;
}END_OF_FUNCTION(SetWeakKick);

//strongKick
int Player::GetStrongKick( int index )
{
	return strongKick[index];
}END_OF_FUNCTION(GetStrongKick);
void Player::SetStrongKick( int strongKick, int index )
{
	this-> strongKick[index] = strongKick;
}END_OF_FUNCTION(SetStrongKick);

//strongKickEnd
int Player::GetStrongKickEnd( int index )
{
	return strongKickEnd[index];
}END_OF_FUNCTION(GetStrongKickEnd);
void Player::SetStrongKickEnd( int strongKickEnd, int index )
{
	this->strongKickEnd[index] = strongKickEnd;
}END_OF_FUNCTION(SetStrongKickEnd);

//crouchedWeakPunch
int Player::GetCrouchedWeakPunch( int index )
{
	return crouchedWeakPunch[index];
}END_OF_FUNCTION(GetCrouchedWeakPunch);
void Player::SetCrouchedWeakPunch( int crouchedWeakPunch, int index )
{
	this->crouchedWeakPunch[index] = crouchedWeakPunch;
}END_OF_FUNCTION(SetCrouchedWeakPunch);

//crouchedStrongPunch
int Player::GetCrouchedStrongPunch( int index )
{
	return crouchedStrongPunch[index];
}END_OF_FUNCTION(GetCrouchedStrongPunch);
void Player::SetCrouchedStrongPunch( int crouchedStrongPunch, int index )
{
	this->crouchedStrongPunch[index] = crouchedStrongPunch ;
}END_OF_FUNCTION(SetCrouchedStrongPunch);

//crouchedWeakKick
int Player::GetCrouchedWeakKick( int index )
{
	return crouchedWeakKick[index];
}END_OF_FUNCTION(GetCrouchedWeakKick);
void Player::SetCrouchedWeakKick( int crouchedWeakKick, int index )
{
	this->crouchedWeakKick[index] = crouchedWeakKick;
}END_OF_FUNCTION(SetCrouchedWeakKick);

//crouchedStrongKick
int Player::Player::GetCrouchedStrongKick( int index )
{
	return crouchedStrongKick[index];
}END_OF_FUNCTION(GetCrouchedStrongKick);
void Player::SetCrouchedStrongKick( int crouchedStrongKick, int index )
{
	this->crouchedStrongKick[index] = crouchedStrongKick;
}END_OF_FUNCTION(SetCrouchedStrongKick);

//jumpingWeakPunch
int Player::GetJumpingWeakPunch( int index )
{
	return jumpingWeakPunch[index];
}END_OF_FUNCTION(GetJumpingWeakPunch);
void Player::SetJumpingWeakPunch( int jumpingWeakPunch, int index )
{
	this->jumpingWeakPunch[index] = jumpingWeakPunch;
}END_OF_FUNCTION(SetJumpingWeakPunch);

//jumpingStrongPunch
int Player::GetJumpingStrongPunch( int index )
{
	return jumpingStrongPunch[index];
}END_OF_FUNCTION(GetJumpingStrongPunch);
void Player::SetJumpingStrongPunch( int jumpingStrongPunch, int index )
{
	this->jumpingStrongPunch[index] = jumpingStrongPunch;
}END_OF_FUNCTION(SetJumpingStrongPunch);

//jumpingWeakKick
int Player::GetJumpingWeakKick( int index )
{
	return jumpingWeakKick[index];
}END_OF_FUNCTION(GetJumpingWeakKick);
void Player::SetJumpingWeakKick( int jumpingWeakKick, int index )
{
	this->jumpingWeakKick[index] = jumpingWeakKick;
}END_OF_FUNCTION(SetJumpingWeakKick);

//jumpingStrongKick
int Player::GetJumpingStrongKick( int index )
{
	return jumpingStrongKick[index];
}END_OF_FUNCTION(GetJumpingStrongKick);
void Player::SetJumpingStrongKick( int jumpingStrongKick, int index )
{
	this->jumpingStrongKick[index] = jumpingStrongKick;
}END_OF_FUNCTION(SetJumpingStrongKick);

//gluedStrongPunch
int Player::GetGluedStrongPunch( int index )
{
	return gluedStrongPunch[index];
}END_OF_FUNCTION(GetGluedStrongPunch);
void Player::SetGluedStrongPunch( int gluedStrongPunch, int index )
{
	this->gluedStrongPunch[index] = gluedStrongPunch;
}END_OF_FUNCTION(SetGluedStrongPunch);

//gluedStrongKick
int Player::GetGluedStrongKick( int index )
{
	return gluedStrongKick[index];
}END_OF_FUNCTION(GetGluedStrongKick);
void Player::SetGluedStrongKick( int gluedStrongKick, int index )
{
	this->gluedStrongKick[index] = gluedStrongKick;
}END_OF_FUNCTION(SetGluedStrongKick);

//jumpingSpecialAttack
int Player::GetJumpingSpecialAttack( int index )
{
	return jumpingSpecialAttack[index];
}END_OF_FUNCTION(GetJumpingSpecialAttack);
void Player::SetJumpingSpecialAttack( int jumpingSpecialAttack, int index )
{
	this->jumpingSpecialAttack[index] = jumpingSpecialAttack;
}END_OF_FUNCTION(SetJumpingSpecialAttack);

//weakPunchForward
int Player::GetWeakPunchForward( int index )
{
	return weakPunchForward[index];
}END_OF_FUNCTION(GetWeakPunchForward);
void Player::SetWeakPunchForward( int weakPunchForward, int index )
{
	this->weakPunchForward[index] = weakPunchForward;
}END_OF_FUNCTION(SetWeakPunchForward);

//takingDmg
void Player::SetTakingDmg(bool takingDmg)
{
	this->takingDmg = takingDmg;
}END_OF_FUNCTION(SetTakingDmg);

//attacking
bool Player::GetAttacking()
{
	return attacking;
}END_OF_FUNCTION(GetAttacking);
void Player::SetAttacking( bool attacking)
{
	this->attacking = attacking;
}END_OF_FUNCTION(SetAttacking);











