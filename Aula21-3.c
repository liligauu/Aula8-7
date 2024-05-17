#include <stdlib.h> 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
3) Escreva um programa para converter o conteúdo de um arquivo
texto em caracteres maiúsculos. O programa deverá ler do usuário o
nome do arquivo a ser convertido e o nome do arquivo a ser salvo.
*/

void LeString(char string[], int tamanho){
    fgets(string, tamanho, stdin);
    string[strcspn(string, "\n")] = '\0';
    setbuf(stdin, NULL);
}

int main(){

    char BuscaArquivo[50];

    printf("Digite o nome do arquivo: ");
    LeString(BuscaArquivo, 49);

    FILE* Arq1 = fopen(BuscaArquivo, "r");
    if(Arq1 == NULL){
        perror("Erro ao abrir arquivo!\n");
        exit(1);
    }

    int c, i = 0;
    char Texto[250];
    char NovoArquivo[50];

    while((c = fgetc(Arq1)) != EOF){
        Texto[i] = c;
        i++;
    }

    int tamstring = strlen(Texto);

    for(int j = 0; j < tamstring; j++){
        Texto[j] = toupper(Texto[j]);
    }

    printf("Digite o nome do novo arquivo: ");
    LeString(NovoArquivo, 49);

    FILE* Arq2 = fopen(NovoArquivo, "w");
    if(Arq2 == NULL){
        perror("Erro ao criar arquivo!\n");
        exit(1);
    }

    for(int j = 0; j < tamstring; j++){
        fputc(Texto[j], Arq2);
    }

    printf("Todas letras foram convertidas!\n");
    fclose(Arq1);
    fclose(Arq2);

    return 0;

}