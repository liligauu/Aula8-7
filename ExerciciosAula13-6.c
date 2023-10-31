/**
 * @file ExerciciosAula13-6.c
 * @author Leonardo Tanamura (leotanamura@icloud.com)
 * @brief Exercicio 6 Aula 13
 * @date 2023-10-26
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
6) Faça um programa que receba um nome e um sobrenome. Ele deve
construir uma nova string no formato americano (Sobrenome, Nome)
Exemplo: Silva, José
*/

int main (){

    char nome[21];
    char sobrenome[21];
    int contador;

    printf("Digite seu nome: ");
        fgets(nome, 20, stdin);
            nome[strcspn(nome, "\n")] = '\0';
                setbuf(stdin,NULL);

    printf("Digite seu sobrenome: ");
        fgets(sobrenome, 20, stdin);
            sobrenome[strcspn(sobrenome, "\n")] = '\0';
                setbuf(stdin,NULL);

    contador = strlen(nome) + strlen(sobrenome);
    char sobrenomenome[contador];

    strcpy(sobrenomenome, sobrenome);
        strcat(sobrenomenome, ", ");
            strcat(sobrenomenome, nome);
                printf("%s \n", sobrenomenome);

    return 0;
    
}