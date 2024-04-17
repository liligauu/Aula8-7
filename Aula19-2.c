#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
2) Crie um programa que contenha um vetor float (tamanho 10). Imprima o
endereço de cada posição desse vetor.
*/

int main(){
    float vetor[10] = {1.35, 1.45, 1.55, 1.65, 1.75, 1.85, 1.95, 2.05, 2.15, 2.25};
    float *end[10];

    for(int i = 0; i < 10; i++){
        end[i] = &vetor[i];
        printf("%.2f | %p \n", vetor[i], end[i]);
    }

    return 0;
}