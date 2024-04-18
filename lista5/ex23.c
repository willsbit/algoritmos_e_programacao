/*
23) Faça um algoritmo que leia uma matriz de 30 linhas e 5 colunas. Depois, some as colunas
individualmente e acumule a soma na 61ª linha da matriz. Imprima o resultado de cada coluna.
(Lembrete: para guardar o resultado é necessário declarar uma matriz de 31 x 10.)
*/

#include <stdio.h>
#define ROWS 30
#define COLUMNS 5

int main() {
    int i, j, a[ROWS+1][COLUMNS], col_sum[COLUMNS] = {0};

    for(i=0; i<(ROWS+1); i++) {
        for(j=0; j<COLUMNS; j++) {
            if (i < ROWS) {
                printf("Digite elemento A_%d_%d: ", i+1, j+1);
                scanf("%d", &a[i][j]);
                col_sum[j] += a[i][j];
            } else {
                a[i][j] = col_sum[j];
            }
        }
    }

    printf("\n");
    for(i=0; i<(ROWS+1); i++) {
        for(j=0; j<COLUMNS; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}