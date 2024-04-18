/*
13) Elabore um programa que leia uma matriz M 4x5, calcule e mostre um vetor com cinco
posições, onde cada posição contém a soma dos elementos de cada coluna da matriz. Mostre
apenas os elementos do vetor maiores que dez. Se não existir nenhum elemento maior que dez
mostre uma mensagem.
*/

#include <stdio.h>
#define ROWS 4
#define COLUMNS 5

int main() {
    int print_warning = 1, i, j, a[ROWS][COLUMNS], sum = 0, col_sum[COLUMNS] = {0};

    for(i=0; i<ROWS; i++) {
        sum = 0;
        for(j=0; j<COLUMNS; j++) {
            printf("Digite elemento A_%d_%d: ", i+1, j+1);
            scanf("%d", &a[i][j]);

            col_sum[j] += a[i][j];
        }

    }

    printf("Vetor das somas de colunas: ");
    for(i=0; i<COLUMNS; i++) {
        if (col_sum[i] > 10) {
            printf("%d ", col_sum[i]);
            print_warning = 0;
        }
    }
    if(print_warning) {
        printf("A soma de nenhuma coluna é > 10.\n");
    }

    return 0;
}