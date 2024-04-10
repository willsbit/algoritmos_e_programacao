/*
23) Faça um algoritmo que leia um vetor A de 50 posições. Em seguida, compacte o vetor,
retirando os valores nulos e negativos. Coloque o resultado no vetor B.
*/

#include <stdio.h>
#define VEC_SIZE 50
 
int main() {
    int i, j, vec[VEC_SIZE], filtered_vec[VEC_SIZE];
 
    for(i=0, j=0; i<VEC_SIZE; i++) {
        printf("Digite o %d° número do vetor: ", i+1);
        scanf("%d", &vec[i]);
 
        if (vec[i] > 0) {
            filtered_vec[j] = vec[i];
            j++;
        } 
    }
 
    printf("O vetor filtrado é: ");
    for(i=0; i<j; i++) {
        printf("%d, ", filtered_vec[i]);
    }
 
    return 0;
}