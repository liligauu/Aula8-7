#include <stdlib.h>
#include <stdio.h>

/*
2) Crie um algoritmo que receba 10 números e os armazene em
um vetor A. Em seguida, gere o vetor B onde cada elemento é o
quadrado do valor da mesma posição no vetor A
*/

int main(){

int vetorA[10], vetorB[10], i;

    for(i = 0; i < 10; i++){
        printf("Digite o %iº valor. (%i Restantes)", i+1, 9-i);
        scanf("%d", &vetorA[i]);
        for(int j = 0; j < 10; j++){
            vetorB[i] = vetorA[i] * vetorA[i]; 
        }
    } 
    
    for(i = 0; i < 10; i++){
        printf("Quadrado do Vetor[A] %i = (%i)\n", vetorA[i], vetorB[i]);
    }

    return 0;

}
