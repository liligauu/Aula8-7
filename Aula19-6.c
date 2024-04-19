#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 6) Considere a seguinte declaração:
 int a, *b, **c, ***d;
 Escreva um programa que receba o valor de a, calcule e exiba:
 O dobro do valor a, utilizando o ponteiro b
 O triplo do valor a, utilizando o ponteiro c
 O quadruplo do valor a, utilizando o ponteiro d
*/

int main(){
    int a, *b, **c, ***d;

    printf("Digite um valor inteiro: ");
    scanf("%i", &a);

    b = &a; // b aponta para o ponteiro a; // *b = a
    c = &b; // c aponta para o ponteiro a atravez de b (b aponta para a); // **c = *b = a
    d = &c; // d aponta para o ponteiro a atravez de c (c aponta para b que aponta pra a); // ***d = **c = *b = a

    printf("Valor de a: %i\n", a);
    printf("O dobro do valor de a: %i\n", *b * 2);
    printf("O triplo do valor de a: %i\n", **c * 3);
    printf("O quadruplo do valor de a: %i\n", ***d * 4); 

    return 0;
}
