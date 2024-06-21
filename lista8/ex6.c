/*
6) Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna essa
idade expressa em dias.
*/

#include <stdio.h>

// Mês
// (1,3,5,7,8,10,12) = 31
// (4,6,9,11) = 30
// (2) normal = 28
// (2) bisexto = 29
int diasMes(int mes, int ano) {
    if ((mes == 1) || (mes == 3) || (mes == 5) || (mes == 7) ||
        (mes == 8) || (mes == 10) || (mes == 12)) return 31;
    else if ((mes == 4) || (mes == 6) || (mes == 9) || (mes == 11)) return 30;
    else {  // mês 2
        if ((ano % 4) == 0) return 29;
        else return 28;
    }
}

// Ano
// normal = 365
// bisexto = 366
int diasAno(int ano) {
    if ((ano % 4) == 0) return 366;
    else return 365;
}

//2022-06-12 = 737
//2016-06-12 = 2934 / 2928
int idadeEmDias(int ano, int mes, int dia) {
    int a = 2024, m = 6, d = 18;
    int i, total = 0;
    // Ano de nascimento da pessoa
    total = diasMes(mes,ano) - dia;
    for (i = mes+1; i <= 12; i++) total += diasMes(i, ano);
    // Fora do ano de nascimento e fora do ano corrente
    for (i = ano+1; i < a; i++) total += diasAno(i);
    // Ano corrente
    for (i = 1; i < m; i++) total += diasMes(i, a);
    total += d;
    return total;
}


int main() {
    int a, m, d;
    scanf("%i %i %i", &a, &m, &d);
    printf("Total de %i dias!", idadeEmDias(a,m,d));

    return 0;
}
