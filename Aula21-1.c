#include <stdlib.h> 
#include <stdio.h>
#include <string.h>

/*
1) Escreva um programa que leia do usuário o nome de um arquivo
texto. Em seguida, mostre na tela quantas linhas esse arquivo possui.
*/

int main(){

    char Nome_Arquivo[30];

    printf("Digite o nome do arquivo: \n");
    fgets(Nome_Arquivo, 30, stdin);
    Nome_Arquivo[strcspn(Nome_Arquivo, "\n")] = '\0';
    setbuf(stdin, NULL);

    FILE *arq = fopen(Nome_Arquivo , "r");
    if(arq == NULL){
        perror("Erro ao abrir arquivo!\n");
        exit(1);
    }

    int tamanho = 0;
    char linha[200];

    while (fgets(linha, sizeof(linha), arq) != NULL) {
        tamanho++;
    }

    printf("O arquivo possui %d linhas.\n", tamanho);

    fclose(arq);

    return 0;

}