#include <stdlib.h>
#include <stdio.h>

/*
4) Crie e inicialize um vetor de inteiros de tamanho 8. Faça a
soma dos seus elementos, e apresente o resultado. 
*/

int main(){

int soma = 0;
int i;
int vetores[] = {1,2,3,4,5,6,7,8}; //36


    for(i = 0; i < 8; i++){
        soma = soma + vetores[i];
    }

    printf("%i\n", soma);

}
