#include <stdio.h>
#include <stdlib.h>

int main(){
    // Variáveis para o contador e o número de linhas
    int contador = 1;
    int numero ; 
    //Solicitar ao usuário o número de linhas para a pirâmide
    scanf("%d", &numero);
    //Gerar a pirâmide de números
    for (int i = 1; i <= numero; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", contador);
            contador++; 
        }
        printf("\n");
    }
    //Finalizar o programa
    return 0;
}