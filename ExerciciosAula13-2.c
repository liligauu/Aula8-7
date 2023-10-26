/**
 * @file ExerciciosAula13-2.c
 * @author Leonardo Tanamura (leotanamura@icloud.com)
 * @brief Exercicio 2 Aula 13
 * @date 2023-10-24
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>

/*
2) Faça um programa que armazene o nome e salário de 5
empregados. Em seguida calcule um aumento de 8% nos
salários e exiba a nova folha de pagamentos.
*/

int main (){

    char funcionarios[5][21];
    float salario[5];
    int contador = 0;

    for(int i = 0; i < 5; i++){
        contador++;
        setbuf(stdin,NULL);
        printf("Digite o nome do %i Funcionário: ", contador);
        scanf("%20[^\n]", funcionarios[i]);
        setbuf(stdin,NULL);
        printf("Digite o sálario do %i funcionário: ", contador);
        scanf("%f", &salario[i]);
    }

        system("clear");
        printf("Folha de Pagamento!\n");
    for(int i = 0; i < 5; i++){
        salario[i] = salario[i] + (salario[i]* 0.08);
        printf("Nome: %s\n", funcionarios[i]);
        printf("Salário + reajuste: %.2f\n", salario[i]);
        printf("-----------------\n");
    }

}