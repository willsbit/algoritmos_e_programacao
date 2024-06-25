/*
Implemente uma função que receba como parâmetro um vetor de números inteiros 
(vet) de tamanho n e retorne quantos números pares estão armazenados no vetor.  
E a função deve obedecer ao protóJpo: int pares (int n, int* vet).
*/

#include <stdio.h>
#define N 5
 
int n_evens(int n, int *vec) {
    int i, count = 0;
 
    for (i=0; i<n; i++) {
        if (*(vec+i) % 2 == 0) {
            count++;
        }
    }
 
    return count;
 
}
 
int main () {
    int even_count, numbers[N] = {1, 2, 4, 6, 8};
 
    even_count = n_evens(N, numbers);
 
    printf("Número de elementos pares no vetor: %d\n", even_count);
    return 0;
}