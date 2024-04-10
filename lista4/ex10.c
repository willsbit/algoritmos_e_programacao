/*
10) Faça um algoritmo que receba o código de cinco produtos e seus respectivos preços, calcule
e mostre:
− a quantidade produtos com preço inferior a R$50,00
− o código dos produtos com preço entre R$50,00 e R$100,00
− a média dos preços dos produtos com preço superior a R$100,00
Dica: Use um vetor de inteiros para armazenar os códigos dos produtos, e outro vetor de reais
para armazenar os preços. O código e o preço de um mesmo produto devem ocupar posições 
correspondentes nos dois vetores.
*/

#include <stdio.h>
#define VEC_SIZE 5

int main() {
    float precos[VEC_SIZE], sum_maior_100 = 0;
    int i, j, codigos[VEC_SIZE], codigos_entre_50_100[VEC_SIZE], count_menor_50 = 0, count_maior_100 = 0;

    for (i=0, j=0; i<VEC_SIZE; i++) {
        printf("Digite o código do %dº produto: ", i+1);
        scanf("%d", &codigos[i]);

        printf("Digite o preço do %dº produto: ", i+1);
        scanf("%f", &precos[i]);

        if (precos[i] < 50) {
            count_menor_50++;
        } else if (precos[i] >= 50 && precos[i] <= 100) { 
            codigos_entre_50_100[j] = codigos[i];
            j++;
        } else {
            count_maior_100++;
            sum_maior_100 += precos[i];
        }
    }

    
    printf("%d produtos tem preço inferior a R$50\n", count_menor_50);
    printf("Os códigos dos produtos com preço entre R$50 e R$100 são: ");
    for(j=0; j<(i-count_menor_50-count_maior_100); j++) {
        if (j + 1 != (i-count_menor_50-count_maior_100)) {
            printf("%d, ", codigos_entre_50_100[j]);
        } else {
            printf("%d\n", codigos_entre_50_100[j]);
        }
    }

    if (count_maior_100 > 0) {
        printf("A média dos preços superiores a R$100 é R$%.2f\n", sum_maior_100 / count_maior_100);
    } else {
        printf("Não há preços superiores a R$100\n");
    }
    


    return 0;
}