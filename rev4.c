#include <stdio.h>
#include <stdlib.h>

int main(){
    // Ler um numero inteiro
    int N;
    int octal =0;
    int base =1;
    int resto;
    scanf("%d", &N);
    //
    while(N>0){
        resto = N%8;
        octal = octal + (resto * base);
        N = N/8;
        base = base * 10;
    }
    printf("%d\n", octal);
    return 0;
}