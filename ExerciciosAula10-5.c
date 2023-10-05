/**
 * @file ExerciciosAula10-1.c
 * @author Leonardo Tanamura
 * @brief Exercicio 1 Aula 10
 * @date 2023-10-03
 */

/*
5) Faça um programa que calcule o fatorial de um número a ser
digitado.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){ //5x4 x 3 x 2 x 1

int valor, total;

    printf("Digite o valor fatorial.\n");
    setbuf(stdin,NULL);
    scanf("%d", &valor);
    if(valor < 0 || valor > 14){
        system("clear");
        printf("Erro, digite um valor baixo ou real!\n");
        return 0;
    }

for(total = 1 ; valor > 0; valor--){
    total = valor * total;
}
    system("clear");
    printf("O valor fatorial é %i\n", total);

return 0;

}