#include <stdlib.h>
#include <stdio.h>

/*
5)Dado dois vetores, A (4 elementos) e B (5 elementos), faça
um programa em C que imprima todos os elementos comuns
aos dois vetores.
*/

int main(){

int i;
int vetorA[] = {1,2,3,7};
int vetorB[] = {1,5,3,7,9};


    for(i = 0; i < 6; i++){ 
        if(vetorA[i] == vetorB[i]){
            printf("Valor A (%i) = Valor B (%i)\n", vetorA[i],vetorB[i]);
        }
    }

}
