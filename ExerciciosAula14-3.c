/**
 * @file ExerciciosAula14-3.c
 * @author Leonardo Tanamura (leotanamura@icloud.com)
 * @brief Exercicio 3 Aula 14
 * @date 2023-11-06
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 3) Escreva um procedimento que recebe por parâmetro as 3 notas de um
aluno e uma letra. Se a letra for A, o procedimento calcula a média
aritmética das notas do aluno, se for P, a sua média ponderada (pesos: 5, 3
e 2) e se for S, a soma das notas. O valor calculado também deve ser
retornado e exibido na função main.
*/

//média aritmética
float calcularMediaAritmetica(float nota1, float nota2, float nota3) {
    return (nota1 + nota2 + nota3) / 3.0;
}

//média ponderada
float calcularMediaPonderada(float nota1, float nota2, float nota3) {
    return (nota1 * 5 + nota2 * 3 + nota3 * 2) / 10.0;
}

//soma das notas
float calcularSomaDasNotas(float nota1, float nota2, float nota3) {
    return nota1 + nota2 + nota3;
}

int main() {
    float nota1, nota2, nota3;
    char opcao;
    float resultado;

    printf("Digite a 1º nota do aluno:");
    scanf("%f", &nota1);
        printf("Digite a 2º nota do aluno:");
        scanf("%f", &nota2);
            printf("Digite a 3º nota do aluno:");
            scanf("%f", &nota3);


    printf("Escolha a operação \n(A) Media aritmetica\n(P) Media ponderada\n(S) Soma: ");
    scanf(" %c", &opcao);

    switch (opcao) {
        case 'A':
        case 'a':
            resultado = calcularMediaAritmetica(nota1, nota2, nota3);
            printf("Média Aritmética: %.2f\n", resultado);
            break;
        case 'P':
        case 'p':
            resultado = calcularMediaPonderada(nota1, nota2, nota3);
            printf("Média Ponderada: %.2f\n", resultado);
            break;
        case 'S':
        case 's':
            resultado = calcularSomaDasNotas(nota1, nota2, nota3);
            printf("Soma das Notas: %.2f\n", resultado);
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}

