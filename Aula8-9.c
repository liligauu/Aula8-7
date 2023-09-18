/**
 * @file ExerciciosAula8-8.c
 * @author Leonardo Tanamura ()
 * @brief Exercicios Aula 8.8
 * @date 2023-09-18
 * 
 **/

/*
9) Faça um programa que simule um jogo, onde o usuário
deverá descobrir um número aleatório escolhido pelo
computador (de 1 a 100).
 O usuário poderá realizar até 6 tentativas, o programa deverá
retornar as mensagens “muito alto”, “muito baixo” até o usuário
acertar o número ou esgotar o número máximo de tentativas.
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){


    system("cls");
    int number = 0;
    int tentativas = 100;
    srand (time(NULL));

    printf("Sorteando um número de 1 a 100!\n");
    int numsorteado = rand() % 100 + 1;
    printf("%i\n", numsorteado);

    while(tentativas != 0){
        printf("Escolha um valor de 1 a 100!\n");
        setbuf(stdin, NULL);
        scanf("%d", &number);
        tentativas--;

        if(number == numsorteado){
            system("cls");
            printf("Você acertou o número sorteado, parabéns!\n");
            break;
        }else if(number != numsorteado && tentativas >= 1){
            system("cls");
            printf("Você errou! tente novamente, você tem %i tentativas.\n", tentativas);
            while(number < numsorteado){
                printf("O número sorteado é maior que %d!\n", number);
                break;
            }while(number > numsorteado){
                printf("O número sorteado é menor que %d!\n", number);
                break;
            }
        }else if(tentativas == 0){
            system("cls");
            printf("Suas tentativas acabaram, tente novamente na próxima!\n");
            break;
        }
    } 

    return 0;
}