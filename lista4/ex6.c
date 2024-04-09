/*
6) Faça um algoritmo que carregue um vetor de seis elementos numéricos inteiros, calcule e
mostre:
− a quantidade de números pares;
− Quais os números pares;
− a quantidade de números ímpares;
− quais os números ímpares.
*/

#include <stdio.h>
#define VEC_SIZE 6
int main() {
 
    int i, j, k=0, n_pares = 0, n_impares = 0, vec[VEC_SIZE];
 
    for (i=0; i<VEC_SIZE; i++) {
        printf("%d) Digite um número inteiro: ", i + 1);
        scanf("%d", &vec[i]);
 
        if (vec[i] % 2 == 0) {
            n_pares++;
        } else {
            n_impares++;
        }
    }
 
    printf("Existem %d números pares e %d números ímpares.\n", n_pares, n_impares);
 
    int pares[n_pares];
    int impares[n_pares];
 
    for (i=0, j=0, k=0; i<VEC_SIZE; i++) {
        if (vec[i] % 2 == 0) {
            pares[j] = vec[i];
            j++;
        } else {
            impares[k] = vec[i];
            k++; 
        }
    }
    
    printf("Números pares: ");
    for (i=0; i<n_pares; i++) {
        printf("%d \t ", pares[i]);
    }
 
    printf("\nNúmeros ímpares: ");
    for (i=0; i<n_impares; i++) {
        printf("%d \t ", impares[i]);
    }
 
    
 
 
    return 0;
}