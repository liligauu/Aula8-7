#include <stdlib.h>
#include <stdio.h>

/*
6) Faça um programa que receba e armazene 20 números em
um vetor. Em seguida exiba:
 Quantos números são iguais a 30;
 Quantos números são maior que a média;
 Quantos números são iguais à media;
*/

int main(){

    int numbers[20], i, soma = 0, media = 0, igualatrinta = 0, maisquemedia = 0, menosquemedia = 0;


    for(i = 0; i < 20; i++){
        printf("Digite o %iº numero! (%i restantes)\n", i+1, 20-i);
        scanf("%d", &numbers[i]);
    }
    for(i = 0; i < 20; i++){
        soma = soma + numbers[i];
    }   media = soma/20;
    // printf("media = %i\n", media);
    for(i = 0; i < 20; i++){
        if(numbers[i] == 30){
            igualatrinta++;
        }else if(numbers[i] >= media){
            maisquemedia++;
        }else if(numbers[i] < media){
            menosquemedia++;
        }
    }


    if(igualatrinta > 0){
        printf("%i números são iguais a 30\n", igualatrinta);
    }if(maisquemedia > 0){
        printf("%i números estão acima da média\n", maisquemedia);
    }if(menosquemedia > 0){
        printf("%i números estão abaixo da média\n", menosquemedia);
    }
}