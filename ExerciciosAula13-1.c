/**
 * @file ExerciciosAula13-1.c
 * @author Leonardo Tanamura (leotanamura@icloud.com)
 * @brief Exercicio 1 Aula 13
 * @date 2023-10-24
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>

/*
1) Crie um programa para armazenar 10 nomes em um vetor
e imprimir uma lista numerada
*/

int main (){

    char nome[10][21];
    int contador = 0;

    for(int i = 0; i < 10; i++){
        contador++;
        setbuf(stdin,NULL);
        printf("Digite o %i nome: ", contador);
        scanf("%20[^\n]", nome[i]);
    }

    contador = 0;
    system("clear");

    for(int i = 0; i < 10; i++){
        contador++;
        printf("%iº Nome: %s\n", contador, nome[i]);
    }

}