#include <allegro.h>
#include "Player.h"

/**
 * Esse metodo captura os imputs do player e os tempos em que o jogador pressiona e solta os bot�es.
 */
void Player::TrackImputs()
{
	//bot�o 0
	if( !bt0TimeCapture && ( ( key[KEY_A] && playerNumber == 1 ) || ( key[KEY_LEFT] && playerNumber == 2 ) ) )//captura o tempo em que o bot�o foi pressionado
	{
		button00 = true;
		bt0TimeCapture=true;
		writeOnBtTmPress(0,true);
	}
	if( bt0TimeCapture && ( ( !key[KEY_A] && playerNumber == 1 ) || ( !key[KEY_LEFT] && playerNumber == 2 ) ) )//captura o tempo em que o bot�o foi solto
	{
		button00 = false;
		bt0TimeCapture=false;
		writeOnBtTmPress(0,false);
	}
	
	//bot�o 1
	if( !bt1TimeCapture && ( ( key[KEY_S] && playerNumber == 1 ) || ( key[KEY_DOWN] && playerNumber == 2 ) ) )//captura o tempo em que o bot�o foi pressionado
	{
		button01 = true;
		bt1TimeCapture=true;
		writeOnBtTmPress(1,true);
	}
	if( bt1TimeCapture && ( ( !key[KEY_S] && playerNumber == 1 ) || ( !key[KEY_DOWN] && playerNumber == 2 ) ) )//captura o tempo em que o bot�o foi solto
	{
		button01 = false;
		bt1TimeCapture=false;
		writeOnBtTmPress(1,false);
	}
	
	//bot�o 2
	if( !bt2TimeCapture && ( ( key[KEY_D] && playerNumber == 1 ) || ( key[KEY_RIGHT] && playerNumber == 2 ) ) )//captura o tempo em que o bot�o foi pressionado
	{
		button02 = true;
		bt2TimeCapture=true;
		writeOnBtTmPress(2,true);
	}
	if( bt2TimeCapture && ( ( !key[KEY_D] && playerNumber == 1 ) || ( !key[KEY_RIGHT] && playerNumber == 2 ) ) )//captura o tempo em que o bot�o foi solto
	{
		button02 = false;
		bt2TimeCapture=false;
		writeOnBtTmPress(2,false);
	}
	
	//bot�o 3
	if( !bt3TimeCapture && ( ( key[KEY_W] && playerNumber == 1 ) || ( key[KEY_UP] && playerNumber == 2 ) ) )//captura o tempo em que o bot�o foi pressionado
	{
		button03 = true;
		bt3TimeCapture=true;
		writeOnBtTmPress(3,true);
	}
	if( bt3TimeCapture && ( ( !key[KEY_W] && playerNumber == 1 ) || ( !key[KEY_UP] && playerNumber == 2 ) ) )//captura o tempo em que o bot�o foi solto
	{
		button03 = false;
		bt3TimeCapture=false;
		writeOnBtTmPress(3,false);
	}
	
	//bot�o 4
	if( !bt4TimeCapture && ( ( key[KEY_U] && playerNumber == 1 ) || ( key[KEY_9_PAD] && playerNumber == 2 ) ) )//captura o tempo em que o bot�o foi pressionado
	{
		button04 = true;
		bt4TimeCapture=true;
		writeOnBtTmPress(4,true);
	}
	if( bt4TimeCapture && ( ( !key[KEY_U] && playerNumber == 1 ) || ( !key[KEY_9_PAD] && playerNumber == 2 ) ) )//captura o tempo em que o bot�o foi solto
	{
		button04 = false;
		bt4TimeCapture=false;
		writeOnBtTmPress(4,false);
	}
	
	//bot�o 5
	if( !bt5TimeCapture && ( ( key[KEY_J] && playerNumber == 1 ) || ( key[KEY_6_PAD] && playerNumber == 2 ) ) )//captura o tempo em que o bot�o foi pressionado
	{
		button05 = true;
		bt5TimeCapture=true;
		writeOnBtTmPress(5,true);
	}
	if( bt5TimeCapture && ( ( !key[KEY_J] && playerNumber == 1 ) || ( !key[KEY_6_PAD] && playerNumber == 2 ) ) )//captura o tempo em que o bot�o foi solto
	{
		button05 = false;
		bt5TimeCapture=false;
		writeOnBtTmPress(5,false);
	}
	
	//bot�o 6
	if( !bt6TimeCapture && ( ( key[KEY_I] && playerNumber == 1 ) || ( key[KEY_PLUS_PAD] && playerNumber == 2 ) ) )//captura o tempo em que o bot�o foi pressionado
	{
		button06 = true;
		bt6TimeCapture=true;
		writeOnBtTmPress(6,true);
	}
	if( bt6TimeCapture && ( ( !key[KEY_I] && playerNumber == 1 ) || ( !key[KEY_PLUS_PAD] && playerNumber == 2 ) ) )//captura o tempo em que o bot�o foi solto
	{
		button06 = false;
		bt6TimeCapture=false;
		writeOnBtTmPress(6,false);
	}
	
	//bot�o 7
	if( !bt7TimeCapture && ( ( key[KEY_K] && playerNumber == 1 ) || ( key[KEY_MINUS_PAD] && playerNumber == 2 ) ) )//captura o tempo em que o bot�o foi pressionado
	{
		button07 = true;
		bt7TimeCapture=true;
		writeOnBtTmPress(7,true);
	}
	if( bt7TimeCapture && ( ( !key[KEY_K] && playerNumber == 1 ) || ( !key[KEY_MINUS_PAD] && playerNumber == 2 ) ))//captura o tempo em que o bot�o foi solto
	{
		button07 = false;
		bt7TimeCapture=false;
		writeOnBtTmPress(7,false);
	}
	
}END_OF_FUNCTION(trackImputs);