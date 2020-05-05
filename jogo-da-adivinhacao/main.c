/* Jogo da Advinhação */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_TENTATIVAS 99
#define MIN_TENTATIVAS 1


int randing(int a, int b){

	return rand() % b + a;

}

int main(){

	printf("\n");
	printf("                              _______                                \n");
	printf("                             | ___  o|                               \n");
	printf("                             |[_-_]_ |                               \n");
	printf("          ______________     |[_____]|                               \n");
	printf("         |.------------.|    |[_____]|                               \n");
	printf("         ||            ||    |[====o]|                               \n");
	printf("         ||            ||    |[_.--_]|                               \n");
	printf("         ||            ||    |[_____]|      Bem vindo ao             \n");
	printf("         ||            ||    |      :|   Jogo da Advinhação!         \n");
	printf("         ||____________||    |      :|                               \n");
	printf("     .==.|\"\"  ......    |.==.|      :|                             \n");
	printf("     |::| '-.________.-' |::||      :|                               \n");
	printf("     |''|  (__________)-.|''||______:|                               \n");
	printf("     `\"\"`_.............._\\\"\"`______                             \n");
	printf("        /:::::::::::'':::\\`;'-.-.  `\\                              \n");
	printf("       /::=========.:.-::\"\\ \\ \\--\\   \\                         \n");
	printf("       \\`\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"`/  \\ \\__)   \\          \n");
	printf("        `\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"`    '========'             \n");
	printf("\n\n");

	srand(time(NULL));

	int numSecreto = randing(MIN_TENTATIVAS, MAX_TENTATIVAS);
	int chute, numTentativas, nivel;

	printf("Escolha o nível de dificuldade!\n");
	printf("(1) Fácil (2) Médio (3) Difícil\n\n");

	printf("Qual a dificuldade? ");
	scanf("%d", &nivel);

	while(nivel != 1 && nivel != 2 && nivel != 3){

		printf("\nDificuldade inválida!\n");
		printf("(1) Fácil (2) Médio (3) Difícil\n\n");

		printf("Qual a dificuldade? ");
		scanf("%d", &nivel);

	}

	switch (nivel){

		case 1:

			numTentativas = 20;
			break;

		case 2:

			numTentativas = 12;
			break;

		default:

			numTentativas = 6;
			break;

	}

	printf("\nTente advinhar o número que eu pensei!\n"
		   "Ele está entre 1 e 100.\n\n");

	int tent = 0;
	double numPontos = 1000;
	int acertou = 0;

	for (int i = 1; i <= numTentativas; i++) {

		printf("Tentativa %d: \n\n", i);

		printf("Qual seu chute? ");
		scanf("%d", &chute);

		acertou = (chute == numSecreto);
		int maior = (chute > numSecreto);


		if (chute < MIN_TENTATIVAS || chute > MAX_TENTATIVAS){

			printf("Você chutou um número inválido!\n");
			printf("Tente um número dentro do intervalo (1 a 100)\n\n");

			i--;
			continue;

		}

		if (acertou){

			tent = i;

			break;

		}

		else if (maior){

			printf("TENTE UM NÚMERO MENOR!\n\n");

		}

		else{

			printf("TENTE UM NÚMERO MAIOR!\n\n");

		}

		numPontos -= (abs(chute - numSecreto) / (double)2);

	}

	printf("... FIM DE JOGO! ...\n");

	if (acertou){

		printf("\nVocê ACERTOU! Meus parabéns!\n");
		printf("O número sorteado foi %d.\n\n", chute);

		printf("Você acertou o número na %dª tentativa.\n", tent);
		printf("Obteve um total de %.1f pontos.\n\n", numPontos);

	}

	else{

		printf("\nVocê PERDEU! Tente novamente.\n\n");

	}

}
