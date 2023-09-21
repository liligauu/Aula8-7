/**
 * @file ExerciciosAula9-2.c
 * @author Leonardo Tanamura ()
 * @brief Exercicios Aula 9.2
 * @date 2023-09-21
 * 
 **/

/*
Faça um programa que receba valores enquanto eles estiverem no
intervalo de 500 a 1000. Ao receber um valor fora da faixa, o
programa deverá parar de solicitar valores, exibir quantos valores
válidos foram digitados e finalizar.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){

    int valor = 0;
    int contagem = 0;

    do{
        printf("Digite um valor real em um intervalo de 500-1000!\n");
        scanf("%i", &valor);
    if(valor >= 500 && valor <= 1000){
        contagem++;
    }
    }while(valor >= 500 && valor <= 1000);

    printf("Você digitou exatamente %i valores validos antes de digitar um fora do intervalo.\n", contagem);

}
