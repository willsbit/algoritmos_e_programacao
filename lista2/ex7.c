#include <stdio.h>
int main() {
    float a, b;
    printf("Digite o primeiro número: ");
    scanf("%f", &a);

    printf("Digite o segundo número: ");
    scanf("%f", &b);

    // if ((a + b) > 20) {
    //     printf("%f", (a+b+8));
    // } else {
    //     printf("%f", (a+b-5));
    // }

    (a + b) > 20 ? printf("%f", (a+b+8)) : printf("%f", (a+b-5));

    return 0;
}