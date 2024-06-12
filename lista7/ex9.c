/*
7) Modele uma estrutura para armazenar o seguinte conjunto de dados: nome da loja, telefone e
preço de um eletrodoméstico.

8) Desenvolva um algoritmo que permita cadastrar 15 registros da estrutura anterior e armazenálos, mostrando-os a seguir.

9) Use a base do algoritmo anterior, incrementando-o para mostrar qual foi a média dos preços
cadastrados e a relação contendo o nome e o telefone das lojas cujo preço estava abaixo da
média.
*/

#include <stdio.h>
 
#define N_LOJAS 3
 
struct Catalogo { 
    char nome_loja[16];
    char telefone[16];
    float preco_eletrodomestico;
};
 
typedef struct Catalogo Catalogo;
 
int main() {
    int i;
    float sum = 0, avg = 0;
 
    Catalogo lojas[N_LOJAS];
 
    for(i=0; i<N_LOJAS; i++) {
        printf("Digite o nome da loja (%i): ", i);
        gets(lojas[i].nome_loja);
        printf("Digite o telefone da loja (%i): ", i);
        gets(lojas[i].telefone);
        printf("Digite o preço de um dos eletrodomésticos da loja (%i): ", i);
        scanf("%f", &lojas[i].preco_eletrodomestico);
        getchar();
 
        sum += lojas[i].preco_eletrodomestico;
    }
 
    avg = sum / (i+1);
    printf("A média dos preços é: %.2f\n", avg);
 
    for (i=0; i<N_LOJAS; i++) {
        if (lojas[i].preco_eletrodomestico < avg) {
            printf("A loja %s - %s tem preço abaixo da média.\n", lojas[i].nome_loja, lojas[i].telefone);
        }
    } 
 
    return 0;
}