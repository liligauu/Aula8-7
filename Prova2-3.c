/**
 * @file Prova5.c
 * @author Leonardo Tanamura
 * @date 2023-11-07
 * @copyright Copyright (c) 2023
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
3) Faça um programa que solicite o tamanho de um quadrado e mostre a borda de um quadrado utilizando o caracter #.
Exemplo:
Digite o tamanho desejado: 10

#	#	#	#	#	#	#	#	#	#
#									#
#									#
#									#
#									#
#									#
#									#
#									#
#									#
#	#	#	#	#	#	#	#	#	#
*/

int main(){

    int i, j, tamanho;

    printf("Digite o tamanho da sua matriz: ");
    scanf("%i", &tamanho);

    for(i = 0; i < tamanho; i++){
        for(j = 0; j < tamanho; j++){
            if(i == j || i == 0 || i == tamanho - 1){
                printf("# ");
            }
        }
        printf("\n");
    }
}