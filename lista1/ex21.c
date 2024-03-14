/*
21. Faça um algoritmo para ler valores para as variáveis inteiras A e B. Efetuar a troca dos valores
 de forma que a variável A passe a possuir o valor da variável B e que a variável B passe a possuir
o valor da variável A. Apresentar os valores iniciais e os valores finais de A e B.
*/
#include <stdio.h>

int main() {
    int a, b, swap;
    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    swap = a;
    a = b;
    b = swap;

    printf("A (input): %d \t B (input): %d \n", b, a);
    printf("A (output): %d \t B (output): %d \n", a, b);


    return 0;
}