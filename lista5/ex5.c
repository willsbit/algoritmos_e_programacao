/*
5) Escreva um algoritmo que leia uma matriz 10 x 10 e escreva a localização (linha e a coluna) do
maior valor.
*/

#include <stdio.h>
#define ROWS 10
#define COLUMNS 10

int main() {
    int i, j, m, matrix[ROWS][COLUMNS], max_row = 0, max_col = 0;
    
    for(i=0; i<ROWS; i++) {
        for(j=0; j<COLUMNS; j++) {
            printf("Digite elemento M_%d_%d: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);

            if (matrix[i][j] > matrix[max_row][max_col]) {
                max_row = i;
                max_col = j;
            }

        }
    }

    printf("\nO maior valor é M_%d_%d = %d\n", max_row+1, max_col+1, matrix[max_row][max_col]);
    return 0;
}