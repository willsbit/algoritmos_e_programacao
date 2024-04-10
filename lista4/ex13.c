/*
13) Escrever um algoritmo que gera os 10 primeiros números primos acima de 100 e os armazena
em um vetor de X(10) escrevendo, no final, o vetor X.
*/

#include <stdio.h>
#define VEC_SIZE 10
 
int main() {
    int i, j, is_prime = 1, counter, primes[VEC_SIZE];
 
    for(i=100, counter=0; counter<VEC_SIZE; i++) {
        is_prime = 1;
        for(j=2; j<=(i/2); j++) {
            if ((i % j) == 0) {
                is_prime = 0;
                break;
            }
        }
 
        if (is_prime) {
            primes[counter] = i;
            counter++;
        }
    }
 
    printf("Os 10 primeiros números primos acima de 100 são: ");
    for(i=0; i<VEC_SIZE; i++) {
        if ((i+1) != VEC_SIZE) {
            printf("%d, ", primes[i]);
        } else {
            printf("%d\n", primes[i]);
        }
    }
    return 0;
}