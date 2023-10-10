/**
 * @file ExerciciosAula10-8.c
 * @author Leonardo Tanamura
 * @brief Exercicio 8 Aula 10
 * @date 2023-10-03
 */

/*
8) Utilizando a estrutura do laço for aninhado, crie um
programa que exiba a tabuada de todos os números de
1 a 10 no seguinte formato:
*/

#include <stdio.h>
#include <stdlib.h>

int main(){ 

int value, total;

    printf("Digite para calcular a tabuada!\n");
    scanf("%i", &value);
    system("cls");
    printf("| Tabuada do %i:\n", value);

for(int i = 1; i<=10; i++){
    total = value * i;
    printf("| %i x %i = %i\n", value,i,total);
}

return 0;

}
