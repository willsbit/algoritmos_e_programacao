/*
19) Escrever um programa que construa uma matriz 10 x 3 de números em ponto flutuante,
colocando em cada elemento da matriz o resultado da divisão do seu índice maior pelo menor.
Quando o menor índice for 0, deve ser colocado na matriz o valor -1.
*/

#include <stdio.h>
#define ROWS 10
#define COLUMNS 3

int main() {
    int i, j;
    float a[ROWS][COLUMNS];

    for(i=0; i<ROWS; i++) {
        for(j=0; j<COLUMNS; j++) {
            if ((i >= j && j == 0) || (j > i && i == 0)) {
                a[i][j] = -1;
            } else if (i >= j) {
                a[i][j] = (float)i/j;
            } else {
                a[i][j] = (float)j/i;
            }
            printf("%.2f ", a[i][j]);
        }
        printf("\n");
    }


    return 0;
}