/**
 * @file ExerciciosAula10-1.c
 * @author Leonardo Tanamura
 * @brief Exercicio 1 Aula 10
 * @date 2023-10-03
 */

/*
2) Faça um algoritmo que exiba todos números de 100 a 1.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

int num = 100;

for(num = 100; num > 0; num--){
    printf("%d\n", num);
}

return 0;

}