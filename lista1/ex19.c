/*
19. Faça um algoritmo que leia o código de um piloto, uma distância percorrida em km e o tempo
que o piloto levou para percorrê-la (em horas).
O programa deve calcular a velocidade média - Velocidade = Distância / Tempo - em km/h, e exibir
a seguinte frase:
A velocidade média do <código do piloto> foi <velocidade media calculada> km/h. 
*/

#include <stdio.h>

int main() {
    // suponha que o código do piloto seja um número inteiro
    int codigo;
    float distancia_km, tempo_gasto, velocidade_media;
    printf("Digite o código do piloto: ");
    scanf("%d", &codigo);

    printf("Digite a distância percorrida: ");
    scanf("%f", &distancia_km);

    printf("Digite o tempo gasto (em horas): ");
    scanf("%f", &tempo_gasto);

    printf("A velocidade média do piloto %d foi %.2f km/h", codigo, (distancia_km/tempo_gasto));

    return 0;
}