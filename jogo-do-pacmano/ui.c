#include <stdio.h>
#include <stdlib.h>
#include "mapa.h"
#include "ui.h"

char desenhofantasma[4][7] = {
    {" .-.  " },
    {"| OO| " },
    {"|   | " },
    {"'^^^' " }
};

char desenhoparede[4][7] = {
    {"......" },
    {"......" },
    {"......" },
    {"......" }
};

char desenhoheroi[4][7] = {
    {" .--. "  },
    {"/ _.-'"  },
    {"\\  '-." },
    {" '--' "  }
};

char desenhopilula[4][7] = {
    {"      "},
    {" .-.  "},
    {" '-'  "},
    {"      "}
};

char desenhovazio[4][7] = {
    {"      "},
    {"      "},
    {"      "},
    {"      "}
};

void imprimeparte(char desenho[4][7], int parte) {
    
    printf("%s", desenho[parte]);

}

void imprimirMapa(MAPA* m) {

    for(int i = 0; i < m->linhas; i++) {
        
        for(int parte = 0; parte < 4; parte++) {
        
            for(int j = 0; j < m->colunas; j++) {

        		switch(m->matriz[i][j]) {

                    case GHOST:
                        imprimeparte(desenhofantasma, parte);
                        break;

                    case HERO:
                        imprimeparte(desenhoheroi, parte);
                        break;

                    case POWER:
                        imprimeparte(desenhopilula, parte);
                        break;

                    case WALL_1:
                    case WALL_2:
                        imprimeparte(desenhoparede, parte);
                        break;

                    case EMPTY:
                        imprimeparte(desenhovazio, parte);
                        break;

                }

            }

            printf("\n");

        }

	}

}