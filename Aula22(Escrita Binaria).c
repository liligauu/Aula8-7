#include <stdlib.h>
#include <stdio.h>  
#include <string.h>

int main(){

    FILE *arquivo = fopen("../dadosformatados.txt", "w"); //WB = WRITE BINARY //RB = READ BINARY
    if(arquivo == NULL){
        perror("Erro ao abrir arquivo");
        exit(1);
    }

    float salario = 1302.45;
    char texto[30] = "Hello World em binario";
    int vetor[5] = {10, 20, 30, 40, 50};

    fwrite(&salario, sizeof(float), 1, arquivo);
    fwrite(texto, sizeof(char), 30, arquivo);
    fwrite(vetor, sizeof(int), 5, arquivo);

    fread(&salario, sizeof(float), 1, arquivo);
    fread(texto, sizeof(char), 30, arquivo);
    fread(vetor, sizeof(int), 5,arquivo);

    fprintf(arquivo, "%.2f", salario);
    fprintf(arquivo, "%s", texto);

    for (int i = 0; i < 5; i++)
    {
        fprintf(arquivo, "%i ", vetor[i]);
    }
    
    fscanf(arquivo, "%f", &salario);
    fscanf(arquivo, "%[^\n]\n", texto); //LER TEXTOS INTEIROS
    for (int i = 0; i < 5; i++)
    {
        fscanf(arquivo, "%i", &vetor[i]);
    }
    

    printf("%s", texto);

    fclose(arquivo);

    fseek(arquivo, 10/*LINHAS*/, SEEK_SET/*COMEÇO*/);
    fseek(arquivo, 10, SEEK_CUR/*LINHA ATUAL*/);
    fseek(arquivo, 10, SEEK_END/*FINAL*/);

    //int remove(char* nome do arquivo);
    if(remove != 0){
        perror("O arquivo não foi excluido");
        exit(1);
    }

    long ftell(FILE* arq); //POSIÇÃO DE LEITURA/ESCRITA DO ARQUIVO
    // 0 SE COMEÇO DO ARQUIVO
    //TAMANHO DO ARQUIVO EM BYTES SE ESTIVER NO FINAL


    return 0;
}