/**
* @file ExerciciosAula8-8.c
* @author Leonardo Tanamura ()
* @brief Exercicios Aula 8.8
* @date 2023-09-18
*
**/

/*
Faça um menu que mostre 3 opções
Menu do programa:
1 - Teste 1
2 - Teste 2
3 – Sair do programa
Digite sua opção:
 A primeira opção imprime o texto “Teste1” e mostra o menu novamente.
 A segunda opção imprime “Teste2” e mostra o menu novamente.
 A terceira opção finaliza o programa.
 Caso digite uma opção diferente, deve mostrar uma mensagem de erro e
mostrar o menu novamente.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){


    system("cls");
    int opcao = 0;
    int finalizar = 1;

    while(finalizar == 1){
        printf("Menu do programa:\n1- Teste 1\n2- Teste 2\n3- Sair do programa\nDigite a sua opção:\n");
        setbuf(stdin, NULL);
        scanf("%i", &opcao);
            if(opcao == 1){
                system("cls");
                printf("Teste 1\n");
            } else if(opcao == 2){
                system("cls");
                printf("Teste 2\n");
            } else if(opcao == 3){
                system("cls");
                printf("Você escolheu sair do programa! Até logo.\n");
                finalizar--;
                break;
            } else if (opcao != 3){
                system("cls");
                printf("Você não escolheu uma opção válida!\n");
            }
    }
}