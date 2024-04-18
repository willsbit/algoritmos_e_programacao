/*
3) Faça um algoritmo que leia uma matriz 3x4 de inteiros e em seguida troque a primeira linha
com a última linha. Ao final a matriz alterada deve ser exibida
*/

#include <stdio.h>
#define ROWS 3
#define COLUMNS 4

int main() {
    int i, j, m, matrix[ROWS][COLUMNS], swap;
    
    for(i=0; i<ROWS; i++) {
        for(j=0; j<COLUMNS; j++) {
            printf("Digite elemento M_%d_%d: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i=0;i<COLUMNS;i++) {
        swap = matrix[0][i];
        matrix[0][i] = matrix[ROWS-1][i];
        matrix[ROWS-1][i] = swap;
    }

    for(i=0;i<ROWS;i++) {
        printf("\n");
        for(j=0;j<COLUMNS;j++) {
            printf("%d ", matrix[i][j]);
        }

    }
    return 0;
}