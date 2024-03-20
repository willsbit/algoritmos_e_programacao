#include <stdio.h>
int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero == 0) {
        printf("O número é nulo\n");
    } else if (numero > 0) {
        printf("O número é positivo\n");
    } else {
        printf("O número é negativo\n");
    }
    return 0;
}