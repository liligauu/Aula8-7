/**
 * @file ExerciciosAula10-1.c
 * @author Leonardo Tanamura
 * @brief Exercicio 1 Aula 10
 * @date 2023-10-03
 */

/*
3) Crie um algoritmo que exiba todos os números múltiplos
de 5 no intervalo de 1 a 500.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

int num;

for(num = 0; num +=5, num <= 500;){
    printf("%d\n", num);
}

return 0;

}