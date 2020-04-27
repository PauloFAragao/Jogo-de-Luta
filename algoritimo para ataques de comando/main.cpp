#include <allegro.h>
#include "Personagem.h"


//variaveis

	//arrays para receber o tempo em que os botões são pressionados
int btTPress[8][10];

	//inteiro que vai receber o tempo quando qualquer botão for pressionado para gerar delay
int tVerificar=0;

	//booleanas para capturar um "longpress"
bool bt0=false,bt1=false,bt2=false,bt3=false,bt4=false,bt5=false,bt6=false,bt7=false;

	//booleana para delay depois de qualquer botão ser pressionado
bool verificar=false;

	//objeto da classe Personagem
Personagem personagem (&btTPress[0][0]);

	//variaveis para debug
bool a=false, b=false, c=false, d=false;
int tempo1=0, tempo2=0;


//funções
	//função para escrever o tempo dentro do array do botão 0
void writeOnBtTmPress(int pos, bool valor)
{
	if(valor){
		for(int i=0; i<9; i++)
		{
			if(i!=8)	btTPress[pos][i] = btTPress[pos][i+2];
			else		btTPress[pos][8] = clock();			
		}
	}
	else btTPress[pos][9] = clock();
}


	//função que captura e manda escrever no array para o botão 0
void controleBT0()
{
	if(key[KEY_LEFT])
	{
		if(!bt0)	{bt0=true;  writeOnBtTmPress(0,true);}
		//else		writeOnBT0TPress(false);
	}
	if(bt0 && !key[KEY_LEFT]) 
	{
		bt0=false;
		 writeOnBtTmPress(0,false);
	}
}
//função que captura e manda escrever no array para o botão 1
void controleBT1()
{
	if(key[KEY_DOWN])
	{
		if(!bt1) 	{bt1=true;  writeOnBtTmPress(1,true);}
		//else		writeOnBT1TPress(false);
	}
	if(bt1 && !key[KEY_DOWN]) 
	{
	   	bt1=false;
	   	 writeOnBtTmPress(1,false);
	}
}
	//função que captura e manda escrever no array para o botão 2
void controleBT2()
{
	if(key[KEY_RIGHT])
	{
		if(!bt2) 	{bt2=true;  writeOnBtTmPress(2,true);}
		//else		writeOnBT2TPress(false);
	}
	if(bt2 && !key[KEY_RIGHT])
	{
		bt2=false;
		 writeOnBtTmPress(2,false);
	} 
}
	//função que captura e manda escrever no array para o botão 3
void controleBT3()
{
	if(key[KEY_UP])
	{
		if(!bt3) 	{bt3=true;  writeOnBtTmPress(3,true);}
		//else		writeOnBT3TPress(false);
	}
	if(bt3 && !key[KEY_UP])
	{
		bt3=false;
		 writeOnBtTmPress(3,false);
	} 
}
	//função que captura e manda escrever no array para o botão 4
void controleBT4()//A-Soco fraco
{
	if(key[KEY_U])
	{
		if(!bt4) 	{bt4=true;  writeOnBtTmPress(4,true);}
		//else		{writeOnBT4TPress(false);}
	}
	if(bt4 && !key[KEY_U]) 
	{
		bt4=false;
		 writeOnBtTmPress(4,false);
	}
}
	//função que captura e manda escrever no array para o botão 4
void controleBT5()//C-Soco forte
{
	if(key[KEY_J])
	{
		if(!bt5) 	{bt5=true;  writeOnBtTmPress(5,true);}
		//else		{writeOnBT5TPress(false);}
	}
	if(bt5 && !key[KEY_J]){
		bt5=false;
		 writeOnBtTmPress(5,false);
	} 
}
	//função que captura e manda escrever no array para o botão 4
void controleBT6()//B-Chute fraco
{
	if(key[KEY_I])
	{
		if(!bt6) 	{bt6=true;  writeOnBtTmPress(6,true);}
		//else		{writeOnBT6TPress(false);}
	}
	if(bt6 && !key[KEY_I])
	{ 
		bt6=false;
		 writeOnBtTmPress(6,false);
	}
}
	//função que captura e manda escrever no array para o botão 4
void controleBT7()//D-Chute forte
{
	if(key[KEY_K])
	{
		if(!bt7) 	{bt7=true;  writeOnBtTmPress(7,true);}
		//else		{writeOnBT7TPress(false);}
	}
	if(bt7 && !key[KEY_K])
	{
		bt7=false;
		 writeOnBtTmPress(7,false);
	} 
}


int main()
{
// BUFFER, serve para não desenhar-mos diretamente na tela e assim
// evitando o efeito de pisca-pisca
    BITMAP *buffer = NULL;

// inicializa a biblioteca, sempre deve ser chamada
    allegro_init();

// profundidade de cores, 32 é melhor no Win7
    set_color_depth(32);

// permite a leitura do teclado
    install_keyboard();

// cria a janela com a largura 1360 e altura 768 pixels
    set_gfx_mode(GFX_AUTODETECT_WINDOWED, 1360, 768, 0, 0);

// Criando BUFFER, ela é um ponteiro para um BITMAP
    buffer = create_bitmap(1360, 768);
    
// instala o timer
	install_timer();
	
// coloca o nome da janela
	set_window_title("Novo algoritmo de captura de imputs");

// Laço principal
    while(!key[KEY_ESC]) // o programa deve rodar enquanto não pressionar a tecla ESC
    {

//controle dos botões
    	controleBT0();
    	controleBT1();
		controleBT2();
		controleBT3();
		controleBT4();
		controleBT5();
		controleBT6();
		controleBT7();
		
		
//controle da chamada para a função de verificação
		if( ( key[KEY_LEFT] || key[KEY_DOWN] || key[KEY_RIGHT] || key[KEY_UP] ||
			  key[KEY_U] || key[KEY_J] || key[KEY_I] || key[KEY_K] ) && !verificar){
			verificar=true;
			tVerificar=clock();
		}
		//espera 30 ms para chamar a função de verificação
		if( verificar && clock()-tVerificar > 30) a = personagem.controleGopes(0);
		
		
//saidas de tela para debug
		if(a) textprintf_ex (buffer, font, 10, 200, makecol(0,255,0),-1, "a=true");
		else  textprintf_ex (buffer, font, 10, 200, makecol(0,255,0),-1, "a=false");

		//1
		textprintf_ex (buffer, font, 10, 320, makecol(255,255,255),-1, "tempo entre o bt baixo ter cido pressionado e o bt traz ter cido pressionado : %d", btTPress[0][8] - btTPress[1][6] );
		textprintf_ex (buffer, font, 10, 340, makecol(255,255,255),-1, "e maior que 20ms? %d", btTPress[0][8] - btTPress[1][6] > 20 );
		//2
		textprintf_ex (buffer, font, 10, 360, makecol(255,255,255),-1, "tempo entre o bt baixo ter cido solto e o bt traz ter cido pressionado : %d", btTPress[1][7] - btTPress[0][8] );
		textprintf_ex (buffer, font, 10, 380, makecol(255,255,255),-1, "e menor que 150ms? %d", btTPress[1][7] - btTPress[0][8] < 150 && btTPress[1][7] - btTPress[0][8] > 0);
		//3
		textprintf_ex (buffer, font, 10, 400, makecol(255,255,255),-1, "tempo entre o bt baixo ter cido pressionado e o bt baixo ter cido solto : %d", btTPress[1][8] - btTPress[1][7] );
		textprintf_ex (buffer, font, 10, 420, makecol(255,255,255),-1, "e menor que 150ms? %d", btTPress[1][8] - btTPress[1][7] < 150 && btTPress[1][8] - btTPress[1][7] > 0);
		//4
		textprintf_ex (buffer, font, 10, 440, makecol(255,255,255),-1, "tempo entre o bt traz ter cido solto e o bt baixo ter cido pressionado : %d", btTPress[0][9] - btTPress[1][8] );
		textprintf_ex (buffer, font, 10, 460, makecol(255,255,255),-1, "e menor que 150ms? %d", btTPress[0][9] - btTPress[1][8] < 150 && btTPress[0][9] - btTPress[1][8] > 0);
		//5
		textprintf_ex (buffer, font, 10, 480, makecol(255,255,255),-1, "tempo entre o bt frente ter cido pressionado e o bt traz ter cido solto : %d", btTPress[2][8] - btTPress[0][9] );
		textprintf_ex (buffer, font, 10, 500, makecol(255,255,255),-1, "e menor que 150ms? %d", btTPress[2][8] - btTPress[0][9] < 150 && btTPress[2][8] - btTPress[0][9] > 0);
		//6
		textprintf_ex (buffer, font, 10, 520, makecol(255,255,255),-1, "tempo entre o bt soco fraco ter cido pressionado e o bt frente ter cido pressionado : %d", btTPress[4][8] - btTPress[2][8] );
		textprintf_ex (buffer, font, 10, 540, makecol(255,255,255),-1, "e menor que 150ms? %d", btTPress[4][8] - btTPress[2][8] < 150 && btTPress[4][8] - btTPress[2][8] > 0);
		//7
		textprintf_ex (buffer, font, 10, 560, makecol(255,255,255),-1, "tempo entre o bt soco forte ter cido pressionado e o bt frente ter cido pressionado : %d", btTPress[5][8] - btTPress[2][8] );
		textprintf_ex (buffer, font, 10, 580, makecol(255,255,255),-1, "e menor que 150ms? %d", btTPress[5][8] - btTPress[2][8] < 150 && btTPress[5][8] - btTPress[2][8] > 0);
		//8
		textprintf_ex (buffer, font, 10, 600, makecol(255,255,255),-1, "tempo entre o bt soco fraco ter cido pressionado e o bt soco forte ter cido pressionado : %d", btTPress[4][8] - btTPress[5][8] );
		textprintf_ex (buffer, font, 10, 620, makecol(255,255,255),-1, "e menor que 150ms? %d", btTPress[4][8] - btTPress[5][8] < 20 && btTPress[4][8] - btTPress[5][8] > -20);
		
		
    	//imprimir os valores dentro do bt0TPress
		textprintf_ex (buffer, font, 10, 10, makecol(255,255,0),-1, "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d :Traz",
		btTPress[0][0], btTPress[0][1],	btTPress[0][2], btTPress[0][3], btTPress[0][4],
		btTPress[0][5], btTPress[0][6], btTPress[0][7], btTPress[0][8], btTPress[0][9]);
    	
    	//imprimir os valores dentro do bt1TPress
		textprintf_ex (buffer, font, 10, 30, makecol(255,255,0),-1, "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d :Baixo",
		btTPress[1][0], btTPress[1][1],	btTPress[1][2], btTPress[1][3], btTPress[1][4],
		btTPress[1][5], btTPress[1][6], btTPress[1][7], btTPress[1][8], btTPress[1][9]);
		
    	//imprimir os valores dentro do bt2TPress
		textprintf_ex (buffer, font, 10, 50, makecol(255,255,0),-1, "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d :Frente",
		btTPress[2][0], btTPress[2][1],	btTPress[2][2], btTPress[2][3], btTPress[2][4],
		btTPress[2][5], btTPress[2][6], btTPress[2][7], btTPress[2][8], btTPress[2][9]);
    	
    	//imprimir os valores dentro do bt3TPress
		textprintf_ex (buffer, font, 10, 70, makecol(255,255,0),-1, "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d :Cima",
		btTPress[3][0], btTPress[3][1],	btTPress[3][2], btTPress[3][3], btTPress[3][4],
		btTPress[3][5], btTPress[3][6], btTPress[3][7], btTPress[3][8], btTPress[3][9]);
    	
    	//imprimir os valores dentro do bt4TPress
		textprintf_ex (buffer, font, 10, 90, makecol(255,255,0),-1, "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d :A",
		btTPress[4][0], btTPress[4][1],	btTPress[4][2], btTPress[4][3], btTPress[4][4],
		btTPress[4][5], btTPress[4][6], btTPress[4][7], btTPress[4][8], btTPress[4][9]);
    	
    	//imprimir os valores dentro do bt5TPress
		textprintf_ex (buffer, font, 10, 110, makecol(255,255,0),-1, "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d :C",
		btTPress[5][0], btTPress[5][1],	btTPress[5][2], btTPress[5][3], btTPress[5][4],
		btTPress[5][5], btTPress[5][6], btTPress[5][7], btTPress[5][8], btTPress[5][9]);
    	
    	//imprimir os valores dentro do bt6TPress
		textprintf_ex (buffer, font, 10, 130, makecol(255,255,0),-1, "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d :B",
		btTPress[6][0], btTPress[6][1],	btTPress[6][2], btTPress[6][3], btTPress[6][4],
		btTPress[6][5], btTPress[6][6], btTPress[6][7], btTPress[6][8], btTPress[6][9]);
    	
    	//imprimir os valores dentro do bt7TPress
		textprintf_ex (buffer, font, 10, 150, makecol(255,255,0),-1, "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d :D",
		btTPress[7][0], btTPress[7][1],	btTPress[7][2], btTPress[7][3], btTPress[7][4],
		btTPress[7][5], btTPress[7][6], btTPress[7][7], btTPress[7][8], btTPress[7][9]);
    	
    	
//imprime o buffer na tela
        blit(buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);

// limpa o buffer para um novo desenho (pinta tudo de preto)
        clear(buffer);
		
        // essa função faz o allegro esperar um pouco antes de voltar para o while
        //rest(10);
    }
    
//destruindo elementos
 	destroy_bitmap(buffer);

//fechando o allegro
    allegro_exit();
    
    return 0;
}
END_OF_MAIN();
