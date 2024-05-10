#include <stdlib.h>
#include <stdio.h>  
#include <string.h>

int main(){

//  ../dados.txt (CRIA EM UMA PASTA SUBEXISTENTE);
//  dados.txt (CRIA NO LOCAL);
//  meusdados/dados.txt (CRIA O .EXE EM UMA PASTA LOCAL);
 
    FILE* arquivo = fopen("../dados.txt", "r");

//  ERRO        
    if(arquivo == NULL){
        perror("Erro ao abrir arquivo.\n");
        exit(1);
    }

    char frase[100];
    char c;
    int i = 0;

//  LÊ OS CARACTERES DO ARQUIVO
    while((c = fgetc(arquivo)) != EOF){
        frase[i] = c;
        i++;
    }
    frase[i] = '\0';

    printf("Dados lidos: %s\n", frase);

//  FECHA ARQUIVO
    fclose(arquivo);


    return 0;
}