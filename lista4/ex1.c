/*
1) Escreva um algoritmo que leia e mostre um vetor de 20 elementos inteiros. a seguir, conte
quantos valores pares existem no vetor.
*/

#include <stdio.h>
 
int main() {
 
    int i, qtde_pares = 0, valores[20];
 
    for (i=0; i<20; i++) {
        printf("%d) Digite um número inteiro: ", i + 1);
        scanf("%d", &valores[i]);
    }
 
    for (i=0; i<20; i++) {
        if (valores[i] % 2 == 0) {
            qtde_pares++;
        }
    }
 
    printf("Existem %d valores pares no vetor\n", qtde_pares);
 
    return 0;
}