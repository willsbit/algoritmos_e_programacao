/*
20) Implemente um algoritmo que leia duas matrizes A(10, 10) e B(10, 10) e escreva os valores da
primeira que ocorrem em qualquer posição da segunda.
*/

#include <stdio.h>
#define ROWS 10
#define COLUMNS 10

int main() {
    int i, j, k, c, a[ROWS][COLUMNS], b[ROWS][COLUMNS], v[ROWS * COLUMNS], in_common[ROWS * COLUMNS];

    for(i=0, k=0; i<ROWS; i++) {
        for(j=0; j<COLUMNS; j++) {
            printf("Digite elemento A_%d_%d: ", i+1, j+1);
            scanf("%d", &a[i][j]);

            v[k] = a[i][j];
            k++;
        }
    }

    for(i=0, c=0; i<ROWS; i++) {
        for(j=0; j<COLUMNS; j++) {
            printf("Digite elemento B_%d_%d: ", i+1, j+1);
            scanf("%d", &b[i][j]);
            
            for(k=0; k<(ROWS*COLUMNS); k++) {
                if (v[k] == b[i][j]) {
                    in_common[c] = v[k];
                    c++;
                    break;
                }
            }
        }
    }

    printf("Os elementos em comum de A e B são: ");
    for(i=0; i<c; i++) {
        printf("%d ", in_common[i]);
    }
    printf("\n");
    return 0;
}