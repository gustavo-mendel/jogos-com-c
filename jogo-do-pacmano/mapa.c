/*mapa.c*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include "mapa.h"

typedef struct mapa MAPA;

void fazerTroca (MAPA* m, POSICAO* p, int proximox, int proximoy) {

	char personagem = m->matriz[p->x][p->y];

	m->matriz[proximox][proximoy] = personagem;
	m->matriz[p->x][p->y] = EMPTY;
	p->x = proximox;
	p->y = proximoy;

}

int negarExtremidade (MAPA* m, int proximox, int proximoy) {

	if (proximox >= m->linhas || proximox < 0)
		return 0;

	if (proximoy >= m->colunas || proximoy < 0)
		return 0;

	return 1;
}

int verificarParede (MAPA* m, int x, int y) {

	return m->matriz[x][y] == WALL_1 ||
		   m->matriz[x][y] == WALL_2;

}

int verificarPersonagem (MAPA* m, char personagem, int x, int y) {

	return m->matriz[x][y] == personagem;

}

int permitirMovimento(MAPA* m, char personagem, int x, int y){

	return !verificarParede(m, x, y) &&
		   negarExtremidade(m, x, y) &&
		   !verificarPersonagem(m, personagem, x, y);

}

int buscaNoMapa (MAPA* m, POSICAO* p, char c) {

	for (int i = 0; i < m->linhas; i++){

		for (int j = 0; j < m->colunas; j++){

			if (m->matriz[i][j] == c){

				p->x = i;
				p->y = j;
				return 1;

			}

		}

	}

	return 0;

}

void copiarMapa (MAPA* destino, MAPA* origem) {

	MAPA copia;

	destino->linhas = origem->linhas;
	destino->colunas = origem->colunas;

	alocarMemoria(destino);

	for (int i = 0; i < origem->linhas; i++) {

		strcpy(destino->matriz[i], origem->matriz[i]);

	}

}

void importarDados (MAPA* m) {

	FILE* f;

	f = fopen("mapa.txt", "r");

	if (f == 0){

		printf("Erro na leitura do mapa!\n");
		exit(1);

	}

	fscanf(f, "%d %d", &(m->linhas), &(m->colunas));

	alocarMemoria(m);

	for (int i = 0; i < m->linhas; i++){

		fscanf(f, "%s", m->matriz[i]);

	}

	fclose(f);

}

void alocarMemoria (MAPA* m) {

	m->matriz = malloc(sizeof(char*) * m->linhas);

	for (int i = 0; i < m->linhas; i++){

		m->matriz[i] = malloc(sizeof(char) * (m->colunas+1));

	}

}

void desalocarMemoria (MAPA* m) {

	for (int i = 0; i < m->linhas; i++){

		free(m->matriz[i]);

	}

	free(m->matriz);

}
