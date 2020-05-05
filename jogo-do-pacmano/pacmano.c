/*Jogo pacmano*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include "funcoes.h"
#include "mapa.h"

MAPA m;
POSICAO heroi;
POSICAO fantasma;
int hproximoX, hproximoY;

char comando;

void imprimirComandos(){

	printf("\nComandos: \n");
	printf("'W' -> subir\n");
	printf("'A' -> esquerda\n");
	printf("'S' -> descer\n");
	printf("'D' -> direita\n\n");

}

void digitarComando(){

	printf("Comando: ");
	scanf(" %c", &comando);
	comando = toupper(comando);

}

int validarComando() {

	return
	comando == KEY_LEFT || 
	comando == KEY_DOWN || 
	comando == KEY_UP || 
	comando == KEY_RIGHT;

}

int acabou(){

	POSICAO pos;

	int ganhou, perdeu;

	ganhou = !buscaNoMapa(&m, &pos, GHOST);
	perdeu = !buscaNoMapa(&m, &pos, HERO);

	return ganhou || perdeu;

}

void verificarProximo () {

	hproximoX = heroi.x;
	hproximoY = heroi.y;

	switch (comando){

		case KEY_UP:
			hproximoX--;
			break;
			

		case KEY_LEFT:
			hproximoY--;
			break;
			

		case KEY_DOWN:
			hproximoX++;
			break;
			

		case KEY_RIGHT:
			hproximoY++;
			break;
	}

}

int direcionalFantasma (int x, int y, int* fproximoX, int* fproximoY) {

	int opcoes[4][2] = {

		{ x, y-1 }, //esquerda
		{ x-1, y }, //cima
		{ x, y+1 }, // direita
		{ x+1, y }  // baixo
	
	};

	srand(time(NULL));

	for (int i = 0; i < 10; i++){

		int direcao = rand() % 4;

		if (permitirMovimento(&m, GHOST, opcoes[direcao][0], opcoes[direcao][1])) {

			*fproximoX = opcoes[direcao][0];
			*fproximoY = opcoes[direcao][1];

			return 1;

		}

	}

	return 0;

}

void moverFantasma() {	

	MAPA copia;

	copiarMapa(&copia, &m);

	for (int i = 0; i < m.linhas; i++){

		for (int j = 0; j < m.colunas; j++){

			if (copia.matriz[i][j] == GHOST){

				fantasma.x = i;
				fantasma.y = j;

				int fproximoX;
				int fproximoY;

				int encontrou; 

				encontrou = direcionalFantasma(
					fantasma.x, fantasma.y, &fproximoX, &fproximoY);

				if (encontrou)
					fazerTroca(&m, &fantasma, fproximoX, fproximoY);

			}

		}

	}

	desalocarMemoria(&copia);

}


void moverHeroi() {	
	
	if (validarComando()){

		if (permitirMovimento(&m, HERO,  hproximoX, hproximoY)){

			fazerTroca(&m, &heroi, hproximoX, hproximoY);

		}

	}

}

int main(){

	importarDados(&m);

	imprimirMapa(&m);

	imprimirComandos();

	buscaNoMapa(&m, &heroi, HERO); 

	do {

		digitarComando();

		verificarProximo();

		moverHeroi();

		moverFantasma();

		imprimirMapa(&m);

	} while (!acabou());

	desalocarMemoria(&m);

}
