/**
 * @file ExerciciosAula8-7.c
 * @author Leonardo Tanamura ()
 * @brief Exercicios Aula 8.7
 * @date 2023-09-12
 * 
 **/

/*
Faça um programa que calcule o fatorial de um número a ser
digitado.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){

    int valor;
    int total = 1;

    printf("Digite o valor a ser fatorado!\n");
    scanf("%i", &valor);

    while(valor >= 1){
        total = total * valor;
        valor--;
    }  
    printf("%i", total);
}

// 5X4X3X2X1