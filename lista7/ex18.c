/*
18) Crie uma estrutura para armazenar dados de funcionários: o nome e o ano de ingresso em uma empresa. 
Desenvolver um algoritmo que leio o ano corrente, e os dados de 1000 funcionários. 
Calcule e exiba o nome e o tempo de serviço de cada funcionário cadastrado (em anos) e 
o nome do(s) funcionário(s) mais antigo(s) da empresa
.*/

#include <stdio.h>
#include <string.h>

#define N 1000

struct Funcionario {
    char nome[64];
    int ano_ingresso;
};

typedef struct Funcionario Funcionario;

int main() {
    int i, ano, max_antigo_idx = 0;
    Funcionario funcionarios[N];

    printf("Digite o ano atual: ");
    scanf("%d", &ano);
    getchar(); // limpar buffer de entrada

    for(i=0; i<N; i++) {
        printf("Digite o nome do funcionário (%i): ", i);
        gets(funcionarios[i].nome);

        printf("Digite o ano de ingresso do funcionário (%i): ", i);
        scanf("%d", &funcionarios[i].ano_ingresso);
        getchar(); // limpar buffer de entrada
        
        if (funcionarios[i].ano_ingresso < funcionarios[max_antigo_idx].ano_ingresso) {
            max_antigo_idx = i;
        }
    }

    printf("Lista de funcionários:\n");
    printf("|%10s\t|tempo\t|\n", "nome");
    for(i=0; i<N; i++) {
        printf("|%10s\t|%d\t|\n", funcionarios[i].nome, 22);
    }

    printf("\nOs funcionários mais antigos estão na empresa há %d anos. São eles:\n", ano - funcionarios[max_antigo_idx].ano_ingresso);
    for(i=0; i<N; i++) {
        if (funcionarios[i].ano_ingresso == funcionarios[max_antigo_idx].ano_ingresso) {
            printf("%s\n", funcionarios[i].nome);
        }
    }

    return 0;
}