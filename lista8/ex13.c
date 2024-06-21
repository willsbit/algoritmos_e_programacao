/*
13) Escrever um programa que lê dois valores, x e y, e chama uma função para calcular x y
(assuma x e y inteiros não negativos). A função deve retornar o valor resultante para a função
main, para então ser exibido. Não utilize a função pronta pow! 
*/

#include <stdio.h>
 
int xpowy(int x, int y) {
    int i, result = 1;
 
    for(i=0; i<y; i++) {
        result *= x;
    }
 
    return result;
 
}
 
int main () {
    int x, y;
 
    printf("Digite o número x:");
    scanf("%d", &x);
 
    printf("Digite o número y:");
    scanf("%d", &y);
 
    printf("\n%d ^ %d = %d.\n", x, y, xpowy(x, y));
 
 
    return 0;
}