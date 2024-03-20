#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

typedef enum{Brasileiro = 1, Estrangeiro = 2} Option;

typedef struct{
    char Nome[41];
    int Idade;
    float Peso;
} Cadastro;

typedef union{
    int CPF[12];
    char Passaporte[10]; 
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
        setbuf(stdin, NULL);
        switch(option){
            case 1: 
                printf("Digite o seu CPF: ");
                scanf("%i", &nacionalidade[i].CPF);
                setbuf(stdin, NULL);
                break;
            case 2:
                printf("Digite o número do seu Passaporte: ");
                fgets(nacionalidade[i].Passaporte, 10, stdin);
                nacionalidade[i].Passaporte[strcspn(nacionalidade[i].Passaporte, "\n")] = '\0';
                setbuf(stdin, NULL);
                break;
            default:
                break;
        }
    }

    printf("\nDados cadastrados das 5 pessoas:\n");
    for(int i = 0; i < 5; i++){
        printf("\n----- Pessoa %d -----\n", i+1);
        printf("Nome: %s\n", cadastro[i].Nome);
        printf("Idade: %d\n", cadastro[i].Idade);
        printf("Peso: %.2f\n", cadastro[i].Peso);
        if(option == Brasileiro)
            printf("CPF: %i\n", nacionalidade[i].CPF);
        else if(option == Estrangeiro)
            printf("Passaporte: %s\n", nacionalidade[i].Passaporte);
    }

    return 0;
}
