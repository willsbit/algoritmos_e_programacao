/*
29. A jornada de trabalho semanal de um funcionário é de 40 horas. O funcionário que trabalhar
mais de 40 horas receberá hora extra, cujo cálculo é o valor da hora regular com um acréscimo de
50%. Escreva um algoritmo que leia o número de horas trabalhadas em um mês, o salário por
hora e escreva o salário total do funcionário, que deverá ser acrescido das horas extras, caso
tenham sido trabalhadas (considere que o mês possua 4 semanas exatas).
*/
#include <stdio.h>

int main() {
    int horas_mes_padrao = 40 * 4;
    float horas_trabalhadas_mes, horas_extras, salario_por_hora, salario_total;
    printf("Horas trabalhadas no mês: ");
    scanf("%f", &horas_trabalhadas_mes);
    printf("Salário por hora do funcionário: ");
    scanf("%f", &salario_por_hora);


    if (horas_trabalhadas_mes > horas_mes_padrao) {
        horas_extras = horas_trabalhadas_mes - horas_mes_padrao;
        salario_total = (salario_por_hora * horas_mes_padrao) + ((salario_por_hora * 1.5) * horas_extras);
    } else {
        salario_total = (salario_por_hora * horas_trabalhadas_mes);
    }

    printf("O salário final do funcionário é: R$%.2f \n", salario_total);
    return 0;
}