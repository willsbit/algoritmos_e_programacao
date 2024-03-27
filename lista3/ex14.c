/*
14. Uma companhia de teatro deseja dar uma série de espetáculos. A direção calcula que a R$
5,00 o ingresso, serão vendido 120 ingressos, e que as despesas serão de R$200,00.
Diminuindo-se R$0,50 o preço dos ingressos, e que as vendas aumentem em 26 ingressos.
Faça um algoritmo que escreva uma tabela de valores de lucros esperados em função do preço
do ingresso, fazendo-se variar este preço de R$5,00 a R$1,00 de R$0,50 em R$0,50. Escreva, 
ainda, o lucro máximo esperado, o preço do ingresso e a quantidade de ingressos vendidos para
a obtenção desse lucro.
*/

#include <stdio.h>

int main() {
    float ticket_price, ticket_sales, profit;
    float expenses = 200;
    int counter = 0;
 
    printf("|Preço ingresso\t|Ingressos vendidos\t|Lucro esperado\t|\n");
    
    for(ticket_price=5; ticket_price>=1; ticket_price -= 0.5) {
        ticket_sales = 120 + (26 * counter);
        profit = (ticket_sales * ticket_price) - expenses;
 
        printf("|%.2f\t\t|%.0f\t\t\t|%.2f\t|\n", ticket_price, ticket_sales, profit);
        counter++;
    }
 
    return 0;
}