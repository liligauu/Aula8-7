/**
 * @file ExerciciosAula14-1.c
 * @author Leonardo Tanamura (leotanamura@icloud.com)
 * @brief Exercicio 1 Aula 14
 * @date 2023-10-31
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 1) Faça um algoritmo que implemente uma função que receba 3 números
inteiros e retorne o maior valor;
*/

int maioridade(int vetor[]){
    
    int maioridade = vetor[0];

    for(int i = 0; i < 3; i++){
        if(vetor[i] > maioridade){
            maioridade = vetor[i];
        }
    }
    
    return maioridade;
}

int main(){

    int meuVetor[3];

    for(int i = 0; i < 3; i++){
        printf("Digite a %i idade\n", i+1);
            scanf("%i", &meuVetor[i]);
    }
    
    printf("%i\n", maioridade(meuVetor));

    return 0;

}
