#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
3) Crie um programa que contenha uma matriz (3x3) de float. Imprima o
endereço de cada posição dessa matriz.
*/

int main(){
    int matriz[3][3];
    int contador = 1;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matriz[i][j] = contador;// m+(i*3)+j
            printf("%i ", matriz[i][j]);
            contador ++;
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%i | %p\n", matriz[i][j], &matriz[i][j]);
        }
    }

    return 0;

}