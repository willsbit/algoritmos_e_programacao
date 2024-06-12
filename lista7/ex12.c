/*
12) Faça um algoritmo que, utilizando registros, leia o nome e data de nascimento (dia mês ano)
de n pessoas, calcule e mostre a idade de cada pessoa e o nome da pessoa mais velha. Suponha
que não temos duas (ou mais) pessoas com a mesma idade.
*/

#include <stdio.h>
#include <time.h>
 
#define N_PESSOAS 3
 
struct Pessoa { 
    char nome[32];
    int dia;
    int mes;
    int ano;
};
 
typedef struct Pessoa Pessoa;
 
int main() {
    int i;
    int ano_atual, mes_atual, dia_atual;
    int delta_anos, delta_meses, delta_dias, idade, max_idade = 0, idade_max_idx = 0;
    Pessoa pessoas[N_PESSOAS];
 
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    
    ano_atual = tm.tm_year + 1900;
    mes_atual = tm.tm_mon + 1;
    dia_atual = tm.tm_mday;
 
    for(i=0; i<N_PESSOAS; i++) {
        printf("Digite o nome da pessoa (%i): ", i);
        gets(pessoas[i].nome);
        printf("Digite o dia de nascimento da pessoa (%i): ", i);
        scanf("%d", &pessoas[i].dia);
        printf("Digite o mês de nascimento da pessoa (%i): ", i);
        scanf("%d", &pessoas[i].mes);
        printf("Digite o ano de nascimento da pessoa (%i): ", i);
        scanf("%d", &pessoas[i].ano);
        getchar();
 
        delta_anos = ano_atual - pessoas[i].ano;
        delta_meses = mes_atual - pessoas[i].mes;
        delta_dias = dia_atual - pessoas[i].dia;
 
        idade = ((delta_anos*365) + (delta_meses*31) + delta_dias)/365;
 
        printf("A idade da pessoa %s tem %d anos.\n", pessoas[i].nome, idade);
        if (idade > max_idade) {
            max_idade = idade;
            idade_max_idx = i;
        }
    }
 
 
    printf("A pessoa mais velha é %s.\n", pessoas[idade_max_idx].nome);
}
 