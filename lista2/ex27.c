/*
27. Escrever um algoritmo que lê três comprimentos de lados (a, b e c). Determine, a seguir, o tipo
de triângulo que estes três lados formam, com base nos seguintes casos, escrevendo sempre os
valores lidos e uma mensagem adequada para o resultado (assuma que o valor lido para a seja
maior que os valores de b e c):
• Se a > b + c não formam triângulo algum;
• Se a2 = b2 + c2 formam um triângulo retângulo
• Se a2 > b2 + c2 formam um triângulo obtusângulo
* UTILIZAR A FUNÇÃO pow() DA BIBLIOTECA math.h. POR EXEMPLO: pow(2,2) RETORNA 4
(OU SEJA 22); pow (2, 3) RETORNA 8 (OU SEJA 23); pow (3, 4) RETORNA 81 (OU SEJA 34).
*/
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("A: ");
    scanf("%f", &a);
    printf("B: ");
    scanf("%f", &b);
    printf("C: ");
    scanf("%f", &c);

    if (a > (b + c)){        
        printf("Não é um triângulo euclideano.");
    } else if (pow(a, 2) == (pow(b, 2) + pow(c, 2))) {
        printf("Triângulo retângulo");
    } else if (pow(a, 2) > (pow(b, 2) + pow(c, 2))) {
        printf("Triângulo obtusângulo");
    } else {return 1;}

    return 0;
}
