/*
9) Faça um algoritmo que leia uma matriz A(M, N) e uma matriz B(M, N), M e N também são
valores lidos, efetue a soma entre estas matrizes e guarde o resultado na matriz A.
*/

#include <stdio.h>

int main() {
    int i, j, m, n;
        
    printf("Digite o número de linhas (M): ");
    scanf("%d", &m);

    printf("Digite o número de colunas (N): ");
    scanf("%d", &n);

    int a[m][n], b[m][n];

    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            printf("Digite elemento A_%d_%d: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n");


    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            printf("Digite elemento B_%d_%d: ", i+1, j+1);
            scanf("%d", &b[i][j]);

            a[i][j] += b[i][j];
        }
    }

    printf("A + B = \n");
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}