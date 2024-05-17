#include <stdlib.h> 
#include <stdio.h>
#include <string.h>

/*
Faça um programa que receba valores enquanto forem positivos.


Para isso, inicialmente, aloque dinamicamente um vetor de 5 números inteiros.

A cada vez que preencher as posições disponíveis, realoque o vetor aumentando o seu tamanho em 5 posições.

Ao receber um valor negativo, pare de solicitar novos valores e realoque o vetor para o tamanho exato da quantidade de elementos válidos digitados.


Ao finalizar, exiba os valores recebidos e Libere a memória alocada.
*/

int main(){

    int *vetor = (int*) malloc (5 * sizeof(int));
    if(vetor == NULL){
        perror("Erro ao alocar memória!\n");
        exit(1);
    }
    int tamanho = sizeof(vetor) + 1;
    int i = 0;
    int valor;

    do{
        printf("Digite o %i elemento: ", i+1);
        scanf("%i", &valor);
        if(valor >= 0){
            vetor[i] = valor;
            i++;
        }if(i == tamanho){
            tamanho = tamanho + 5;
            vetor = (int*) realloc(vetor, tamanho * sizeof(int));
            printf("Tamanho realocado para %i!\n", tamanho);
            if(vetor == NULL){
                perror("Erro ao alocar memória!\n");
                exit(1);
            }
        }
    } while(valor >= 0);

    vetor = (int*) realloc(vetor, i * sizeof(int)); //REALOCANDO PARA PREENCHIDOS;

    printf("Valores recebidos:\n");
    for(int j = 0; j < i; j++){
        printf("%i: %i\n", j+1, vetor[j]);
    }

    free(vetor);

    return 0;

}