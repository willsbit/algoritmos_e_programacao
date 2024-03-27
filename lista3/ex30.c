/*
30. Considere uma linha ferroviária entre São Paulo e Curitiba. Suponha que uma locomotiva
(trem) A parte de São Paulo para Curitiba com velocidade de 30 m/s enquanto que uma outra
locomotiva B parte de Curitiba para São Paulo no mesmo instante com velocidade de 40 m/s.
Considere a distância entre São Paulo e Curitiba de 400 Km. Escreva um algoritmo que calcule
iterativamente o tempo necessário para os maquinistas pararem as locomotivas antes que uma
colisão aconteça. O algoritmo deve calcular também a distância que as locomotivas devem
percorrer para que a colisão aconteça. 
*/

#include <stdio.h>

int main() {
    float speed_train_a = 30, speed_train_b = 40, distance = 400*1000, position_a, position_b, time_minutes = 0;
    float distance_to_colision, time_to_colision;
    while(1) {

        position_a = speed_train_a * (time_minutes * 60);
        position_b = distance - (speed_train_b * time_minutes * 60);

        distance_to_colision = position_b - position_a;
        time_to_colision = (distance_to_colision / (speed_train_a + speed_train_b));

        if (distance_to_colision <= 0) {
            break;
        }

        printf("Tempo para colisão: %.2f min\n", (time_to_colision/60));
        printf("Distância para colisão: %.2f km\n\n", (distance_to_colision/1000));

        time_minutes = time_minutes + 5;

    }

}