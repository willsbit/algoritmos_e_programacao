#include <stdio.h>
int main() {
    int n;
    printf("Digite um número inteiro: ");
    scanf("%i", &n);

    if ((n % 2) == 0) {
        printf("%i é par\n", n);
    } else {
        printf("%i é ímpar\n", n);
    }

    return 0;
}