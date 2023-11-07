/**
 * @file ExerciciosAula14-2.c
 * @author Leonardo Tanamura (leotanamura@icloud.com)
 * @brief Exercicio 2 Aula 14
 * @date 2023-11-06
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 2) Elabore uma função que receba por parâmetro o sexo (caractere) e a
altura de uma pessoa (real), calcule e retorne seu peso ideal. Para isso,
utilize as fórmulas a seguir.
 Para homens: (72.7 * altura) - 58
 Para mulheres: (62.1 * altura) - 44.7
*/

float pesoideal(char sexo, float altura) {
    float peso;

    if (sexo == 'M' || sexo == 'm') {
        peso = (altura * 72.7) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        peso = (altura * 62.1) - 44.7;
    }

    return peso;
}

int main() {
    float altura;
    char opcao;

    printf("Qual o seu sexo? (M) ou (F)\n");
    scanf("%c", &opcao);

    if (opcao == 'M' || opcao == 'm' || opcao == 'F' || opcao == 'f') {
        printf("Digite a sua altura em metros. (EX: 1.70)\n");
            scanf("%f", &altura);
                float peso = pesoideal(opcao, altura);
                    if (peso != -1) {
                        printf("Seu peso ideal é %.2f kg.\n", peso);
                    } 
    } else {
        printf("Você não escolheu uma opção correta!\n");
    }

    return 0;
}
