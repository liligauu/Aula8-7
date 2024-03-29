#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
1) Escreva um programa que receba um número inteiro
representando a quantidade total de segundos e, usando
passagem de parâmetros por referência, converta a
quantidade informada de segundos em Horas, Minutos e
Segundos. Imprima o resultado da conversão no formato
HH:MM:SS. Utilize o seguinte protótipo da função:
void converteHora(int total_segundos, int* hora, int* min, int* seg)
*/

void converteHora(int total_segundos, int* hora, int* min, int* seg){

    int resto_horas = 0;

    *hora = total_segundos/3600;
    resto_horas = total_segundos % 3600;
    *min = resto_horas/60;
    *seg = resto_horas % 60;

    return;
}

int main(){
    int total_segundos = 0;
    int hora;
    int min;
    int seg;

    printf("Digite os segundos: ");
    scanf("%i", &total_segundos);

    converteHora(total_segundos, &hora, &min, &seg);

    printf("Horário: %02d:%02d:%02d\n", hora, min, seg);

}