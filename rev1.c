#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    // Variáveis para o alvo e o tiro
    float cx, cy, r1;
    float dx, dy, r2;
    // Solicitar ao usuário as coordenadas e os raios do alvo e do tiro
    printf("Digite As coordenadas X e Y do alvo e seu raio R\n");
    scanf("%f %f %f", &cx, &cy, &r1);
    printf("Digite as coordenadas e o raio do disparo.TIRO\n");
    scanf("%f %f %f", &dx, &dy, &r2);
    //Calcular a somma dos raios
    float somaRaios = r1 + r2;
    // Calcular a distância entre o centro do alvo e o centro do tiro
    float distancia = sqrt(pow(dx - cx, 2) + pow(dy - cy, 2));
    // Verificar se o tiro atinge o alvo
    if (distancia <= somaRaios) {
        printf("ACERTOU\n");
    } else {
        printf("ERROU\n");
    }
    return 0;

}