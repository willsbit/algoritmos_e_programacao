/*
20. Faça um algoritmo que receba n valores inteiros e positivos, calcule e imprima o maior e o
menor valor do conjunto.
*/

#include <stdio.h>
 
int main() {
    int n, current_max, current_min;
    int counter = 0;
    
    while(1) {
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &n);
 
        if (counter == 0) {
            current_max = n;
            current_min = n;
        } else if (n > current_max) {
            current_max = n;
        } else if (n < current_min) {
            current_min = n;
        }
 
        printf("O valor máximo é: %d\n", current_max);
        printf("O valor mínimo é: %d\n\n", current_min);
        counter++;
    }
 
    return 0;
}