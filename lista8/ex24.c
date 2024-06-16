/*
24) Existem números de 4 dígitos (entre 1000 e 9999) que obedecem à seguinte característica: se
dividirmos o número em dois números de dois dígitos, um composto pela dezena e pela unidade,
e outro pelo milhar e pela centena, somarmos estes dois novos números gerando um terceiro, o
quadrado deste terceiro número é exatamente o número original de quatro dígitos. Por exemplo:
2025 -> dividindo: 20 e 25 -> somando temos 45 -> 45
² = 2025.
Escreva um algoritmo que leia um número inteiro de quatro dígitos e passe este número para uma
função que verifique se apresenta ou não a característica, retornando 0 ou 1.
Exiba, na função main, o resultado desta verificação, informando se o número digitado obedece à
característica apresentada.
*/

#include <stdio.h>
#include <math.h>

int is_split_square(int x) {
    int leading_digits, trailing_digits;

    trailing_digits = x % 100;
    leading_digits = x / 100;

    if (pow((trailing_digits + leading_digits), 2) == x) {
        return 1;
    }

    return 0;
}



int main() {
    int x;

    printf("Digite um número de 4 dígitos: ");
    scanf("%d", &x);
    

    if (is_split_square(x)) {
        printf("O número %d tem a característica desejada.\n", x);
    } else {
        printf("O número %d não tem a característica desejada..\n", x);
    }

    return 0;
}