#ifndef _FUNCOES_H_
#define _FUNCOES_H_

#define KEY_UP 'W'
#define KEY_DOWN 'S'
#define KEY_LEFT 'A'
#define KEY_RIGHT 'D'
#define KEY_POWER 'B'

void imprimirComandos();
void digitarComando();
int validarComando();
int acabou();
void verificarPoder();
void moverHeroi();
void explodir();
void usarPoder(int x, int y, int somax, int somay, int qnt);
void verificarProximo();
void moverFantasma();
int direcionalFantasma (int x, int y, int* fproximoX, int* fproximoY);

#endif