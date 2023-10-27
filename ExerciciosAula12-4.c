/**
 * @file ExerciciosAula12-4.c
 * @author Leonardo Tanamura (leotanamura@icloud.com)
 * @brief Exercicio 4 Aula 12
 * @date 2023-10-23
 */

#include <stdlib.h>
#include <stdio.h>

/*
Muriel fiz o exercício com a explicação de baixo achando que era do mesmo exercício por isso o switch e tal.
*/

/*
Exercício 4) Faça um programa que multiplique por 5 a
matriz A (preenchida a partir do teclado) para gerar a
matriz C.
 Somando/Subtraindo duas matrizes
 Para somar/subtrair 2 matrizes A e B, ambas devem ter o mesmo número
de linhas e colunas (mesma ordem). A matriz resultante C tem a mesma
ordem.
 A soma/subtração ocorre entre os elementos correspondentes da célula A
com a célula B ( mesma coordenada)
Cx,y = Ax,y ± Bx,y 
*/

#define escalar 5

int main(){

    int i, j;
    int matriz[2][3];
    int matrizB[2][3];
    int contador = 0;
    char opcao;

//CRIAÇÃO DA MATRIZ
    for(i = 0; i < 2; i++){
    for(j = 0; j < 3; j++){
        contador++;
        printf("Digite o %i valor da sua matriz:\n", contador);
        scanf("%i", &matriz[i][j]);
    }
    }

//SHOW THE MATTTTTTTTTRIZESSSSSSS
        system("cls"); //LIMPAR CONSOLE
        printf("= MATRIZ A\n");
    for(int i = 0; i < 2; i++){
    for(int j = 0; j < 3; j++){
        printf(" %i ", matriz[i][j]);
    }
        printf("\n");
    } 
        printf("\n----------");

//MATRIZ ESCALAR !RESULTADO!

        printf("\n(MATRIZ A * 5) \n= MATRIZ B\n");
    for(int i = 0; i < 2; i++){
    for(int j = 0; j < 3; j++){
        matrizB[i][j] = matriz[i][j];
        matrizB[i][j] = matrizB[i][j] * escalar;
        printf(" %i ", matrizB[i][j]);
    }   
        printf("\n");
    }

        printf("----------\n");
//SOMANDO E SUBTRAINDO DUAS MATRIZES

    printf("Escolha entre uma das opções!\n");
    printf("( a ) -> Somar As Matrizes A + B\n");
    printf("( b ) -> Subtrair As Matrizes A - B\n");
    printf("( c ) -> Somar As Matrizes B + A\n");
    printf("( d ) -> Subtrair As Matrizes B - A\n");

    setbuf(stdin,NULL);
    scanf("%c", &opcao);

    switch(opcao){
        case 'a':
        case 'A':
            printf("(MATRIZ A + B)\n = MATRIZ C\n");
        for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            matriz[i][j] = matriz[i][j] + matrizB[i][j];
            printf(" %i ", matriz[i][j]);
        }
            printf("\n");
        } break;

        case 'b':
        case 'B':
            printf("(MATRIZ A - B)\n = MATRIZ C\n");
        for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            matriz[i][j] = matriz[i][j] - matrizB[i][j];
            printf(" %i ", matriz[i][j]);
        }
            printf("\n");
        } break;

        case 'c':
        case 'C': 
            printf("(MATRIZ B + A)\n = MATRIZ C\n");
        for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            matriz[i][j] = matrizB[i][j] + matriz[i][j];
            printf(" %i ", matriz[i][j]);
        }
            printf("\n");
        } break;

        case 'd':
        case 'D':
            printf("(MATRIZ B - A)\n = MATRIZ C\n");
        for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            matriz[i][j] = matrizB[i][j] - matriz[i][j];
            printf(" %i ", matriz[i][j]);
        }
            printf("\n");
        } break;

        default:
            printf("Você não digitou uma opção válida!\n");
            break;

    }

    return 0;

}


