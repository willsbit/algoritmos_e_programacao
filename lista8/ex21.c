/*
21) Escreva um algoritmo que chama uma função que, recebendo um número inteiro não negativo
como PARÂMETRO, retorne o mesmo invertido. Ex: recebido como parâmetro o valor 234, deve
retornar o inteiro 432.
*/

#include <stdio.h>

int invert(int x) {
    int reversed;

    for(reversed = 0; (x % 10) != 0; x /= 10) {
        reversed = (reversed * 10) + (x % 10);
    } 

    return reversed;
}



int main() {
    int x;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &x);
    
    printf("Invertido: %d\n", invert(x));

    return 0;
}