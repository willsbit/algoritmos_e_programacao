/*
25) Faça um algoritmo que receba 10 números inteiros, guardando-os em um vetor A , e mostre:
a) Os números múltiplos de 3;
b) A soma dos números múltiplos de 3;
c) A posição que se encontra o maior múltiplo de 3
*/

#include <stdio.h>
#define VEC_SIZE 10
 
int main() {
    int i, j, sum = 0, max, idx_max = 0, vec[VEC_SIZE], multiples[VEC_SIZE];
 
    for(i=0, j=0; i<VEC_SIZE; i++) {
        printf("Digite o %d° número do vetor: ", i+1);
        scanf("%d", &vec[i]);

        if (vec[i] % 3 == 0) {
            if (j == 0) { max = vec[i];} 
            else if (vec[i] > max) {max = vec[i]; idx_max = i;}

            multiples[j] = vec[i];
            sum += vec[i];
            j++;
        }
    }

    printf("\n");
    printf("Os números múltiplos de 3 são: ");
    for(i=0; i<j; i++) {
        printf("%d ", multiples[i]);
    }
    printf("\n");

    printf("A soma dos múltiplos de 3 é %d\n", sum);
    printf("O maior múltiplo de 3 na lista é %d, na posição vec[%d]\n", max, idx_max);

 
    return 0;
}