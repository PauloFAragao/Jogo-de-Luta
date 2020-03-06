#ifndef CENARIO_H
#define CENARIO_H

#include <allegro.h>

class Scenario
{
	
	public:
	
	//construtor
	Scenario();
	
	//desconstrutor
	~Scenario();
	
	//metodos publicos
	void SetScenarioSprite( BITMAP *scenarioSprite );
	BITMAP *GetScenarioSprite();
	void SetX( int x );
	int GetX();
	void SetY( int y );
	int GetY();
	
	private:
	
	//variaveis privadas
	int x;
    int y;
		
	BITMAP *scenarioSprite;
	
	//metodos privados
	void LoadSprites();
	
	void StartAttributes();
	
};
#endif//CENARIO_H