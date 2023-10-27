/**
 * @file ExerciciosAula12-6.c
 * @author Leonardo Tanamura (leotanamura@icloud.com)
 * @brief Exercicio 6 Aula 12
 * @date 2023-10-23
 */

#include <stdlib.h>
#include <stdio.h>

/*
 Exercício 6 ) Faça um programa que multiplique as matrizes A e D
abaixo gerando matriz AD
*/

int main(){

    int matrizA[2][3] = {{3, 7, 10}, {1,5,0}};
    int matrizD[3][2] = {{1,2}, {5,6}, {2,3}};
    int matrizAD[2][2] = {{0,0}, {0,0}};
    int i, j ,k;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            for(k = 0; k < 3; k++){
                matrizAD[i][j] = matrizAD[i][j] + (matrizA[i][k] * matrizD[k][j]);
            }  
        }
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf(" %i ", matrizAD[i][j]);
        }
        printf("\n");
    }

    return 0;

}