/*
24. Escreva um algoritmo que calcule o m.d.c. (máximo divisor comum) entre A e B (número
inteiros e positivos). Esses dois valores são passados pelo usuário através do teclado.
*/

#include <stdio.h>

int main() {
    
    int a, b, remainder;

    printf("Digite A (inteiro positivo): ");
    scanf("%d", &a);

    printf("Digite B (inteiro positivo): ");
    scanf("%d", &b);

    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    printf("O m.d.c é %d", a);

    return 0;
}