/*
8) Elabore um algoritmo que carregue um vetor de 15 elementos inteiros e verifique a existência
de elementos iguais a 30, mostrando as posições em que esses elementos apareceram.
*/

#include <stdio.h>
#define VEC_SIZE 5
int main() {
 
    int i, j, n, posicoes[VEC_SIZE];
 
    for (i=0, j=0; i<VEC_SIZE; i++) {
        printf("%d) Digite um número inteiro: ", i + 1);
        scanf("%d", &n);
 
        if (n == 30) {
            posicoes[j] = i;
            j++;
        }
    }
 
 
    if (j > 0) {    
        printf("Há valores iguais a 30 nas posições: [");
        for(i=0; i<j; i++) {
            if ((i+1) != j) {
                printf("%d, ", posicoes[i]);
            } else {
                printf("%d]\n", posicoes[i]);
            }
        }
    } else {
        printf("Não há valores iguais a 30\n");
    }
 
 
    return 0;
}