/**
 * @file ExerciciosAula9-1.c
 * @author Leonardo Tanamura ()
 * @brief Exercicios Aula 9.1
 * @date 2023-09-21
 * 
 **/

/*
1) Faça um programa que calcule a média para 5 alunos, sendo que
cada aluno tem 2 notas (reais). O programa somente deverá aceitar
notas no intervalo fechado de 0 a 10, solicitando nova digitação
quando necessário.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){

    float nota1, nota2, media;
    int alunos = 5;
    int opcao;

    do{
        do{
            system("cls");
            printf("Digite a primeira nota do aluno:\n");
            setbuf(stdin,NULL);
            scanf("%f", &nota1);
        }while( (nota1 < 0) || (nota1 > 10) );      

        do{
            printf("Digite a segunda nota do aluno:\n");
            setbuf(stdin,NULL);
            scanf("%f", &nota2);
        }while ( (nota2 < 0) || (nota2 > 10) );

        media = (nota1 + nota2) / 2;
        system("cls");
        printf("Media do aluno: %.2f\n", media);
        printf("Voce deseja calcular a nota de mais um aluno?\n1- Sim\n2- Nao\n");
        setbuf(stdin,NULL);
        scanf("%i", &opcao);

        alunos--;
    }while(alunos > 0 && opcao == 1);

    if(opcao == 1 && alunos == 0){
        system("cls");
        printf("Voce excedeu o numero de calculos!\nEncerrando programa...\n");
    }
}