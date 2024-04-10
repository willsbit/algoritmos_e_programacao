/*
20) Leia um vetor de 15 posições, após isso, implemente um algoritmo para inverter as posições
deste vetor da seguinte maneira: 1º troca com o 15º, 2º com o 14º, e assim sucessivamente até
efetuar todas as trocas. Obs.: Não use vetores auxiliares.
*/

#include <stdio.h>
#define VEC_SIZE 6
 
int main() {
    int i, swap, vec[VEC_SIZE];
 
    for(i=0; i<VEC_SIZE; i++) {
        printf("Digite o %d° número do vetor: ", i+1);
        scanf("%d", &vec[i]);
    }
 
    for(i=0;i<(VEC_SIZE - i - 1); i++) {
        swap = vec[i];
        vec[i] = vec[VEC_SIZE - i - 1];
        vec[VEC_SIZE - 1 - i] = swap;
    }
 
    printf("Vetor trocado: ");
    for (i=0; i<VEC_SIZE; i++) {
        printf("%d, ", vec[i]);
    }
 
    return 0;
}