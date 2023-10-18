#include <stdlib.h>
#include <stdio.h>

/*
3) Leia um vetor A com 10 elementos inteiros correspondentes
as idades de um grupo de pessoas. Escreva um programa que
conte e exiba a quantidade de pessoas que possuem idade
superior a 35 anos. 
*/

int main(){

int vetorA[10] = {36, 39, 22, 34, 25, 27, 18, 18, 22, 39};
int i, idadessuperiores = 0;

    for(i = 0; i < 10; i++){
        if(vetorA[i] > 35){
            printf("A %iº pessoa tem %i anos\n", i+1, vetorA[i]);
            idadessuperiores++;
        }
    }

    printf("%i Pessoas possuem a idade maior que 35 anos\n", idadessuperiores);

    return 0;

}