/**
 * @file ExerciciosAula14-5.c
 * @author Leonardo Tanamura (leotanamura@icloud.com)
 * @brief Exercicio 5 Aula 14
 * @date 2023-11-06
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
5) Crie uma função que que receba o valor de um inteiro
positivo N, calcule e retorne o fatorial desse número.
*/

int calcularFatorial(int N) {
    int fatorial = 1;

    while (N > 1) {
        fatorial *= N;
        N--;
    }

    return fatorial;
}

int main() {
    
    int Number;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &Number);

    if (Number < 0) {
        printf("O número deve ser positivo.\n");
    } else {
        int fatorial = calcularFatorial(Number);
        printf("%d! = %i\n", Number, fatorial);
    }

    return 0;
}
