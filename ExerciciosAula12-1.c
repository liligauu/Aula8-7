#include <stdlib.h>
#include <stdio.h>

/*
1) Crie uma matriz identidade com dimensões 5 x 5;
*/

int main(){

int matriz[5][5], i, j;
int contador = 0;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            matriz[i][j] = contador;
        if(i == j){
            matriz[i][j] = 1;
        }
        }
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%i ", matriz[i][j]);
        }
            printf("\n");
    }
    

    return 0;

}