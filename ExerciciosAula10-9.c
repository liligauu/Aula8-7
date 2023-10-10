/**
 * @file ExerciciosAula10-9.c
 * @author Leonardo Tanamura
 * @brief Exercicio 9 Aula 10
 * @date 2023-10-03
 */

/*
9) Desenvolva um programa que receba um numero
tamanho e exiba um quadrado de tamanho tamanho
utilizando o carácter #
*/

#include <stdio.h>
#include <stdlib.h>

int main(){ 

int value;


    system("cls");
    printf("Digite o tamanho:");
    scanf("%i", &value);

for(int x = 1; x <= value; x++){
//    printf(" #");
    printf("\n");      
for(int y = 1; y <= value; y++){
    printf(" #");
    }
}  

return 0;

} // MURIEL NÃO FAÇO A MINIMA IDEIA DE COMO EU CONSEGUI, MAS EU CONSEGUI "_"
