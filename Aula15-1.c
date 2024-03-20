#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
1) Crie uma enumeração representando os meses do ano.
Agora, escreva um programa que leia um valor inteiro do
teclado e exiba o nome do mês correspondente e a
quantidade de dias que ele possui. 
*/

typedef enum {Janeiro=1, Fevereiro=2, Março=3, Abril=4, Maio=5, Junho=6, Julho=7, Agosto=8, Setembro=9, Outubro=10, Novembro=11, Dezembro=12} Ano;

int main(){

    Ano mes;
    int num = 0;

    while(num < 1 || num > 12){
        printf("Digite o mês em um valor númerico (1 a 12): ");
        scanf("%d", &num);
    }

    mes = num;

    if(mes == Janeiro){
        printf("Janeiro\n");
        printf("Dias: 31\n");
    }else if(mes == Fevereiro){
        printf("Fevereiro\n");
        printf("Dias: 29\n");
    }else if(mes == Março){
        printf("Março\n");
        printf("Dias: 31\n");
    }else if(mes == Abril){
        printf("Abril\n");
        printf("Dias: 30\n");
    }else if(mes == Maio){
        printf("Maio\n");
        printf("Dias: 31\n");
    }else if(mes == Junho){
        printf("Junho\n");
        printf("Dias: 30\n");
    }else if(mes == Julho){
        printf("Julho\n");
        printf("Dias: 31\n");
    }else if(mes == Agosto){
        printf("Agosto\n");
        printf("Dias: 31\n");
    }else if(mes == Setembro){
        printf("Setembro\n");
        printf("Dias: 30\n");
    }else if(mes == Outubro){
        printf("Outubro\n");
        printf("Dias: 31\n");
    }else if(mes == Novembro){
        printf("Novembro\n");
        printf("Dias: 30\n");
    }else if(mes == Dezembro){
        printf("Dezembro\n");
        printf("Dias: 31\n");
    }

    return 0;
}