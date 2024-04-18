/*
7) Escreva um algoritmo que leia uma matriz 10 x 10 e um valor X. O algoritmo deverá fazer uma
busca desse valor na matriz e, ao final escrever a localização (linha e coluna) ou uma mensagem
de “não encontrado”.
*/

#include <stdio.h>
#define ROWS 2
#define COLUMNS 2

int main() {
    int i, j, n, found, matrix[ROWS][COLUMNS];
        
    for(i=0; i<ROWS; i++) {
        for(j=0; j<COLUMNS; j++) {
            printf("Digite elemento M_%d_%d: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Digite o elemento a ser procurado: ");
    scanf("%d", &n);

    printf("\n");
    found = 0;
    for(i=0; i<ROWS; i++) {
        for(j=0; j<COLUMNS; j++) {
            if (matrix[i][j] == n) {
                found = 1;
                printf("Encontrado o elemento n = %d na localização M_%d_%d. \n", n, i+1, j+1);
            }
        }
    }

    if (!found) {
        printf("Elemento não encontrado na matriz.\n");
    } else {
        printf("\n");
    }

    return 0;
}