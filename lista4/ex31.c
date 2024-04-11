/*
31) Uma locadora de vídeos tem guardada, em um vetor de 50 posições, a quantidade de filmes
retirados por seus clientes durante o ano de 2010. Agora, esta locadora está fazendo uma
promoção e, para cada 10 filmes retirados, o cliente tem direito a uma locação grátis. Faça um
algoritmo que crie um outro vetor contendo a quantidade de locações gratuitas a que cada cliente
tem direito.
*/

#include <stdio.h>
#define VEC_SIZE 50

int main() {
    int i, v[VEC_SIZE], locacoes_gratis[VEC_SIZE];
    
    // suponha que o índice do vetor identifica o cliente
    for(i=0; i<VEC_SIZE; i++) {
        printf("Digite o número de filmes alugados pelo cliente 2010-%d: ", i);
        scanf("%d", &v[i]);

        locacoes_gratis[i] = v[i] / 10;
    }
    printf("\n");

    for(i=0; i<VEC_SIZE; i++) {
        printf("O cliente 2010-%d tem direito a %d locações grátis.\n", i, locacoes_gratis[i]);
    }
}