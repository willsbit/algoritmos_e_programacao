/*
2) Escreva um algoritmo que leia dois vetores de 10 posições e faça a multiplicação dos
elementos de mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor
resultante.
*/

#include <stdio.h>
#define VEC_SIZE 10

int main() {
 
    int i, vec1[VEC_SIZE], vec2[VEC_SIZE], resultado[VEC_SIZE];
 
 
    for (i=0; i<VEC_SIZE; i++) {
        printf("1.%d) Digite um número inteiro: ", i + 1);
        scanf("%d", &vec1[i]);
    }
 
    for (i=0; i<VEC_SIZE; i++) {
        printf("2.%d) Digite um número inteiro: ", i + 1);
        scanf("%d", &vec2[i]);
 
        resultado[i] = vec1[i] * vec2[i];
    }
 
    printf("Resultado: [");
    for (i=0; i<VEC_SIZE; i++) {
        (i+1) != VEC_SIZE ? printf("%d, ", resultado[i]) : printf("%d", resultado[i]);
    }
    printf("]\n");
 
 
    return 0;
}