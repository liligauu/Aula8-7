/**
 * @file ExerciciosAula14-4.c
 * @author Leonardo Tanamura (leotanamura@icloud.com)
 * @brief Exercicio 4 Aula 14
 * @date 2023-11-06
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
4) Faça uma função que receba a média final de um aluno
por parâmetro e retorne o seu conceito, conforme a tabela
abaixo:
*/

char calcularConceito(float media) {
    if (media >= 9.0 && media <= 10.0) {
        return 'A';
    } else if (media >= 7.0 && media < 9.0) {
        return 'B';
    } else if (media >= 5.0 && media < 7.0) {
        return 'C';
    } else if (media >= 0.0 && media < 5.0) {
        return 'D';
    } else {
        printf("Nao foi possivel definir um conceito para sua nota!\n");
        return 0;
    }
}

int main() {
    float media;
    char conceito;

    printf("Digite a média final do aluno: ");
    scanf("%f", &media);

    conceito = calcularConceito(media);

    if (conceito != 0) {
        printf("Conceito: %c\n", conceito);
    } else {
        printf("Média fora da faixa válida.\n");
    }

    return 0;
}

