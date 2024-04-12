#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
1) Escreva um programa que contenha duas variáveis inteiras. Compare os
endereços e exiba o endereço e o conteúdo do maior endereço.
*/

int main(){
    int ptr1 = 30, ptr2 = 10;
    int *ponteiro1 = &ptr1;
    int *ponteiro2 = &ptr2;

    printf("Endereço 1: %p == %i\n", ponteiro1, ptr1);
    printf("Endereço 2: %p == %i\n", ponteiro2, ptr2);

    if(ponteiro1 > ponteiro2){
        printf("Maior endereço = %p e o conteúdo %d\n", ponteiro1, *ponteiro1);
    }else{
        printf("Maior endereço = %p e seu conteúdo = %i\n", ponteiro2, *ponteiro2);
    }

    return 0;
}