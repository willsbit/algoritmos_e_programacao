/*
16) Definir uma estrutura para armazenar uma coleção de CDs. Os campos (membros) dessa
estrutura devem conter: nome do CD, Nome da banda (ou cantor/cantora) e gênero da música (Rrock, P-popular, C-clássica e O-outras). Desenvolver um algoritmo que permita ao usuário
escolher um gênero de música e visualizar na tela todos os CDs do gênero escolhido
armazenados na estrutura. O tamanho da estrutura poderá ser definido pelo programador.
*/

#include <stdio.h>
#include <string.h>
 
#define TAMANHO_COLECAO 3
 
struct Colecao { 
    char nome_cd[64];
    char nome_banda[64];
    char genero; // R=rock P=popular, C=classica, O=outros
};
typedef struct Colecao Colecao;
 
int main() {
    int i;
    char genero;
    Colecao colecao[TAMANHO_COLECAO];
 
    for(i=0; i<TAMANHO_COLECAO; i++) {
        printf("Digite o nome do CD (%i): ", i);
        gets(colecao[i].nome_cd);
        printf("Digite o nome da banda (%i): ", i);
        gets(colecao[i].nome_banda);
        printf("Digite o gênero (%i): ", i);
        colecao[i].genero = getchar();
        getchar();
    }
 
    printf("Digite o gênero para buscar: ");
    genero = getchar();
 
    for(i=0; i<TAMANHO_COLECAO; i++) {
        if (colecao[i].genero == genero) {
            printf("%s - %s\n", colecao[i].nome_banda, colecao[i].nome_cd);
        }
    }
    return 0;
}
 