/*
23. Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por
mês, mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas
por ele efetuadas. Escreva um algoritmo que leia o número de carros por ele vendidos, o valor
total de suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o
salário final do vendedor.
*/

#include <stdio.h>

int main() {
    int carros_vendidos;
    float taxa = 0.05;
    float valor_total_vendas, salario_fixo, comissao_por_carro, salario_final;

    printf("Digite o número de carros vendidos: ");
    scanf("%d", &carros_vendidos);

    printf("Digite o valor total das vendas: ");
    scanf("%f", &valor_total_vendas);

    printf("Digite o salário fixo: ");
    scanf("%f", &salario_fixo);

    printf("Digite a comissão recebida por carro vendido: ");
    scanf("%f", &comissao_por_carro);

    salario_final = salario_fixo + (carros_vendidos * comissao_por_carro) + (valor_total_vendas * taxa);
    printf("O salário final do vendedor é: %f", salario_final);

    return 0;
}