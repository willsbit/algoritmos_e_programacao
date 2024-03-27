/*
27. Escreva uma Programa que receba um número inteiro e verifique se o número fornecido é
primo ou não. Imprima mensagem de número primo ou número não primo.
OBSERVAÇÃO: um número é primo se este é divisível apenas pelo número um e por ele mesmo 
*/

#include <stdio.h>

int main() {
    
    int i, n, is_prime = 1;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    for(i=2; i<=(n / 2); i++) { // nenhum número entre n/2 e n divide n completamente
        if ((n % i) == 0) {
            is_prime = 0;
            break;
        }
    }

    if (is_prime) {
        printf("O número é primo\n");
    } else {
        printf("O número não é primo\n");
    }

    return 0;
}