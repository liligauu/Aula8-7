/**
 * @file ExerciciosAula10-6.c
 * @author Leonardo Tanamura
 * @brief Exercicio 6 Aula 10
 * @date 2023-10-03
 */

/*
Faça um programa que receba 10 números e calcule o quadrado desse número (um de cada vez)
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

int num, total;
system("cls");

for(int i = 1; i <= 10; i++){
    printf("Digite um valor:\n");
    setbuf(stdin,NULL);
    scanf("%i", &num);
    total = num * num;
    printf("%i\n", total);
    if(i == 10){
    printf("Você excedeu o número de tentativas!\n");
}
} 


return 0;

}
