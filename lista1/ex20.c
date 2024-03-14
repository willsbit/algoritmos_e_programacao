/*
20. Implemente um aplicativo que leia a razão (constante) r de uma progressão aritmética e o
valor a1 do primeiro termo e calcule e exiba o décimo termo da série. O n-ésimo termo da
progressão aritmética é dado por: an = a1 + (n − 1) x r.
*/
#include <stdio.h>

int main() {
    float a1, r;
    printf("Digite a razão da PA: ");
    scanf("%f", &r);

    printf("Digite o primeiro termo da sequência: ");
    scanf("%f", &a1);

    printf("A décimo termo é: %.2f", a1 + (10 - 1) * r);

    return 0;
}