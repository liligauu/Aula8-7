#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

/*
2) Crie um programa de cadastro que receba, armazene, e
em seguida, exiba os dados de 5 pessoas.
 Cada pessoa possui: nome, idade, peso, data de nascimento,
brasileiro ou estrangeiro. Caso seja Brasileiro, armazene o CPF,
caso estrangeiro, armazene o passaporte.
 Regra: Utilize structs, typedef, union e enum.
*/

typedef enum{Brasileiro = 1, Estrangeiro = 2} Option;

typedef struct{
    char Nome[41];
    int Idade;
    float Peso;
} Cadastro;

typedef union{
    int CPF[12];
    int Passaporte[7];
} Documentos;

int main(){

    Option option;    
    Cadastro cadastro[5];
    Documentos nacionalidade[5];

for(int i = 0; i < 5; i++){
    printf("Digite o seu nome: ");
    fgets(cadastro[i].Nome, 41, stdin);
    cadastro[i].Nome[strcspn(cadastro[i].Nome, "\n")] = '\0';
    setbuf(stdin, NULL);
    printf("Digite sua idade: ");
    scanf("%i", &cadastro[i].Idade);
    printf("Digite seu peso (KG): ");
    scanf("%f", &cadastro[i].Peso);
    setbuf(stdin, NULL);
    printf("Escolha uma opção: \n");
    printf("1 - Brasileiro\n");
    printf("2 - Estrangeiro\n");
    scanf("%i", &option);
    switch(option){
        case 1: 
        printf("Digite o seu CPF: ");
        scanf("%i", &nacionalidade[i].CPF);
        setbuf(stdin, NULL);
        break;
        case 2:
        printf("Digite os números seu Passaporte: ");
        scanf("%i", &nacionalidade[i].Passaporte);
        setbuf(stdin, NULL);
        break;
        default:
        break;
    }
    
}




    return 0;
}
