/*
16) Ler um vetor A de 10 números. Após, ler mais um número e guardar em uma variável X.
Armazenar em um vetor M o resultado de cada elemento de A multiplicado pelo valor X. Logo
após, imprimir o vetor M.
*/

#include <stdio.h>
#define VEC_SIZE 10

int main() {
    int i;
    float x, a[VEC_SIZE], m[VEC_SIZE];

    for(i=0; i<VEC_SIZE; i++) {
        printf("Digite o %dº número do vetor: ", i+1);
        scanf("%f", &a[i]);
    }

    printf("Digite o fator de multiplicação: ");
    scanf("%f", &x);

    printf("Vetor M: ");
    for(i=0; i<VEC_SIZE; i++) {
        m[i] = a[i] * x;
        printf("%f ", m[i]);
    }
    printf("\n");



    return 0;
}
