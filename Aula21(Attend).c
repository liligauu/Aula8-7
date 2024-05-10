#include <stdlib.h>
#include <stdio.h>  
#include <string.h>

int main(){

//  ../dados.txt (CRIA EM UMA PASTA SUBEXISTENTE);
//  dados.txt (CRIA NO LOCAL);
//  meusdados/dados.txt (CRIA O .EXE EM UMA PASTA LOCAL);
 
    FILE* arquivo = fopen("../dados.txt", "a");

//  ERRO        
    if(arquivo == NULL){
        perror("Erro ao abrir arquivo.\n");
        exit(1);
    }

    char frase[50] = "\nSextou!";
    int tamanho = strlen(frase);

//  SALVA CADA CARACTER DA STRING NO ARQUIVO
    for(int i = 0; i < tamanho; i++){
        fputc(frase[i], arquivo);
    }

//  FECHA ARQUIVO
    fclose(arquivo);


    return 0;
}