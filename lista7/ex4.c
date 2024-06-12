/*
4) Defina uma struct chamada ponto2d que tenha como atributos os pontos x, y. Crie duas
estruturas do tipo ponto2d chamadas ponto_inicial e ponto_final.
Leia os valores, calcule a distância e mostre o resultado.
DICA: Distância entre dois pontos (x1,y1)(x2,y2): raiz quadrada sqrt( (x1-x2)²+(y1-y2)²)
*/

#include <stdio.h>
#include <math.h>
 
struct Point2D { 
    int x;
    int y;
};
 
typedef struct Point2D Point2D;
 
int main() {
    float distance;
 
    Point2D p1 = {
        .x = 1,
        .y = 1
    };
 
    Point2D p2 = {
        .x = 0,
        .y = 0
    };
 
    distance = sqrt((float)pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
 
    printf("A distância entre os pontos (%d, %d) e (%d, %d) é %.2f.\n", p1.x, p1.y, p2.x, p2.y, distance);
 
}