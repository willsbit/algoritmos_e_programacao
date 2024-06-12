/*
1) Seja uma estrutura para descrever os carros de uma determinada revendedora, contendo os
seguintes campos:
− marca: string de tamanho 15;
− ano: inteiro;
− cor: string de tamanho 10;
− preço: real.
Escreva a definição da estrutura carro.
*/

#include <stdio.h>

struct Carro { 
    char marca[15];
    int ano;
    char cor[10];
    float preco;
};
 
typedef struct Carro Carro;
 
int main() {
 
    Carro carros[5];
    int i;
 
    for(i=0; i<5; i++) {
        printf("Digite a marca do carro (%d): ", i);
        gets(carros[i].marca);
        printf("Digite o ano do carro (%d): ", i);
        scanf("%i", &carros[i].ano);
        getchar() // buffer flush, para lidar com o enter que vem junto com o input do scanf;
        printf("Digite a cor do carro (%d): ", i);
        gets(carros[i].cor);
        printf("Digite o preço do carro (%d): ", i);
        scanf("%f", &carros[i].preco);
        getchar();
    }
    return 0;
}