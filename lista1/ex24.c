/*
24. O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de
lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Faça um algoritmo que receba
o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos.
Calcule e mostre:
a) O valor correspondente ao lucro do distribuidor;
b) O valor correspondente aos impostos;
c) O preço final do veículo.
*/
#include <stdio.h>

int main() {
    float preco_fabrica, pct_lucro, pct_imposto;

    printf("Digite o preço de fábrica do carro: ");
    scanf("%f", &preco_fabrica);

    printf("Digite o percentual de lucro do distribuidor: ");
    scanf("%f", &pct_lucro);
    pct_lucro = pct_lucro / 100;

    printf("Digite o percentual de impostos: ");
    scanf("%f", &pct_imposto);
    pct_imposto = pct_imposto / 100;

    printf("O lucro do distribuidor é: %.2f \n", preco_fabrica * pct_lucro);
    printf("O valor dos impostos é: %.2f \n", preco_fabrica * pct_imposto);
    printf("O preço final do veículo é: %.2f \n", preco_fabrica * (1 + pct_lucro + pct_imposto));


    return 0;
}