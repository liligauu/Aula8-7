/**
 * @file ExerciciosAula10-1.c
 * @author Leonardo Tanamura
 * @brief Exercicio 1 Aula 10
 * @date 2023-10-03
 */

/*
4) Crie um algoritmo que exiba todos os números pares
entre 240 e 730 inclusive.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

int num;

for(num = 238; num +=2, num <= 730;){
    printf("%d\n", num);
}

return 0;

}