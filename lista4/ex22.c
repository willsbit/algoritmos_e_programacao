/*
22) Faça um algoritmo que leia um vetor A de 10 posições contendo números inteiros. Determine
e mostre, a seguir, quais elementos de A estão repetidos e quantas vezes cada um se repete.
*/

#include <stdio.h>
#define VEC_SIZE 10
 
int main() {
    int i, j, should_calculate = 1, counter = 0, vec[VEC_SIZE];
    for(i=0; i<VEC_SIZE; i++) {
        printf("\nDigite o %d° número: ", i+1);
        scanf("%d", &vec[i]);
    }   
 
    for(i=0; i<VEC_SIZE; i++) {
        should_calculate = 1;
        counter = 0;
        for (j=0; j<i; j++) {
            if (vec[i] == vec[j]) {
                should_calculate = 0;
                break;
            }
        }
 
        if (should_calculate) {
            for(j=(i+1); j<VEC_SIZE; j++) {
                if (vec[i] == vec[j]) {
                    counter++;
                }
            }
            if (counter > 0) {
                printf("O número %d aparece %d vezes\n", vec[i], counter+1);
            } else {
                printf("O número %d não se repete no vetor.\n", vec[i]);
            }
        }
    }
 
    return 0;
}