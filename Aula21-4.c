#include <stdlib.h> 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
4) Crie um programa para calcular e exibir o número de palavras
contido em um arquivo texto. O usuário deverá informar o nome do
arquivo. 
*/

void LeString(char string[], int tamanho){
    fgets(string, tamanho, stdin);
    string[strcspn(string, "\n")] = '\0';
    setbuf(stdin, NULL);
}

int main(){

    char Arquivo[50];

    printf("Digite o nome do arquivo: ");
    LeString(Arquivo, 49);

    FILE* Arq1 = fopen(Arquivo, "r");
    if(Arq1 == NULL){
        perror("Erro ao abrir arquivo!\n");
        exit(1);
    }

    int c;
    int palavra = 0;
    int dentrodapalavra = 0;

    while((c = fgetc(Arq1)) != EOF){
        if(isspace(c)){ // SE O CHAR ATUAL É UM ESPAÇO EM BRANCO
            dentrodapalavra = 0;
        }else if(!dentrodapalavra){
            dentrodapalavra = 1;
            palavra++;
        }
    }

    printf("O número de palavras contidas no arquivo é: %i\n", palavra);

    fclose(Arq1);

    return 0;

}