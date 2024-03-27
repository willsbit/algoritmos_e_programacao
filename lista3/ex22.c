/*
22. Escreva um algoritmo que repita a soma dos números recebidos até que o total seja maior que
cem. 
*/

#include <stdio.h>

int main() {
    float n, sum;

    sum = 0;
    do {
        printf("Digite um número: ");
        scanf("%f", &n);

        sum = sum + n;

        printf("Soma parcial: %f\n", sum);
    } while (sum <= 100);

    return 0;
}