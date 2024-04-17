#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
4) Crie um programa que contenha um vetor de inteiros de tamanho 5.
Utilizando aritmética de ponteiros, leia os dados do teclado e exiba seus
valores multiplicado por 2. Em seguida, exiba o endereço de memória das
posições que contém valores pares.
*/

int main(){
    int vetor[5];
    int *ptrVet = vetor;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %i valor: ", i+1);
        scanf("%i", &vetor[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        *(ptrVet+i) = *(ptrVet+i)*2;
        if(*(ptrVet+i) % 2 == 0){
            printf("%i | %p\n", *(ptrVet+i), (ptrVet+i)); 
        }else{
            printf("%i", *(ptrVet+i));
        }
    }

    return 0;

}