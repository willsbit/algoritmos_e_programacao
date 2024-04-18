/*
21) Faça um programa que leia uma matriz M 6x4. Após isso, multiplique cada linha pelo maior
elemento da linha em questão. Mostre a matriz resultante.
*/

#include <stdio.h>
#define ROWS 6
#define COLUMNS 4

int main() {
    int i, j, a[ROWS][COLUMNS], max_elm_in_row[ROWS], col_idx = 0;

    for(i=0; i<ROWS; i++) {
        for(j=0; j<COLUMNS; j++) {
            printf("Digite elemento A_%d_%d: ", i+1, j+1);
            scanf("%d", &a[i][j]);

            if (a[i][j] > a[i][col_idx]) {
                col_idx = j;
            } 
        }
        max_elm_in_row[i] = a[i][col_idx];
    }

    printf("\n");
    for(i=0; i<ROWS; i++) {
        for(j=0; j<COLUMNS; j++) {
            a[i][j] *= max_elm_in_row[i];
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}