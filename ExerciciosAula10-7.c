/**
 * @file ExerciciosAula10-6.c
 * @author Leonardo Tanamura
 * @brief Exercicio 6 Aula 10
 * @date 2023-10-03
 */

/*
Faça um programa que mostre n elementos da sequência de
Fibonacci.
 O valor de n é passado para o programa.
 O primeiro termo é 0, e o segundo termo é 1, os demais devem seguir a
fórmula t
n = tn-1 + tn-2
*/

#include <stdio.h>
#include <stdlib.h>

int main(){ 

int p = 0, u = 1, a, valor;

    printf("Calcule o valor de Fibonnaci:\n");
    scanf("%i", &valor);

if(valor == 0){
    printf("Fibonnaci = 1");
    return 0;
}  
for(int i = 1; i <= valor; i++){
    a = p + u;
    p = u;
    u = a;
}
    system("cls");
    printf("Fibonnaci = %d", a);

return 0;

}
