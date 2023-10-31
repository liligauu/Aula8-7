/**
 * @file ExerciciosAula13-4.c
 * @author Leonardo Tanamura (leotanamura@icloud.com)
 * @brief Exercicio 4 Aula 13
 * @date 2023-10-26
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
4) Faça um programa que receba um nome, ele deve perguntar
novamente caso o nome tenha tamanho inferior a 5 caracteres. Ao receber
um nome com 5 caracteres ou mais o programa exibe o nome e finaliza.
*/

int main (){

    int tamanho;
    char nome [21];

    printf("Digite o seu nome: ");
    fgets(nome, 20, stdin);
    nome[strcspn(nome, "\n")] = '\0';
    setbuf(stdin,NULL);

    tamanho = strlen(nome);

    while(tamanho < 5){
        printf("Seu nome deve conter no mínimo 5 caracteres!\n");
            printf("Digite seu nome novamente: ");
                    fgets(nome, 20, stdin);
                        nome[strcspn(nome, "\n")] = '\0';
                            setbuf(stdin,NULL);
            tamanho = strlen(nome);
    if(tamanho > 5){
        continue;
    }
    }

        printf("\nSeu nome é: %s\n", nome);


    return 0;

}