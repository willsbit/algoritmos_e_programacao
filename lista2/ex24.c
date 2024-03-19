/*
24. Escreva um algoritmo que receba três valores e verifique se eles podem ser os comprimentos
dos lados de um triângulo.
Propriedade: O comprimento de um lado do triângulo é menor do que a soma dos comprimentos
dos outros dois lados: (A < B + C) e (B < A + C) e (C < A + B).
Caso não seja um triângulo, imprima a mensagem “Os valores não formam um triângulo”.
Caso seja triângulo, informe a sua classificação quanto aos lados:
Equilátero: (A = B) e (B = C).
Isósceles: (A = B) ou (A = C) ou (B = C).
Escaleno: (A # B) e (B # C) e (A # C).
*/
#include <stdio.h>
int main() {
    float a, b, c;
    printf("A: ");
    scanf("%f", &a);
    printf("B: ");
    scanf("%f", &b);
    printf("C: ");
    scanf("%f", &c);

    if ((a < (b + c)) &&  (b < (a + c)) && (c < (a + b))) {
        if ((a == b) && (b == c)) {
            printf("Triângulo equilátero");
        } else if ((a == b) || (b == c) || (a == c)) {
            printf("Triângulo isocéles");
        } else if ((a != b) && (a != c) && (b != c)) {
            printf("Triângulo escaleno");
        }
        else { return 1;}
    } else {
        printf("Não é um triângulo euclideano.");
    }

    return 0;
}