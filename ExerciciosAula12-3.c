/**
 * @file ExerciciosAula12-3.c
 * @author Leonardo Tanamura (leotanamura@icloud.com)
 * @brief Exercicio 3 Aula 12
 * @date 2023-10-23
 */

#include <stdlib.h>
#include <stdio.h>

/*
3) Construa um programa que leia uma matriz de tamanho
5 x 5 e escreva:
 O valor e a localização (linha, coluna) do maior valor encontrado
na matriz.
 Multiplicando uma matriz por um escalar
 Uma matriz C é criada com seus elementos gerados a partir da
multiplicação de cada célula da matriz A pelo número escalar
C(x,y) = A(x,y) * escalar
*/

int main(){

system("cls");

//MATRIZ:
int matriz[5][5] = {{10,1,2,3,4}, {4,3,2,1,0}, {1,2,3,4,4}, {1,2,3,4,4}, {3,2,1,0,1}};
int i, j;
int maiorvalor = 1, locx, locy;

//MATRIZ ESCALAR:
int matrizescalar[5][5];
int valorescalar;


//MOSTRANDO A MATRIZ
    for(i = 0; i < 5; i++){
    for(j = 0; j < 5; j++){
        printf("%i ", matriz[i][j]);
    }
        printf("\n");
    }

// MAIOR VALOR:
    for(i = 0; i < 5; i++){
    for(j = 0; j < 5; j++){
        if(matriz[i][j] > maiorvalor){
            maiorvalor = matriz[i][j];
            locx = i;
            locy = j;
        }
    }
    }
            
        printf("O maior valor é: %i na posição (%i, %i)\n", maiorvalor, locx+1, locy+1);

//MATRIZ ESCALAR

    printf("Digite um valor para realizar a matriz escalar!\n");
    setbuf(stdin, NULL);
    scanf("%i", &valorescalar);
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            matrizescalar[i][j] = matriz[i][j] * valorescalar;
            printf("%i ", matrizescalar[i][j]);
        }
        printf("\n");
    }

    return 0;

}