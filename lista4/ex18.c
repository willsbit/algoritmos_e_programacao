/*
18) Faça um algoritmo para ler um vetor de 30 números. Após isto, ler mais um número qualquer,
calcular e escrever quantas vezes esse número aparece no vetor.
*/

#include <stdio.h>
#define VEC_SIZE 30

int main() {
    int i, counter=0;
    float x, vec[VEC_SIZE];

    for(i=0; i<VEC_SIZE; i++) {
        printf("Digite o %dº número do vetor: ", i+1);
        scanf("%f", &vec[i]);
    }

    printf("Digite o número procurado: ");
    scanf("%f", &x);

    for(i=0; i<VEC_SIZE; i++) {
        if (vec[i] == x) {
            counter++;
        }
    }

    printf("O número %f aparece no vetor %d vezes\n", x, counter);


    return 0;
}
