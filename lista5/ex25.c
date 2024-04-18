/*
25) Escreva um algoritmo que leia uma matriz M(10, 10) de números inteiros e depois calcule e
mostre a sua matriz transposta.
*/

#include <stdio.h>
#define ROWS 10
#define COLUMNS 10

int main() {
    int i, j, a[ROWS][COLUMNS], T[COLUMNS][ROWS];

    for(i=0; i<(ROWS); i++) {
        for(j=0; j<COLUMNS; j++) {
            printf("Digite elemento A_%d_%d: ", i+1, j+1);
            scanf("%d", &a[i][j]);

            T[j][i] = a[i][j];
        }
    }

    for(i=0; i<COLUMNS; i++) {
        for(j=0; j<ROWS; j++) {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}