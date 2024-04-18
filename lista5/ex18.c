/*
18) Elaborar um programa que lê uma matriz M(6,6) e um valor A e multiplica a matriz M pelo
valor A e coloca os valores da matriz multiplicados por A em um vetor de V(36) e escreve no final
o vetor V.
*/

#include <stdio.h>
#define ROWS 6
#define COLUMNS 6

int main() {
    int i, j, k, a, m[ROWS][COLUMNS], v[ROWS * COLUMNS];

    printf("Digite o valor A: ");
    scanf("%d", &a);

    for(i=0, k=0; i<ROWS; i++) {
        for(j=0; j<COLUMNS; j++) {
            printf("Digite elemento M_%d_%d: ", i+1, j+1);
            scanf("%d", &m[i][j]);

            m[i][j] *= a;
            v[k] = m[i][j];
            k++;
        }
    }    

    printf("Vetor V:\n");
    for (i=0; i<(ROWS*COLUMNS); i++){
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}