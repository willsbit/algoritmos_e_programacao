/*
10) Escreva um algoritmo que leia uma matriz M 5x5 de números reais, calcule e mostre a soma
dos elementos da diagonal secundária.
*/

#include <stdio.h>
#define ROWS 5
#define COLUMNS 5

int main() {
    int i, j, k;
    float a[ROWS][COLUMNS], sum = 0;
        
    for(i=0, k=0; i<ROWS; i++) {
        for(j=0; j<COLUMNS; j++) {
            printf("Digite elemento A_%d_%d: ", i+1, j+1);
            scanf("%f", &a[i][j]);

            if (i + j == ROWS - 1) {
                sum += a[i][j];
            }
        }
    }
    printf("\n");

    printf("A = \n");
    for(i=0; i<ROWS; i++) {
        for(j=0; j<COLUMNS; j++) {
            printf("%.2f\t", a[i][j]);
        }
        printf("\n");
    }

    printf("A soma de elementos na diagonal secundária é %.2f.\n", sum);

    return 0;
}