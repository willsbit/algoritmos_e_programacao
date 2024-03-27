/*
17. Escreva um algoritmo que receba vários números e verifique se eles são ou não quadrados
perfeitos. O algoritmo termina a execução quando for digitado um número menor ou igual a 0. Um
número é quadrado perfeito quando tem um número inteiro como raiz quadrada. 
*/

#include <stdio.h>
#include <math.h>

int main() {
 
    float n, sqrt_n;
    while(1) {
        printf("Digite um número: ");
        scanf("%f", &n);        
 
        if (n <= 0) {
            break;
        }
 
        sqrt_n = sqrt(n);
 
        if (ceilf(sqrt_n) == sqrt_n) {
            printf("O número é um quadrado perfeito\n");
        } else {
            printf("O número não é um quadrado perfeito\n");
        }
    }
    return 0;
}