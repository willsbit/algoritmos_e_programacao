/*
12) Faça um programa que leia uma matriz 20x15 de números inteiros. Calcule e mostre a soma
das linhas pares da matriz.
*/

#include <stdio.h>
#define ROWS 20
#define COLUMNS 15

int main() {
    int i, j, a[ROWS][COLUMNS], sum = 0, row_sum[ROWS];

    for(i=0; i<ROWS; i++) {
        sum = 0;
        for(j=0; j<COLUMNS; j++) {
            printf("Digite elemento A_%d_%d: ", i+1, j+1);
            scanf("%d", &a[i][j]);

            if (i % 2 == 0) {
                sum += a[i][j];
            }
        }

        row_sum[i] = sum;
    }

    for(i=0; i<ROWS; i+=2) {
        printf("A soma da linha %d é %d\n", i, row_sum[i]);
    }

    return 0;
}