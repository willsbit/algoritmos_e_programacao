/*
34. João tem 1,50 metros e cresce 2 cm por ano, enquanto Pedro tem 1,10 metros e cresce 3 cm
por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários para que
Pedro seja maior que João.
*/

#include <stdio.h>
 
int main() {
    int ano;
    float altura_joao = 1.50, taxa_crescimento_joao = 0.02;
    float altura_pedro = 1.10, taxa_crescimento_pedro = 0.03;
 
    do {
        altura_joao += taxa_crescimento_joao;
        altura_pedro += taxa_crescimento_pedro;
 
        ano++;
    } while (altura_pedro < altura_joao);
 
    printf("São necessários %d anos para que Pedro seja mais alto que João.", ano);
    return 0;
}