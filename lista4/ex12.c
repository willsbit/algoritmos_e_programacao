/*
12) O curso de Informática deseja saber se existem alunos cursando, simultaneamente, as
disciplinas de Lógica e Algoritmos e de Laboratório de Programação I. Coloque os números das
matriculas dos alunos que cursam Lógica e Algoritmos em um vetor, no máximo 15 alunos.
Coloque os números das matriculas dos alunos que cursam Laboratório de Programação I em
outro vetor, no máximo 10 alunos. Mostre o número da matricula que aparece nos dois vetores
*/

#include <stdio.h>
#define SIZE_ALGS 5
#define SIZE_LAB 3

int main () {
    int i, j, k, matriculas_algoritmos[SIZE_ALGS], matriculas_laboratorio[SIZE_LAB], matriculas_ambos[SIZE_LAB];

    for (i=0; i<SIZE_ALGS; i++) {
        printf("Digite a matrícula do %dº aluno de Lógica e Algoritmos: ", i+1);
        scanf("%d", &matriculas_algoritmos[i]);
    }

    for (i=0; i<SIZE_LAB; i++) {
        printf("Digite a matrícula do %dº aluno de Laboratório de Programação I: ", i+1);
        scanf("%d", &matriculas_laboratorio[i]);
    }

    for (i=0, k=0; i<SIZE_ALGS; i++) {
        for(j=0; j<SIZE_LAB; j++) {
            if (matriculas_algoritmos[i] == matriculas_laboratorio[j]) {
                matriculas_ambos[k] = matriculas_algoritmos[i];
                k++;
                break;
            }
        }
    }
    
    if (k > 0) {
        printf("Os seguintes alunos cursam ambas as disciplinas: ");
        for (i=0; i<k; i++) {
            if (i + 1 != k) {
                printf("%d, ", matriculas_ambos[i]);
            } else {
                printf("%d\n", matriculas_ambos[i]);
            }
        }
    } else {
        printf("Não há alunos em comum nessas disciplinas.\n");
    }

    return 0;
}


