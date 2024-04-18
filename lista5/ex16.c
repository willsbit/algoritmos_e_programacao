/*
16) Elabore um algoritmo que leia uma matriz M(5, 5) e a transforme numa matriz triangular
inferior, atribuindo zero a todos os elementos acima da diagonal principal, escrevendo-a ao final.
*/

#include <stdio.h>
#define ROWS 5
#define COLUMNS 5

int main() {
    int i, j, a[ROWS][COLUMNS];

    for(i=0; i<ROWS; i++) {
        for(j=0; j<COLUMNS; j++) {
            printf("Digite elemento A_%d_%d: ", i+1, j+1);
            scanf("%d", &a[i][j]);

        if (j > i) {
            a[i][j] = 0;
            }
        }


    }

printf("Matriz triangular inferior:\n");
for(i=0; i<ROWS; i++) {
    for(j=0; j<COLUMNS; j++) {
        printf("%d ", a[i][j]);
    }
    printf("\n");
}

    return 0;
}