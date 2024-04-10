/*
15) Escreva um algoritmo que leia um vetor de 10 posições de números inteiros e imprimir, logo
após, gerar 2 vetores a partir dele, um contendo os elementos de posições ímpares do vetor e o
outro os elementos de posições pares. Imprimi-los no final.
*/

#include <stdio.h>
#define VEC_SIZE 10

int main() {
    int i, even_counter, odd_counter, vec[VEC_SIZE], even[VEC_SIZE], odd[VEC_SIZE];

    for(i=0, even_counter=0, odd_counter=0; i<VEC_SIZE; i++) {
        printf("Digite o %dº número do vetor: ", i+1);
        scanf("%d", &vec[i]);

        if((vec[i] % 2) == 0) {
            even[even_counter] = vec[i];
            even_counter++;
        } else {
            odd[odd_counter] = vec[i];
            odd_counter++;
        }
    }

    printf("Vetor original: ");
    for(i=0; i<VEC_SIZE; i++) {
        printf("%d ", vec[i]);
    }
    printf("\n");

    printf("Vetor dos pares: ");
    for(i=0; i<even_counter; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    printf("Vetor dos ímpares: ");
    for(i=0; i<odd_counter; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}
