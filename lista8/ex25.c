/*
25) Escrever um algoritmo que chama uma função que retorna a soma dos números inteiros que
existem entre os números n1 e n2 (inclusive ambos) passados como parâmetros. A função deve 
funcionar inclusive se o valor de n2 for menor que n1. Ler n1 e n2 na função main e retornar para
a main o valor resultante. Ex:
// n=somaintervalo(3, 6); n recebe 18 (3 + 4 + 5 + 6)
// n=somaintervalo(5,5); n recebe 10 (5 + 5)
// n=somaintervalo(-2,3); n recebe 3 (-2 + -1 + 0 + 1 + 2 + 3)
// n=somaintervalo(4, 0); n recebe 10 (4 + 3 + 2 + 1 + 0) 
*/


#include <stdio.h>

int somaintervalo(int n1, int n2) {
    int sum = n1 + n2;
    
    if (n1 < n2) {
        for(n1++; n1 != n2; n1++) {
            sum += n1;
        }
    } else if (n1 > n2) {
        for(n1--; n1 != n2; n1--) {
            sum += n1;
        }
    }

    return sum;
}



int main() {
    int n1, n2;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");    
    scanf("%d", &n2);

    printf("A soma dos números inteiros que existem entre %d e %d (inclusive) é %d\n", n1, n2, somaintervalo(n1, n2));

    return 0;
}