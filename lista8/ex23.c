/*
23) Escrever um algorimo que leia um valor em reais e chame uma função que calcule o menor
número possível de notas de R$100,00, R$50,00, R$20,00, R$10,00, R$5,00, R$2,00 e R$1,00
em que o valor lido pode ser decomposto. Ignore os centavos. O algoritmo deve mostrar, na
função main, o valor lido e a relação de notas necessárias.
*/

#include <stdio.h>
#define N 7

struct Notas {
    int quantidade[N];
    int valores[N];
};

typedef struct Notas Notas;

Notas decompose_into_bills(float x) {
    int i, quantidade, valor = (int) x;

    Notas notas = {
        .quantidade = {0},
        .valores = {100, 50, 20, 10, 5, 2, 1}
    };

    for(i=0; valor != 0; i++) {
        quantidade = valor / notas.valores[i];
        notas.quantidade[i] = quantidade;
        valor -= quantidade * notas.valores[i];
    }

    return notas;
}



int main() {
    int i;
    float x;
    Notas notas_decomposto;

    printf("Digite o valor em reais: ");
    scanf("%f", &x);
    
    notas_decomposto = decompose_into_bills(x);

    printf("Nota|\t|Quantidade|\t\n");
    for (i=0; i<N; i++) {
        printf("%d|\t|%d|\t\n", notas_decomposto.valores[i], notas_decomposto.quantidade[i]);
    }
    
    return 0;
}