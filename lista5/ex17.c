/*
17) Escreva um algoritmo que lê uma matriz M(5,5) e cria 2 vetores SL(5) e SC(5) que contenham,
respectivamente, as somas das linhas e das colunas de M. Escrever a matriz e os vetores criados.
*/

#include <stdio.h>
#define ROWS 5
#define COLUMNS 5

int main() {
    int i, j, a[ROWS][COLUMNS], row_sum[ROWS] = {0}, column_sum[COLUMNS] = {0};

    for(i=0; i<ROWS; i++) {
        for(j=0; j<COLUMNS; j++) {
            printf("Digite elemento A_%d_%d: ", i+1, j+1);
            scanf("%d", &a[i][j]);

            row_sum[i] += a[i][j];
            column_sum[j] += a[i][j];
        }
    }

    printf("Matriz:\n");
    for(i=0; i<ROWS; i++) {
        for(j=0; j<COLUMNS; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Soma das linhas:\n");
    for(i=0; i<ROWS; i++) {
        printf("linha %d: %d \n", i+1, row_sum[i]);
    }

    printf("Soma das colunas:\n");
    for(j=0; j<COLUMNS; j++) {
        printf("coluna %d: %d \n", j+1, column_sum[j]);
    }

    return 0;
}