/*
25. Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual calcule e
mostre:
a) A idade dessa pessoa em anos;
b) A idade dessa pessoa em meses;
c) A idade dessa pessoa em dias; 
d) A idade dessa pessoa em semanas.
* POR SIMPLIFICAÇÃO, CONSIDERAR QUE O MÊS TEM 30 DIAS.
*/

#include <stdio.h>

int main() {
    int ano_nascimento, ano_atual;
    int dias_por_mes = 30;
    int meses_por_ano = 12;
    int semanas_por_mes = dias_por_mes / 7;

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    // ignora o dia e mês do nascimento, anos bissextos, meses com número diferente de dias e semanas
    printf("Sua idade em anos é: %d \n", ano_atual - ano_nascimento);
    printf("Sua idade em meses é: %d \n", (ano_atual - ano_nascimento) * meses_por_ano);
    printf("Sua idade em dias é: %d \n", (ano_atual - ano_nascimento) * meses_por_ano * dias_por_mes);
    printf("Sua idade em semanas é: %d \n", (ano_atual - ano_nascimento) * meses_por_ano * semanas_por_mes);

    return 0;
}