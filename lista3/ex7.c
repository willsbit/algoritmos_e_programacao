/*
7. Escreva uma Programa que receba a idade de 10 pessoas, calcule e imprima a quantidade de
pessoas maiores de idade (idade >= 18 anos). 
*/

#include <stdio.h>

int main() {
    int i = 0;
    int age, sum, over18_counter;
 
    over18_counter = 0;
    while(i < 10) {
        printf("Digite a idade: ");
        scanf("%d", &age);
 
        if (age >= 18) {
            over18_counter++;
        }
 
        i += 1;
 
    }
    printf("A quantidade de pessoas acima de 18 anos é: %d", over18_counter);
    return 0;
}