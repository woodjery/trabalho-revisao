#include <stdio.h>
#include <stdlib.h>

int main(){
    int contador = 1;
    int numero =5; 
    for (int i = 1; i <= numero; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", contador);
            contador++; 
        }
        printf("\n");
    }

    return 0;
}