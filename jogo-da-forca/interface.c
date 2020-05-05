#include <stdio.h>
#include "interface.h"


void ganhou(){

	 printf("\n     Parabéns, você ganhou!\n");
     printf("\t  ___________   \n");   
     printf("\t '._==_==_=_.'  \n");   
     printf("\t .-\\:      /-. \n");   
     printf("\t| (|:.     |) | \n");   
     printf("\t '-|:.     |-'  \n");   
     printf("\t   \\::.    /   \n");  
     printf("\t    '::. .'     \n");   
     printf("\t      ) (       \n");   
     printf("\t    _.' '._     \n");   
     printf("\t   '-------'    \n\n");

}

void perdeu(){

printf("\n    Puxa, você foi enforcado!	       \n");
printf("        _______________                  \n");
printf("       /               \\                \n");
printf("      /                 \\               \n");
printf("    //                   \\/\\           \n");
printf("    \\|   XXXX     XXXX   | /            \n");
printf("     |   XXXX     XXXX   |/              \n");
printf("     |   XXX       XXX   |               \n");
printf("     |                   |               \n");
printf("     \\__      XXX      __/              \n");
printf("       |\\     XXX     /|                \n");
printf("       | |           | |                 \n");
printf("       | I I I I I I I |                 \n");
printf("       |  I I I I I I  |                 \n");
printf("       \\_             _/                \n");
printf("         \\_         _/                  \n");
printf("           \\_______/                    \n");
printf("    	                               \n\n");

}

void enforcar(int erros){

	switch (erros){
		case 0:
			printf("  _______      \n");
			printf(" |/      |     \n");
			printf(" |             \n");
			printf(" |             \n");
			printf(" |             \n");
			printf(" |             \n");
			printf(" |             \n");
			printf("_|___          \n");
			printf("\n\n");
			break;

		case 1:
			printf("  _______      \n");
			printf(" |/      |     \n");
			printf(" |      (_)    \n");
			printf(" |             \n");
			printf(" |             \n");
			printf(" |             \n");
			printf(" |             \n");
			printf("_|___          \n");
			printf("\n\n");
			break;

		case 2:
			printf("  _______      \n");
			printf(" |/      |     \n");
			printf(" |      (_)    \n");
			printf(" |       |     \n");
			printf(" |       |     \n");
			printf(" |             \n");
			printf(" |             \n");
			printf("_|___          \n");
			printf("\n\n");
			break;

		case 3:
			printf("  _______      \n");
			printf(" |/      |     \n");
			printf(" |      (_)    \n");
			printf(" |      \\|    \n");
			printf(" |       |     \n");
			printf(" |             \n");
			printf(" |             \n");
			printf("_|___          \n");
			printf("\n\n");
			break;

		case 4:
			printf("  _______      \n");
			printf(" |/      |     \n");
			printf(" |      (_)    \n");
			printf(" |      \\|/   \n");
			printf(" |       |     \n");
			printf(" |             \n");
			printf(" |             \n");
			printf("_|___          \n");
			printf("\n\n");
			break;

		case 5:
			printf("  _______      \n");
			printf(" |/      |     \n");
			printf(" |      (_)    \n");
			printf(" |      \\|/   \n");
			printf(" |       |     \n");
			printf(" |      /      \n");
			printf(" |             \n");
			printf("_|___          \n");
			printf("\n\n");
			break;

		case 6:
			printf("  _______      \n");
			printf(" |/      |     \n");
			printf(" |      (_)    \n");
			printf(" |      \\|/   \n");
			printf(" |       |     \n");
			printf(" |      / \\   \n");
			printf(" |             \n");
			printf("_|___          \n");
			printf("\n\n");
			break;
	}

}