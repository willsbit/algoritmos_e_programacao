/*
23. Escreva um algoritmo que receba números do usuário enquanto eles forem positivos e ao fim
o algoritmo deve imprimir a média dos números digitados. 
*/

#include <stdio.h>

int main() {
    float n, sum, counter;

    sum = 0;
    counter = 0;
    while (1) {
        printf("Digite um número: ");
        scanf("%f", &n);

        if (n <= 0) {
            break;
        }

        sum += n;
        counter++;

    }

    printf("A média dos números é: %.2f", (sum/counter));
    return 0;
}