/* Jogo da Forca */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include "hangman.h"
#include "interface.h"

int verificador = 0;
int erros = 0;
int numTentativas = 0;
int acertou = 0;
int	enforcou = 0;
int count = 0;
int i = 0;
int tamanho;
char chute;

void abertura (){

	printf("/*************************/\n");
    printf("/*     Jogo da Forca     */\n");
    printf("/*************************/\n\n"); 

}

void definirTamanho(char* palavra){

	tamanho = strlen(palavra);

}

int chutar () {

	printf("Tentativa %d:\n\n", numTentativas+1);

	printf("Qual letra? ");
	scanf(" %c", &chute);

	numTentativas++;

	return toupper(chute);

}


void imprimirPalavra (char* vet){

	for (i=0; i<tamanho; i++)

		printf("%c ", vet[i]);

	printf("\n\n");

}

int verificar (char* palavra, char* acertos) {

	int i, ver = 0;

	for (i=0; i<tamanho; i++){

		if (chute == palavra[i]) {

			acertos[i] = chute;

			count++;

			ver = 1;

			palavra[i] = '-';

		}

	}

	return ver;

}

void verificarErros (){

	if (!verificador){

		erros++;

		if (erros == 1){

			printf("\nVocê ERROU! Já foi %d erro.\n", erros);
			enforcar(erros);

		}

		else {

			printf("\nVocê ERROU! Já foram %d erros.\n", erros);
			enforcar(erros);
		
		}

	}

	verificador = 0;

}

void imprimirFinal (char* palavra) {

	if (acertou) {

		printf("Você ACERTOU! A palavra era %s.\n", palavra);

		if (erros == 1)
		
			printf("Teve um total de %d tentativas e %d erro.", numTentativas, erros);

		else

			printf("Teve um total de %d tentativas e %d erros.", numTentativas, erros);
	
	ganhou();

	}

	else if (enforcou){

		printf("Você PERDEU! A palavra era %s.\n", palavra);
		printf("Atingiu o número máximo de erros %d.", MAX_ERROS);

		perdeu();

	}

}

void escolherPalavra (char* p, char* p2){

	FILE* f;

	f = fopen("palavras.txt", "r");

	if (f == 0){

		printf("Desculpe, banco de dados inválido!\n\n");
		exit(1);

	}

	srand(time(NULL));

	int quantidadePalavras;
	fscanf(f, "%d", &quantidadePalavras);

	int randomic = rand() % quantidadePalavras;

	for (i = 0; i <= randomic; i++){

		fscanf(f, "%s", p);

	}

	strcpy(p2, p);

	fclose(f);
	
}

void adicionarPalavra () {

	char quer;

	printf("Você deseja adicionar uma nova palavra ao jogo? (S/N) ");
	scanf(" %c", &quer);

	if (quer == 'S' || quer == 's'){

		char novaPalavra[TAMANHO_MAXIMO];

		printf("Qual a nova palavra? ");
		scanf("%s", novaPalavra);

		int tam = strlen(novaPalavra);

		for (i = 0; i < tam; i++)

			novaPalavra[i] = toupper(novaPalavra[i]);

		FILE* f;

		f = fopen("palavras.txt", "r+");

		if (f == 0){

			printf("Desculpe, banco de dados inválido.\n\n");
			exit(1);

		}

		int quantidadePalavras;
		fscanf(f, "%d", &quantidadePalavras);

		quantidadePalavras++;

		fseek(f, 0, SEEK_SET);
		fprintf(f, "%d", quantidadePalavras);

		fseek(f, 0, SEEK_END);
		fprintf(f, "\n%s", novaPalavra);

		fclose(f);

		printf("\nOK! Palavra %s adicionada com sucesso!\n", novaPalavra);

	}

	else if (quer == 'N' || quer == 'n'){

		printf("\nOK! Finalizando o jogo...\n");

	}

}


int main(){

	char palavra[TAMANHO_MAXIMO], var[TAMANHO_MAXIMO];

	escolherPalavra(palavra, var);

	definirTamanho(palavra);

	abertura();

	char acertos[tamanho];

	for (i=0; i<tamanho; i++)

		acertos[i] = '_';

	enforcar(0);

	printf("A palavra tem %d letras: \n", tamanho);
	printf("Dica: é uma FRUTA\n");

	imprimirPalavra(acertos);

	do {

		chute = chutar();

		verificador = verificar(palavra, acertos);

		verificarErros();

		imprimirPalavra(acertos);

		enforcou = erros == MAX_ERROS;
		acertou = count == tamanho;

	} while (!acertou && !enforcou);

	imprimirFinal(var);

	adicionarPalavra();
	
}
