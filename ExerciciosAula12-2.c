/**
 * @file ExerciciosAula12-2.c
 * @author Leonardo Tanamura (leotanamura@icloud.com)
 * @brief Exercicio 2 Aula 12
 * @date 2023-10-23
 */

#include <stdlib.h>
#include <stdio.h>

/*
2) Faça um algoritmo que leia uma matriz 3 por 3 (3x3) e
retorna a soma dos elementos da sua diagonal principal e
da sua diagonal secundária;
*/

int main(){

int matriz[3][3] = {{1,2,3}, {4,9,2}, {0, 2, 3}};
int i, j;
int soma = 0, soma2 = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
        if(i == j){
            soma = soma + matriz[i][j];
        }if(i + j == 2){
            soma2 = soma2 + matriz[i][j];
        }
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Soma da primeira diagonal: %i\n", soma);
    printf("Soma da segunda diagonal: %i\n", soma2);

}