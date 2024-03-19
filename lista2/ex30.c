/*
30. Um posto está vendendo combustíveis com a seguinte tabela de descontos:
Álcool

até 20 litros, desconto de 3% por litro
acima de 20 litros, desconto de 5% por litro

Gasolina
até 20 litros, desconto de 4% por litro
acima de 20 litros, desconto de 6% por litro

Escreva um um algoritmo que leia o número de litros vendidos e o tipo de combustível (codificado
da seguinte forma: 1 - álcool, 2 - gasolina), calcule e imprima o valor a ser pago pelo cliente
sabendo-se que o preço do litro da gasolina é R$ 2,90 e o preço do litro do álcool é R$ 2,70.
*/
#include <stdio.h>

int main() {
    // 1- álcool; 2 - gasolina
    int alcool_ou_gasolina;
    float litros, desconto, preco_final;
    float preco_gasolina = 2.90;
    float preco_alcool = 2.70;

    printf("Álcool (1) ou gasolina (2): ");
    scanf("%i", &alcool_ou_gasolina);

    printf("Quantidade de litros abastecidos: ");
    scanf("%f", &litros);

    switch (alcool_ou_gasolina) {
        case 1:
            printf("Escolhido --- Álcool \n");
            if (litros <= 20) {
                preco_final = litros * (preco_alcool*0.97);
            } else {
                preco_final = litros * (preco_alcool*0.95);
            }
            break;
        case 2:
            printf("Escolhido --- Gasolina \n");
            if (litros <= 20) {
                preco_final = litros * (preco_gasolina*0.96);
            } else {
                preco_final = litros * (preco_gasolina*0.94);
            }
    }

    printf("O preço final é R$%.2f", preco_final);
}