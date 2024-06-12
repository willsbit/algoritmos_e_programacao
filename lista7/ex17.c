/*
17) Escrever um algoritmo para ler 100 profissionais (nome, data de nascimento (dia, mês e ano -
use estruturas aninhadas), idade e altura). Uma vez cadastrados, este algoritmo deverá encontrar
e imprimir os dados do profissional mais idoso, do mais novo, do mais alto e do mais baixo. 
*/

#include <stdio.h>
#include <string.h>
 
#define N_PROFISSIONAIS 3
 
struct DataNascimento {
    int dia;
    int mes;
    int ano;
};
typedef struct DataNascimento DataNascimento;
 
struct Profissional { 
    char nome[64];
    DataNascimento data_nascimento;
    int idade;
    float altura;
};
typedef struct Profissional Profissional;
 
int main() {
    int i, oldest_idx = 0, yougest_idx = 0, tallest_idx = 0, shortest_idx = 0;
    Profissional profissionais[N_PROFISSIONAIS];
 
    for(i=0; i<N_PROFISSIONAIS; i++) {
        printf("Digite o nome do profissional (%i): ", i);
        gets(profissionais[i].nome);
        printf("Digite o dia de nascimento do profissional (%i): ", i);
        scanf("%d", &profissionais[i].data_nascimento.dia);
        printf("Digite o mês de nascimento do profissional (%i): ", i);
        scanf("%d", &profissionais[i].data_nascimento.mes);
        printf("Digite o ano de nascimento do profissional (%i): ", i);
        scanf("%d", &profissionais[i].data_nascimento.ano);
        printf("Digite a idade do profissional (%i): ", i);
        scanf("%d", &profissionais[i].idade);
        printf("Digite a altura do profissional (%i): ", i);
        scanf("%f", &profissionais[i].altura);
        getchar();
 
        if (profissionais[i].idade > profissionais[oldest_idx].idade) {
            oldest_idx = i;
        } else if (profissionais[i].idade < profissionais[yougest_idx].idade) {
            yougest_idx = i;
        }
        if (profissionais[i].altura > profissionais[tallest_idx].altura) {
            tallest_idx = i;
        } else if (profissionais[i].altura < profissionais[shortest_idx].altura) {
            shortest_idx = i;
        }
    }
 
    printf("\nO profissional mais idoso é: %s, com %d anos de idade.\n", profissionais[oldest_idx].nome, profissionais[oldest_idx].idade);
    printf("O profissional mais novo é: %s, com %d anos de idade.\n", profissionais[yougest_idx].nome, profissionais[yougest_idx].idade);
    printf("O profissional mais alto é: %s, com %.2fm de altura.\n", profissionais[tallest_idx].nome, profissionais[tallest_idx].altura);
    printf("O profissional mais baixo é: %s, com %.2fm de altura.\n", profissionais[shortest_idx].nome, profissionais[shortest_idx].altura);
 
    return 0;
}