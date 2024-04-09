/*
3) Escreva um algoritmo que leia um vetor de 7 elementos inteiros. Encontre e mostre o menor
elemento e sua posição no vetor.
*/

#include <stdio.h>
#define VEC_SIZE 7
int main() {
 
    int i, menor_elemento, idx_menor_elemento, vec[VEC_SIZE];
 
 
    for (i=0; i<VEC_SIZE; i++) {
        printf("%d) Digite um número inteiro: ", i + 1);
        scanf("%d", &vec[i]);
    }
 
    for (i=0, menor_elemento = vec[0], idx_menor_elemento = 0; i<VEC_SIZE; i++) {
        if (vec[i] < menor_elemento) {
            menor_elemento = vec[i];
            idx_menor_elemento = i;
        }
    }
    printf("Menor elemento: %d\n Índice do menor elemento: %d\n", menor_elemento, idx_menor_elemento);
    
 
    return 0;
}