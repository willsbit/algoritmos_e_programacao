/*
26) Na teoria dos sistemas, define-se como elemento minimax de uma matriz o menor elemento
da linha onde se encontra o maior elemento da matriz. Escreva um algoritmo que leia uma matriz
10 X 10 de números e encontre seu elemento minimax, mostrando também sua posição.
*/

#include <stdio.h>
#define ROWS 10
#define COLUMNS 10

int main() {
    int i, j, a[ROWS][COLUMNS], max_elm_row = 0, max_elm_col = 0, minimax_col = 0;

    for(i=0; i<(ROWS); i++) {
        for(j=0; j<COLUMNS; j++) {
            printf("Digite elemento A_%d_%d: ", i+1, j+1);
            scanf("%d", &a[i][j]);

            if(a[i][j] > a[max_elm_row][max_elm_col]) {
                max_elm_row = i;
                max_elm_col = j;
            }
        }
    }

    for(j=0; j<COLUMNS; j++) {
        if (a[max_elm_row][j] < a[max_elm_row][minimax_col]) {
            minimax_col = j;
        }
    }

    printf("minimax: a[%d][%d] = %d\n", max_elm_row, minimax_col, a[max_elm_row][minimax_col]);
    

    return 0;
}