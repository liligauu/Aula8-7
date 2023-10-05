/**
 * @file ExerciciosAula10-1.c
 * @author Leonardo Tanamura
 * @brief Exercicio 1 Aula 10
 * @date 2023-10-03
 */

/*
6) Faça um programa que receba 10 números e calcule o
quadrado desse número (um de cada vez).
*/

#include <stdio.h>
#include <stdlib.h>

int main(){ 

int valor;
int total;
int contador = 0;

for(contador = 1; contador <= 10; contador++){
    printf("Digite um valor para calcular o quadrado deste número!\n");
    scanf("%i", &valor);
    total = valor * valor;
    printf("O Quadrado de %i é %i!\n", valor, total);
}

return 0;

}