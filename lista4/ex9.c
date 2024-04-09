/*
9) Faça um algoritmo que leia um vetor de 30 números inteiros e gere um segundo vetor cujas
posições pares são o dobro do vetor original e as ímpares o triplo.
*/

#include <stdio.h>
#define VEC_SIZE 5
int main() {
 
    int i, n, vec[VEC_SIZE];
 
    for (i=0; i<VEC_SIZE; i++) {
        printf("%d) Digite um número inteiro: ", i + 1);
        scanf("%d", &n);
 
        if ((i % 2) == 0) {
            vec[i] = 2*n;
        } else {
            vec[i] = 3*n;
        }
    }
    
    printf("Vetor modificado: [");
    for (i=0; i<VEC_SIZE; i++) {
        if ((i+1) != VEC_SIZE) {
            printf("%d, ", vec[i]);
        } else {
            printf("%d]\n", vec[i]);
        }
    }
 
 
 
    return 0;
}