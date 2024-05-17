#include <stdlib.h> 
#include <stdio.h>
#include <string.h>

/*
2) Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne
o ponteiro para um vetor de tamanho N alocado dinamicamente. Se N for negativo ou
igual a zero, um ponteiro nulo deverá ser retornado.
*/

int *Retornavalor(int N){
    if(N <= 0){
        return NULL;
    }

    int *vetor = (int*)  malloc(N * sizeof(int));
    if(vetor == NULL){
        perror("Erro ao alocar memória!\n");
        exit(1);
    }

    return vetor;
}


int main(){

    int N;

    printf("Digite um valor inteiro: ");
    scanf("%i", &N);

    int *vetor = Retornavalor(N);

    if (vetor == NULL) {
        printf("Tamanho inválido do vetor.\n");
    } else {
        printf("Vetor alocado com sucesso.\n");
        free(vetor);
    } 

    return 0;
}