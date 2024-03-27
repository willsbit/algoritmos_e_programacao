/*
16. Criar um algoritmo que leia idade e sexo (0-masculino, 1-feminino) de várias pessoas. Calcule
e imprima a idade média, o total de pessoas do sexo feminino com idade entre 30-45 inclusive e o
número total de pessoas do sexo masculino. O algoritmo termina quando se digita um número não
positivo (0 ou um número negativo) para a idade.
*/

#include <stdio.h>

int main() {
 
    int sex, age, total_age, counter;
    int men_counter = 0;
    int women_between_30_and_45_counter = 0;
    float avg_age;
 
    counter = 1;
    total_age = 0;
    while(1) {
        printf("Digite o sexo (0: masculino, 1: feminino): ");
        scanf("%d", &sex);        
        printf("Digite a idade da pessoa: ");
        scanf("%d", &age);
 
        if(age <= 0) {
            break;
        };
 
        if (sex == 0) {
            men_counter++;
        } else if (sex == 1 && age >= 30 && age <= 45) {
            women_between_30_and_45_counter++;
        }
 
 
        total_age += age;
        avg_age = (total_age / counter);
 
        printf("Idade média: %.2f\n", avg_age);
        printf("Número total de pessoas do sexo masculino: %d\n", men_counter);
        printf("Número total de pessoas do sexo feminino, entre 30 e 45 anos (inclusivo): %d\n\n", women_between_30_and_45_counter);
 
        counter++;
    }
    return 0;
}