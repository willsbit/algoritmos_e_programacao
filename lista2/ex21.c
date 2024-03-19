/*
21. Dados três valores A, B e C, construa um algoritmo que imprima os valores de forma
descendente (do maior para o menor).
*/
#include <stdio.h>
int main() {
    float a, b, c, swap;
    printf("A: ");
    scanf("%f", &a);
    printf("B: ");
    scanf("%f", &b);
    printf("C: ");
    scanf("%f", &c);

    // fazer com que a seja o menor valor
    if (a > b) {
        swap = a;
        a = b;
        b = swap;
    }

    if (a > c) {
        a = c;
        c = swap;
    }

    // agora a é o menor elemento, e basta comparar os dois restantes
    if (b > c) {
        swap = b;
        b = c;
        c = swap;
    }

    printf("números ordenados (desc): %f, %f, %f", c, b, a);
    return 0;
}