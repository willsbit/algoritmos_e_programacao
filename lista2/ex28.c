/*
28. Ler a hora de início e a hora de fim de um jogo de Xadrez (considere apenas horas inteiras,
sem os minutos) e calcule a duração do jogo em horas, sabendo-se que o tempo máximo de
duração do jogo é de 24 horas e que o jogo pode iniciar em um dia e terminar no dia seguinte.
*/
#include <stdio.h>

int main() {
    int hora_inicio, hora_fim, duracao;
    printf("Hora de início: ");
    scanf("%i", &hora_inicio);
    printf("Hora fim: ");
    scanf("%i", &hora_fim);

    // supondo que a partida dura no máximo 24 horas, e que se hora fim == hora inicio, entao a partida durou 24h
    if (hora_fim <= hora_inicio) {
        duracao = (24 - hora_inicio) + hora_fim;
    } else {
        duracao = hora_fim - hora_inicio;
    }

    printf("Duração da partida: %i horas \n", duracao);
    return 0;
}