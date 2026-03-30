#include <stdio.h>
#include <stdlib.h>

int main(){
    //Ler quantidade de livros
    int N;
    scanf("%d", &N);
    // Ler os identificadores
    int v[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &v[i]);
    }
    // Verificar quais não possuem cópia
    for(int i =0; i<N; i++){
        int cont = 0;
        for(int j=0; j<N; j++){
            if(v[i]==v[j]){
                cont++;
            }
        }
        if(cont==1){
            printf("%d ", v[i]);
        }
    }
    printf("\n");
    return 0;
}