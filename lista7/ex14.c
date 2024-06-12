/*
14) Crie uma estrutura chamada Cadastro que tenha os campo Nome, Ender, Telefone e Idade,
onde Ender é do tipo Endereco conforme o exercício anterior. Declare uma variável DadosAluno
como sendo do tipo Cadastro.
*/

#include <stdio.h>
 
struct Endereco { 
    char rua[64];
    int numero;
    char bairro[64];
};
typedef struct Endereco Endereco;
 
struct Cadastro { 
    char nome[64];
    Endereco endereco;
    char telefone[20];
    int idade;
};
typedef struct Cadastro Cadastro;
 
 
int main() {
    
    Cadastro dados_aluno = {
        .nome = "Fulano",
        .endereco = {
            .rua = "Faixa velha",
            .numero = 202,
            .bairro = "Camobi"
        },
        .telefone = "(55)1234568",
        .idade = 25
    };
 
 
    printf("Nome: %s, Rua: %s, Idade: %d\n", dados_aluno.nome, dados_aluno.endereco.rua, dados_aluno.idade);
 
 
 
    return 0;
}