#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
2) Crie um programa de cadastro que receba, armazene, e
em seguida, exiba os dados de 5 pessoas.
 Cada pessoa possui: nome, idade, peso, data de nascimento,
brasileiro ou estrangeiro. Caso seja Brasileiro, armazene o CPF,
caso estrangeiro, armazene o passaporte.
 Regra: Utilize structs, typedef, union e enum.
*/
    typedef struct{
        char nome[31];
        int idade;
        float peso;
        int ano,mes,dia;
    } Cadastro;

    typedef union{
        int CPF[12];
        char Passaporte[8];
    } Registro;

int main(){

    

    

    return 0;

}
