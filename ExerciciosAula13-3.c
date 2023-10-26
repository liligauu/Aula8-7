/**
 * @file ExerciciosAula13-3.c
 * @author Leonardo Tanamura (leotanamura@icloud.com)
 * @brief Exercicio 3 Aula 13
 * @date 2023-10-24
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>

/*
3) Desenvolva um programa que armazene o nome e o
telefone de 5 pessoas. Ao digitar a posição desejada, o
programa deve exibir o nome e telefone daquela posição. O
programa finaliza ao receber a entrada -1.
*/

int main (){

    char nome[5][21] = {"Leonardo", "Caio", "Carlos", "Matheus", "Joao"};
    char telefone[5][21] = {"(43)99147-6643", "(92)2773-3278", "(14)2091-7611", "(84)2182-5275", "(18)3204-8512"};
    int opcao;

        printf("Escolha um valor de (1-5) para mostrar as informações de um usuário: ");
        scanf("%d", &opcao);

    while(opcao != -1){
        if(opcao >= 1 && opcao <= 5){
        printf("Nome: %s\n", nome[opcao-1]);
        printf("Telefone: %s\n", telefone[opcao-1]);
        }else{
            printf("Posição inválida!\n");
        }
        setbuf(stdin, NULL); 
        printf("Digite outro valor: ");
        scanf("%d", &opcao);  
    }

        return 0;

}