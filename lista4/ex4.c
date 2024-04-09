/*
4) Escreva um programa no qual são lidos valores para um vetor de 30 elementos inteiros, além
de outro valor, menor que 30, para uma variável n. Após a leitura o programa deve deslocar os
elementos para a esquerda tantas posições quantas indicadas por n. Os elementos que forem
deslocados para fora do vetor devem ser recolocados na outra extremidade.
*/

#include <stdio.h>
#define VEC_SIZE 5
int main() {
 
    int i, n, leftover_counter, vec[VEC_SIZE];
 
 
    for (i=0; i<VEC_SIZE; i++) {
        printf("%d) Digite um número inteiro: ", i + 1);
        scanf("%d", &vec[i]);
    }
 
    printf("Digite um valor de n: ");
    scanf("%d", &n);
 
    if (n >= VEC_SIZE) {
        printf("Digite um número menor que %d: ", VEC_SIZE);
        scanf("%d", &n);
    }
 
    int leftover[n];
 
    for (i=0, leftover_counter=0; i<VEC_SIZE; i++) {
        // adiciona os elementos que sobram em outro vetor
        if (i < n) {
            leftover[i] = vec[i];
        }
 
        if ((i + n) < VEC_SIZE) {
            vec[i] = vec[i + n];
        } else { // já estouramos o contador, então devemos usar os elementos que sobraram
            vec[i] = leftover[leftover_counter];
            leftover_counter++;
        }
    }
 
    for(i=0; i<VEC_SIZE; i++){
        printf("vec[%d] = %d\n", i, vec[i]);
    }
 
    return 0;
}