/*
24) Elabore um algoritmo que leia um vetor de 15 posições com números inteiros. Crie, a seguir,
um vetor resultante que contenha todos os números primos do vetor digitado. Escreva o vetor
resultante.
*/

#include <stdio.h>
#define VEC_SIZE 15
 
int main() {
    int i, j, k, is_prime = 1, vec[VEC_SIZE], primes[VEC_SIZE];
 
    for(i=0, k=0; i<VEC_SIZE; i++) {
        is_prime = 1;
        printf("Digite o %d° número do vetor: ", i+1);
        scanf("%d", &vec[i]);
 
        for(j=2; j<=(vec[i]/2); j++) {
            if (vec[i] % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (vec[i] != 1 && is_prime) {
            primes[k] = vec[i];
            k++;
        }
    }

    printf("O vetor de números primos é: ");
    for(i=0; i<k; i++) {
        printf("%d ", primes[i]);
    }
    printf("\n");
 
    return 0;
}