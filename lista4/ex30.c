/*
30) Faça um algoritmo que leia dois vetores (A e B) de 50 posições de números inteiros. O
algoritmo deve, então, subtrair o primeiro elemento de A do último de B, acumulando o valor,
subtrair o segundo elemento de A do penúltimo de B, acumulando o valor, e assim por diante.
Mostre o resultado da soma final.
*/

#include <stdio.h>
#define VEC_SIZE 50

int main() {
    int i, sum = 0, v1[VEC_SIZE], v2[VEC_SIZE];
 
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
        sum += v1[i] - v2[VEC_SIZE - 1 - i];
    }

    printf("A soma acumulada dos v1[i] - v2[j] é %d\n", sum);
}