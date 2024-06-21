/*
15) Escrever um algoritmo que leia um valor inteiro e chama uma função para calcular a soma de
todos os dígitos da representação decimal deste número. Por exemplo, a soma dos dígitos de 
432 é 9 (4 + 3 + 2). Lembre-se: para 432 / 10, quociente 43 e resto 2. A função deve retornar o
valor resultante para a função principal, para então ser exibido
*/

#include <stdio.h>
 
int sum_digits(int x) {
    int i, sum_digits = 0, digit = -1;
 
    for (i=1; digit != 0; i*= 10) {
        digit = (x / i) % 10;
        sum_digits +=  digit;
    }
 
    return sum_digits;
 
}
 
int main () {
    int x;
 
    printf("Digite um número:");
    scanf("%d", &x);
 
    printf("A soma dos dígitos (em representação decimal) de %d é %d\n", x, sum_digits(x));
 
 
    return 0;
}