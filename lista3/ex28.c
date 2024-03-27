/*
28. Crie um algoritmo que receba um número inteiro diferente de zero, e calcule o fatorial deste
número. (Fatorial de um número é igual ao produto dos números 1 ao número desejado, inclusive.
EXEMPLO: 3! (fatorial de 3 é igual a: 1x2x3 = 6)
*/

#include <stdio.h>

int main() {
    int i, n, factorial;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    factorial = n;

    for(i=(n-1); i>1; i--){
        factorial = factorial * i;
    }

    printf("O fatorial de %d é %d", n, factorial);

    return 0;
}