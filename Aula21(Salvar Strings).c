#include <stdlib.h>
#include <stdio.h>  
#include <string.h>

int main(){

//  ../dados.txt (CRIA EM UMA PASTA SUBEXISTENTE);
//  dados.txt (CRIA NO LOCAL);
//  meusdados/dados.txt (CRIA O .EXE EM UMA PASTA LOCAL);
 
    FILE* arquivo = fopen("../dados.txt", "w");

//  ERRO        
    if(arquivo == NULL){
        perror("Erro ao abrir arquivo.\n");
        exit(1);
    }

    char frase[50] = "Agora eu escrevo strings no HD!!!";

//  SALVA STRING
    fputs(frase, arquivo);

//  FECHA ARQUIVO
    fclose(arquivo);

    return 0;
}