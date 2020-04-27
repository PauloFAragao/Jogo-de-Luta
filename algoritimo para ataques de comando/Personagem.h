#ifndef PERSONAGEM_H
#define PERSONAGEM_H

class Personagem
{
public:
	//construtor
	Personagem ();
	Personagem (int *ponteiro);
	
	//funções
	bool controleGopes(int bt);
	
private:
	//variaveis
	int *bts;
	
	//funções
	bool sequencia01();
	bool sequencia02();
	bool sequencia03();
	bool sequencia04();
	bool sequencia05();
	bool sequencia06();
	bool sequencia07();
	bool sequencia08();
	bool sequencia09();
	bool sequencia10();
	bool sequencia11();
	bool sequencia12();
	bool sequencia13();
	
};

#endif//PERSONAGEM_H