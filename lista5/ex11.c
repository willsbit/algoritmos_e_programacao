/*
11) Escrever um algoritmo que leia valores para uma matriz 5 x 5 de inteiros e verifique qual o
menor elemento presente nas “bordas” da matriz, isto é, o menor entre os elementos que fazem
parte da primeira linha, da primeira coluna, da última linha e da última coluna.
*/

#include <stdio.h>
#define ROWS 5
#define COLUMNS 5

int main() {
    int i, j, a[ROWS][COLUMNS], min;

    for(i=0; i<ROWS; i++) {
        for(j=0; j<COLUMNS; j++) {
            printf("Digite elemento A_%d_%d: ", i+1, j+1);
            scanf("%d", &a[i][j]);

            if (i == 0 && j == 0) {min = a[i][j];} //inicialização

            if ((i == 0) || (j == 0) || (i == ROWS - 1) || (j == COLUMNS - 1)) {
                if (a[i][j] < min) {
                    min = a[i][j];
                }
            }


        }
    }

    printf("\nO menor elemento nas bordas é %d\n", min);

    return 0;
}