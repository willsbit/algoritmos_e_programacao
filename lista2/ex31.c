/*
31. O departamento que controla o índice de poluição do meio ambiente mantém três grupos de
indústrias que são altamente poluentes do meio ambiente. O índice de poluição aceitável varia
entre 0.05 até 0.25. Se o índice sobe para 0.3 as indústrias do primeiro grupo são intimadas a
suspenderem suas atividades, se o índice cresce para 0.4 as do primeiro e segundo grupo são
intimadas a suspenderem suas atividades e se o índice atingir 0.5 todos os três grupos devem ser
notificados a paralisarem suas atividades. Escrever um algoritmo que lê o índice de poluição
medido e emite a notificação adequada aos diferentes grupos de empresas.
*/

#include <stdio.h>

int main() {
    float indice_poluicao;

    printf("Informe o índice de poluição medido: ");
    scanf("%f", &indice_poluicao);

    if (indice_poluicao > 0.05 && indice_poluicao < 0.25) {
        printf("Índice de poluição aceitavel\n");
    } else if (indice_poluicao >= 0.3 && indice_poluicao < 0.4 ) {
        printf("Intimação emitida para as empresas do grupo 1!\n");
    } else if (indice_poluicao >= 0.4 && indice_poluicao < 0.5) {
        printf("Intimação emitida para as empresas do grupo 1 e do grupo 2!\n");
    } else if (indice_poluicao >= 0.5) {
        printf("Intimação emitida para as empresas de todos os grupos!\n");
    } else {
        printf("Índice não tabelado. Nenhuma intimação foi emitida\n");
    }

}
