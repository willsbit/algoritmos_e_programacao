/*
1) Crie um algoritmo que receba uma matriz 3x3 e depois exiba uma determinada linha da matriz
indicada pelo usuário.
*/

#include <stdio.h>
#define ROWS 3
#define COLUMNS 3

int main() {
    int i, j, m, matrix[ROWS][COLUMNS];
    
    for(i=0; i<ROWS; i++) {
        for(j=0; j<COLUMNS; j++) {
            printf("Digite elemento M_%d_%d: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Digite qual linha deve ser mostrada: ");
    scanf("%d", &m);

    for(i=0; i<COLUMNS; i++) {
        printf("%d ", matrix[m-1][i]);
    }

    return 0;
}
