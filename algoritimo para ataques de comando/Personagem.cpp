#include "Personagem.h"

Personagem::Personagem(){}

Personagem::Personagem(int *ponteiro)
{
	bts = ponteiro;
}

bool Personagem::controleGopes(int bt)
{
	if(sequencia13())		return true;
	else if(sequencia05())	return true;
	else if(sequencia09())	return true;
	else if(sequencia02())	return true;
	else if(sequencia06())	return true;
	else if(sequencia10())	return true;
	else if(sequencia03())	return true;
	else if(sequencia07())	return true;
	else if(sequencia11())	return true;
	else if(sequencia04())	return true;
	else if(sequencia08())	return true;
	else if(sequencia12())	return true;
	else if(sequencia01())	return true;
	
	return false;
}

//baixo + tras + soco fraco (A-u)
bool Personagem::sequencia01()
{
	if( *(bts+ 8) - *(bts+18) > 20  &&									//a diferenca de tempo entre o bt0[pressionado] e o bt1[pressionado] tem que ser maior que 20 
		*(bts+19) - *(bts+ 8) < 150 && *(bts+19) - *(bts+ 8) > 0 &&		//a diferenca de tempo entre o bt1[solto] e bt0[pressionado] tem que ser menor que 120 e maior que 0
		*(bts+48) - *(bts+ 8) < 150 && *(bts+48) - *(bts+ 8) > 0		//a diferenca de tempo entre o bt4[pressionado] e bt0[pressionado] tem que sem menor que 120 e maior que 0
		)return true;
	return false;
}

//baixo + tras + soco forte (C-j)
bool Personagem::sequencia02()
{
	if( *(bts+ 8) - *(bts+18) > 20  &&									//a diferenca de tempo entre o bt0[pressionado] e o bt1[pressionado] tem que ser maior que 20 
		*(bts+19) - *(bts+ 8) < 150 && *(bts+19) - *(bts+ 8) > 0 &&		//a diferenca de tempo entre o bt1[solto] e bt0[pressionado] tem que ser menor que 120 e maior que 0
		*(bts+58) - *(bts+ 8) < 150 && *(bts+58) - *(bts+ 8) > 0		//a diferenca de tempo entre o bt5[pressionado] e bt0[pressionado] tem que sem menor que 120 e maior que 0
		)return true;
	return false;
}

//baixo + tras + chute fraco (B-i)
bool Personagem::sequencia03()
{
	if( *(bts+ 8) - *(bts+18) > 20  &&									//a diferenca de tempo entre o bt0[pressionado] e o bt1[pressionado] tem que ser maior que 20 
		*(bts+19) - *(bts+ 8) < 150 && *(bts+19) - *(bts+ 8) > 0 &&		//a diferenca de tempo entre o bt1[solto] e bt0[pressionado] tem que ser menor que 120 e maior que 0
		*(bts+68) - *(bts+ 8) < 150 && *(bts+68) - *(bts+ 8) > 0		//a diferenca de tempo entre o bt6[pressionado] e bt0[pressionado] tem que sem menor que 120 e maior que 0
		)return true;
	return false;
}

//baixo + tras + chute forte (D-k)
bool Personagem::sequencia04()
{
	if( *(bts+ 8) - *(bts+18) > 20  &&									//a diferenca de tempo entre o bt0[pressionado] e o bt1[pressionado] tem que ser maior que 20 
		*(bts+19) - *(bts+ 8) < 150 && *(bts+19) - *(bts+ 8) > 0 &&		//a diferenca de tempo entre o bt1[solto] e bt0[pressionado] tem que ser menor que 120 e maior que 0
		*(bts+78) - *(bts+ 8) < 150 && *(bts+78) - *(bts+ 8) > 0		//a diferenca de tempo entre o bt7[pressionado] e bt0[pressionado] tem que sem menor que 120 e maior que 0
		)return true;
	return false;
}

//baixo + frente + chute forte (A-u)
bool Personagem::sequencia05()
{
	if( *(bts+28) - *(bts+18) > 20  &&									//a diferenca de tempo entre o bt2[pressionado] e o bt1[pressionado] tem que ser maior que 20 
		*(bts+19) - *(bts+28) < 150 && *(bts+19) - *(bts+28) > 0 &&		//a diferenca de tempo entre o bt1[solto] e bt2[pressionado] tem que ser menor que 120 e maior que 0
		*(bts+48) - *(bts+28) < 150 && *(bts+48) - *(bts+28) > 0		//a diferenca de tempo entre o bt4[pressionado] e bt2[pressionado] tem que sem menor que 120 e maior que 0
		)return true;
	return false;
}

//baixo + frente + chute forte (C-j)
bool Personagem::sequencia06()
{
	if( *(bts+28) - *(bts+18) > 20  &&									//a diferenca de tempo entre o bt2[pressionado] e o bt1[pressionado] tem que ser maior que 20 
		*(bts+19) - *(bts+28) < 150 && *(bts+19) - *(bts+28) > 0 &&		//a diferenca de tempo entre o bt1[solto] e bt2[pressionado] tem que ser menor que 120 e maior que 0
		*(bts+58) - *(bts+28) < 150 && *(bts+58) - *(bts+28) > 0		//a diferenca de tempo entre o bt5[pressionado] e bt2[pressionado] tem que sem menor que 120 e maior que 0
		)return true;
	return false;
}

//baixo + frente + chute forte (B-i)
bool Personagem::sequencia07()
{
	if( *(bts+28) - *(bts+18) > 20  &&									//a diferenca de tempo entre o bt2[pressionado] e o bt1[pressionado] tem que ser maior que 20 
		*(bts+19) - *(bts+28) < 150 && *(bts+19) - *(bts+28) > 0 &&		//a diferenca de tempo entre o bt1[solto] e bt2[pressionado] tem que ser menor que 120 e maior que 0
		*(bts+68) - *(bts+28) < 150 && *(bts+68) - *(bts+28) > 0		//a diferenca de tempo entre o bt6[pressionado] e bt2[pressionado] tem que sem menor que 120 e maior que 0
		)return true;
	return false;
}

//baixo + frente + chute forte (D-k)
bool Personagem::sequencia08()
{
	if( *(bts+28) - *(bts+18) > 20  &&									//a diferenca de tempo entre o bt2[pressionado] e o bt1[pressionado] tem que ser maior que 20 
		*(bts+19) - *(bts+28) < 150 && *(bts+19) - *(bts+28) > 0 &&		//a diferenca de tempo entre o bt1[solto] e bt2[pressionado] tem que ser menor que 120 e maior que 0
		*(bts+78) - *(bts+28) < 150 && *(bts+78) - *(bts+28) > 0		//a diferenca de tempo entre o bt7[pressionado] e bt2[pressionado] tem que sem menor que 120 e maior que 0
		)return true;
	return false;
}

//(baixo segura) + cima + soco fraco
bool Personagem::sequencia09()
{
	if( *(bts+19) - *(bts+18) > 150 &&									//a diferenca de tempo entre o bt1[solto] e o bt1[pressionado] tem que ser maior que 150 
		*(bts+39) - *(bts+19) < 150 && *(bts+39) - *(bts+19) > 0 &&		//a diferenca de tempo entre o bt3[pressionado] e bt1[pressionado] tem que ser menor que 120 e maior que 0 
		*(bts+48) - *(bts+38) < 150 && *(bts+49) - *(bts+38) > 0		//a diferenca de tempo entre o bt4[pressionado] e bt3[pressionado] tem que ser menor que 120 e maior que 0
		) return true;
	return false;
}

//(baixo segura) + cima + soco forte
bool Personagem::sequencia10()
{
	if( *(bts+19) - *(bts+18) > 150 &&									//a diferenca de tempo entre o bt1[solto] e o bt1[pressionado] tem que ser maior que 150 
		*(bts+39) - *(bts+19) < 150 && *(bts+39) - *(bts+19) > 0 &&		//a diferenca de tempo entre o bt3[pressionado] e bt1[pressionado] tem que ser menor que 120 e maior que 0 
		*(bts+59) - *(bts+38) < 150 && *(bts+59) - *(bts+38) > 0		//a diferenca de tempo entre o bt5[pressionado] e bt3[pressionado] tem que ser menor que 120 e maior que 0
		) return true;
	return false;
}

//frente + baixo + frente + chute fraco
bool Personagem::sequencia11()
{
	if( *(bts+18) - *(bts+29) < 150 &&									//a diferenca de tempo entre o bt1[pressionado] e o bt2[solto] tem que ser menor que 150 
		*(bts+28) - *(bts+18) < 150 && *(bts+39) - *(bts+19) > 20 &&	//a diferenca de tempo entre o bt2[pressionado] e bt1[pressionado] tem que ser menor que 150 e maior que 20 
		*(bts+48) - *(bts+28) < 150	&& *(bts+48) - *(bts+28) > 0		//a diferenca de tempo entre o bt4[pressionado] e o bt2[pressionado] tem que ser menor que 150 e maior que 0
		) return true;
	return false;
}

//frente + baixo + frente + chute forte
bool Personagem::sequencia12()
{
	if( *(bts+18) - *(bts+29) < 150 &&									//a diferenca de tempo entre o bt1[pressionado] e o bt2[solto] tem que ser menor que 150 
		*(bts+28) - *(bts+18) < 150 && *(bts+39) - *(bts+19) > 20 &&	//a diferenca de tempo entre o bt2[pressionado] e bt1[pressionado] tem que ser menor que 150 e maior que 20 
		*(bts+58) - *(bts+28) < 150	&& *(bts+58) - *(bts+28) > 0		//a diferenca de tempo entre o bt4[pressionado] e o bt2[pressionado] tem que ser menor que 150 e maior que 0
		) return true;
	return false;
}

//baixo + traz + baixo + frente + soco fraco ou soco forte
bool Personagem::sequencia13()
{
	if( *(bts+8 ) - *(bts+16) > 20  &&									//a diferenca de tempo entre o bt0[pressionado] e o bt1[pressionado] tem que ser maior que 20
		*(bts+17) - *(bts+8 ) < 150 && *(bts+17) - *(bts+8 ) > 0 &&		//a diferenca de tempo entre o bt1[pressionado] e o bt0[solto] tem que ser menor que 150 e maior que 0
		*(bts+18) - *(bts+17) < 150	&& *(bts+18) - *(bts+17) > 0 &&		//a diferenca de tempo entre o bt1[pressionado] e o bt1[solto] tem que ser menor que 150 e maior que 0
		*(bts+9 ) - *(bts+18) < 150 && *(bts+9 ) - *(bts+18) > 0 &&		//a diferenca de tempo entre o bt0[solto] e o bt1[pressionado] tem que ser menor que 150 e maior que 0
		*(bts+28) - *(bts+9 ) < 150 && *(bts+28) - *(bts+9 ) > 0 &&		//a diferenca de tempo entre o bt2[pressionado] e o bt0[solto] tem que ser menor que 150 e maior que 0
      ( *(bts+48) - *(bts+28) < 150 && *(bts+48) - *(bts+28) > 0 || *(bts+58) - *(bts+28) < 150 && *(bts+58) - *(bts+28) > 0 ) &&
		//a diferenca de tempo entre o bt4[pressionado] e o bt2[pressionado] tem que ser menor que 150 e maior que 0 ou
		//a diferenca de tempo entre o bt5[pressionado] e o bt2[pressionado] tem que ser menor que 150 e maior que 0
      ( *(bts+48) - *(bts+58) <= 20  && *(bts+48) - *(bts+58) >= -20)		//a diferenca de tempo entre o bt4[pressionado] e o bt5[pressionado] tem que estar entre 20 e -20
		) return true;
	return false;
}































