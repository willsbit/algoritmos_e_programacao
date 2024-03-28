/*
32. Faça um algoritmo que leia um conjunto de informações (identificador, sexo (0 – masculino, 1
– feminino), idade, peso e altura) dos atletas que participaram de uma olimpíada, e informar: − O atleta do sexo masculino mais alto; − A atleta do sexo feminino mais pesada; − A média de idade dos atletas.
Deverão ser lidos dados dos atletas até que seja digitado o identificador -1 para um atleta.
* OBSERVAÇÃO: PESQUISE SOBRE TIPO DE DADOS char NA LINGUAGEM C. COM ELE, É
POSSÍVEL MODIFICAR O EXERCÍCIO, LENDO ‘M’ PARA SEXO MASCULINO E ‘F’ PARA SEXO
FEMININO. 
*/

#include <stdio.h>
 
int main() {
    char sexo;
    int idade, count = 0;
    float peso, altura, masc_maior_altura = 0, fem_maior_peso = 0, sum_idade = 0;
 
    while(1) {
        printf("Digite o sexo do atleta (M ou F, Q para sair): ");
        scanf("%s", &sexo);
 
        if (sexo == 'Q') {
            break;
        }
 
        printf("Digite o a idade do atleta: ");
        scanf("%d", &idade);
 
        printf("Digite o peso do atleta: ");
        scanf("%f", &peso);
    
        printf("Digite a altura do atleta: ");
        scanf("%f", &altura);
 
        if (sexo == 'M' && (masc_maior_altura == 0 || altura > masc_maior_altura)) {
            masc_maior_altura = altura;
        } else if (sexo == 'F' && (fem_maior_peso == 0 || peso > fem_maior_peso)) {
            fem_maior_peso = peso;
        }
        
        sum_idade += idade;
        count++;
    }
 
    printf("O atleta do sexo masculino mais alto tem %.2fm de altura\n", masc_maior_altura);
    printf("A atleta do sexo feminino mais pesada tem %.2fkg\n", fem_maior_peso);
    printf("A média de idade dos atletas é %.2f anos\n", (sum_idade/count));
 
 
    return 0;
}