/*
5) Escrever um programa que crie um vetor de 50 elementos inteiros. A seguir, o vetor deve ser
preenchido por 50 valores não repetidos lidos do teclado. A não inclusão de elementos repetidos
deve ser garantida pelo programa, e não pelo usuário.
*/

#include <stdio.h>
#define VEC_SIZE 50
int main() {
 
    int i, j, n, vec[VEC_SIZE];
 
 
    for (i=0; i<VEC_SIZE; i++) {
        printf("%d) Digite um número inteiro: ", i + 1);
        scanf("%d", &n);
 
        for (j = 0; j < i; j++) {
            if (n == vec[j]) {
                printf("O número não pode ser repetido! Tente novamente.\n");
                i--;
                break;
            }
        }
 
        vec[i] = n;
    }
 
    return 0;
}