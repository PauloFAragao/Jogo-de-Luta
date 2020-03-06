#include <allegro.h>
#include "Scenario.h"


//construtor
Scenario::Scenario(){ LoadSprites(); StartAttributes();}


//destrutor
Scenario::~Scenario()
{
	destroy_bitmap( scenarioSprite );
}

	
void Scenario::LoadSprites()
{
	scenarioSprite = load_bitmap( "sprites/cenarios/cenario.bmp", NULL );
}END_OF_FUNCTION(LoadSprites);


void Scenario::StartAttributes()
{
	x = 0;
    y = 0;
}


void Scenario::SetScenarioSprite( BITMAP *scenarioSprite )
{
	this->scenarioSprite = scenarioSprite;
}END_OF_FUNCTION(SetScenarioSprite);


BITMAP *Scenario::GetScenarioSprite()
{
	return scenarioSprite;
}END_OF_FUNCTION(GetScenarioSprite);


void Scenario::SetX( int x )
{
	this->x = x;
}END_OF_FUNCTION();


int Scenario::GetX()
{
	return x;
}END_OF_FUNCTION();


void Scenario::SetY( int y )
{
	this->y = y;
}END_OF_FUNCTION();


int Scenario::GetY()
{
	return y;
}END_OF_FUNCTION();










