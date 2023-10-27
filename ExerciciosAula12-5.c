/**
 * @file ExerciciosAula12-5.c
 * @author Leonardo Tanamura (leotanamura@icloud.com)
 * @brief Exercicio 5 Aula 12
 * @date 2023-10-23
 */

#include <stdlib.h>
#include <stdio.h>

/*
Exercício 5) Faça um programa que some as matrizes A e B,
gerando C
 Multiplicação de matrizes
 Condição: o número de colunas da matriz da esquerda é o mesmo número de
linhas da matriz da direita
 Se A é uma matriz m por n e D é uma matriz n por p, então seu produto AD é a
matriz m por p (m linhas e p colunas)
 Fórmula: ADx,y = Ax,0D0,y + Ax,1D1,y + Ax,2D2,y + Ax,3D3,y
*/

int main(){

    int matrizA[2][3] = {{3, 7, 10}, {1,5,0}};
    int matrizB[2][3] = {{2,3,4}, {6,0,2}};
    int matrizC[2][3];
    int i, j;

    system("cls");
//MATRIZ A
        printf("MATRIZ A:\n");
    for(i = 0; i < 2; i++){
    for(j = 0; j < 3; j++){
        printf(" %i ", matrizA[i][j]);
    }
        printf("\n");
    }
        printf("\n");

//MATRIZ B

        printf("MATRIZ B:\n");
    for(i = 0; i < 2; i++){
    for(j = 0; j < 3; j++){
        printf(" %i ", matrizB[i][j]);
    }
        printf("\n");
    }
        printf("\n");

//MATRIZ C

        printf("MATRIZ C (A + B):\n");
    for(i = 0; i < 2; i++){
    for(j = 0; j < 3; j++){
        matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        printf(" %i ", matrizC[i][j]);
    }
        printf("\n");
    }

    return 0;
}