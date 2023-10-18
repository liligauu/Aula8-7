#include <stdlib.h>
#include <stdio.h>

/*
1) Faça um programa que leia e armazene dois vetores de
tamanho 5. Ao final o programa deve calcular e exibir o vetor
soma;
*/

int main(){

int vetorA[5], vetorB[5], i, soma[5];

    for(i = 0; i < 5; i++){
        printf("Digite o %iº valor do vetor A!\n", i+1);
        scanf("%d", &vetorA[i]);
    }for(i = 0; i < 5; i++){
        printf("Digite o %iº valor do vetor B!\n", i+1);
        scanf("%d", &vetorB[i]);
    }
    printf("Vetor Resultado = (");
    for(i = 0; i < 5; i++){
        soma[i] = vetorA[i] + vetorB[i];
        printf("%i,", soma[i]);
    }
    printf(")");
    

    return 0;

}