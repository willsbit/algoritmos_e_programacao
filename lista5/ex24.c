/*
24) Escreva um algoritmo que lê uma matriz M(10,10) e a escreve. Troque, a seguir:
a) a linha 2 com a linha 8;
b) a coluna 4 com a coluna 10.
Escreva a matriz depois de modificada.
*/

#include <stdio.h>
#define ROWS 10
#define COLUMNS 10

int main() {
    int i, j, swap, a[ROWS][COLUMNS];

    for(i=0; i<(ROWS); i++) {
        for(j=0; j<COLUMNS; j++) {
            printf("Digite elemento A_%d_%d: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    for(j=0; j<COLUMNS; j++) {
        swap = a[1][j];
        a[1][j] = a[7][j];
        a[7][j] = swap;
    }

    for(i=0; i<ROWS; i++) {
        swap = a[i][3];
        a[i][3] = a[i][9];
        a[i][9] = swap;
    }

    for(i=0; i<ROWS; i++) {
        for(j=0; j<COLUMNS; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}