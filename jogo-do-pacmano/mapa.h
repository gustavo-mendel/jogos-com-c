#ifndef _MAPA_H_
#define _MAPA_H_

#define HERO '@'
#define GHOST 'F'
#define EMPTY '.'
#define WALL_1 '|'
#define WALL_2 '_'
#define POWER '#'


struct mapa
{
	char** matriz;
	int linhas;
	int colunas;
};

typedef struct mapa MAPA;

struct posicao
{
	int x;
	int y;
};

typedef struct posicao POSICAO;

void alocarMemoria(MAPA* m);
void desalocarMemoria(MAPA* m);
void importarDados(MAPA* m);
int buscaNoMapa(MAPA* m, POSICAO* p, char c);
void fazerTroca(MAPA* m, POSICAO* p, int proximox, int proximoy);
int negarExtremidade(MAPA* m, int proximox, int proximoy);
int verificarParede (MAPA* m, int x, int y);
void copiarMapa (MAPA* destino, MAPA* origem);
int permitirMovimento(MAPA* m, char personagem, int x, int y);
int verificarPersonagem (MAPA* m, char personagem, int x, int y);

#endif