/*
28) Faça um algoritmo para ler dois vetores V1 e V2 de 15 números cada. Calcular e escrever a
quantidade de vezes que V1 e V2 possuem os mesmos números e nas mesmas posições.
*/

#include <stdio.h>
#define VEC_SIZE 15

int main() {
    int i, counter = 0, v1[VEC_SIZE], v2[VEC_SIZE];
 
    for(i=0; i<VEC_SIZE; i++) {
        printf("Digite o %d° número do vetor 1: ", i+1);
        scanf("%d", &v1[i]);
    }

    printf("\n");
    for(i=0; i<VEC_SIZE; i++) {
        printf("Digite o %d° número do vetor 2: ", i+1);
        scanf("%d", &v2[i]);
    }

    for(i=0; i<VEC_SIZE; i++) {
        if(v1[i] == v2[i]) {
            printf("v1 e v2 possuem o elemento %d em comum na posição [%d]\n", v1[i], i);
            counter++;
        }
    }
    if (counter != 0) {
        printf("Ao total, v1 e v2 tem %d elementos iguais nas mesmas posições.\n", counter);
    } else {
        printf("v1 e v2 não tem elementos em comum nas mesmas posições.\n");
    }

    return 0;
}