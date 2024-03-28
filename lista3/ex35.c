/*
35. Em uma eleição presidencial existem quatro candidatos. Os votos são informados por meio de
código. Os códigos utilizados são:
Escreva um algoritmo que calcule e mostre: − o total de votos para cada candidato; − o total de votos nulos; − o total de votos em branco; − a porcentagem de votos nulos sobre o total de votos; − a porcentagem de votos em branco sobre o total de votos.
1, 2, 3, 4 Valores para os respectivos candidatos
5 Voto nulo
6 Voto em branco
Para finalizar o conjunto de votos, tem-se o valor zero e, para códigos inválidos, o programa
deverá mostrar uma mensagem
*/
#include <stdio.h>

int main() {
    int voto, total_voto = 0, total_voto1 = 0, total_voto2 = 0, total_voto3 = 0, total_voto4 = 0, total_nulo = 0, total_branco = 0;
 
    while(1) {
        printf("Digite o número do candidato, 5 (nulo) ou 6 (branco): ");
        scanf("%d", &voto);
 
        if (voto == 0) {
            break;
        } else if (voto < 0 || voto > 6) {
            printf("Opção inválida! Tente novamente.\n");
            continue;
        }
 
        total_voto++;
 
        switch (voto) {
            case 1:
                total_voto1++;
                break;
            case 2:
                total_voto2++;
                break;
            case 3:
                total_voto3++;
                break;
            case 4:
                total_voto4++;
                break;
            case 5:
                total_nulo++;
                break;
            case 6:
                total_branco++;
                break;
        }
    }
 
    printf("Total de votos do candidato 1: %d\n", total_voto1);
    printf("Total de votos do candidato 2: %d\n", total_voto2);
    printf("Total de votos do candidato 3: %d\n", total_voto3);
    printf("Total de votos do candidato 4: %d\n", total_voto4);
    printf("Porcentagem de votos nulos: %.2f%%\n", ((float)100*total_nulo / total_voto));
    printf("Porcentagem de votos brancos: %.2f%%\n", ((float)100*total_branco / total_voto));
 
    return 0;
}