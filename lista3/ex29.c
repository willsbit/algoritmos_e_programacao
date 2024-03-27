/*
29. A série de Fibonacci é formada pela sequência (CONSIDERANDO INÍCIO COM TERMO 0):
TERMO: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, ... 
VALOR: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
Escreva um algoritmo que gere a série de FIBONACCI até o n-ésimo termo. 
*/

#include <stdio.h>

int main() {
    int i, n, fib, fib_n_minus_1, fib_n_minus_2;

    printf("Digite o termo F_n que se deseja calcular: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        if (i == 0) {
            fib = 0;
        } else if (i == 1) {
            fib_n_minus_1 = fib;
            fib = 1;
        }

        fib_n_minus_2 = fib_n_minus_1;
        fib_n_minus_1 = fib;

        fib = fib_n_minus_1 + fib_n_minus_2; 
    }

    printf("O valor de F_%d é %d\n", n, fib);

}