/*
15) Faça um algoritmo que leia uma matriz M 10x10 de números inteiros. A seguir, multiplique
cada linha pelo elemento da diagonal principal daquela linha. Mostre a matriz após as
multiplicações.
*/

#include <stdio.h>
#define ROWS 3
#define COLUMNS 3

int main() {
    int i, j, k, counter = 0, main_diag_elm, a[ROWS][COLUMNS];

    for(i=0, k=0; i<ROWS; i++) {
        for(j=0; j<COLUMNS; j++) {
            printf("Digite elemento A_%d_%d: ", i, j);
            scanf("%d", &a[i][j]);

            if (i == j) {
                main_diag_elm = a[i][j];
                for(k=counter;k>=0;k--) { // olha os elementos "atrás" da diagonal principal 
                    a[i][j-k] *= main_diag_elm; // e os multiplica pelo elemento da diagonal
                }
                counter++;
            } else if (j > i) { // se já temos o elemento da diagonal principal,
                a[i][j] *= main_diag_elm; // basta multiplicar o elemento a[i][j] pelo elemento principal
            }

        }
    }

    for(i=0; i<ROWS; i++) {
        for(j=0;j<COLUMNS; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }


    return 0;
}
