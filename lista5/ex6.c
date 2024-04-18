/*
6) Implemente um algoritmo para declarar uma matriz 5 x 5. Preencha com 1 a diagonal principal
e com 0 os demais elementos. Escreva ao final a matriz obtida.
*/

#include <stdio.h>
#define ROWS 5
#define COLUMNS 5

int main() {
    int i, j, m, matrix[ROWS][COLUMNS];
    
    for(i=0; i<ROWS; i++) {
        printf("\n");
        for(j=0; j<COLUMNS; j++) {
            if (i == j) {
                matrix[i][j] = 1;
            } else {
                matrix[i][j] = 0;
            }

            printf("%d ", matrix[i][j]);
        }
    }
    printf("\n");
    return 0;
}
