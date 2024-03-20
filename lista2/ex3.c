#include <stdio.h>
int main() {
    float a, b, c, swap;
    printf("Digite o primeiro número: ");
    scanf("%f", &a);

    printf("Digite o segundo número: ");
    scanf("%f", &b);

    printf("Digite o terceiro número: ");
    scanf("%f", &c);

    if (a > b) {
        swap = a;
        a = b;
        b = swap;
    }

    if (a > c) {
        swap = a;
        a = c;
        c = swap;
    }

    if (b > c) {
        swap = b;
        b = c;
        c = swap;
    }

    printf("O maior número é: %f\n", c);

    return 0;
}