#include <stdlib.h> 
#include <stdio.h>
#include <string.h>

/*
3) Crie uma estrutura representando um atleta. Essa estrutura
deve conter o nome do atleta, seu esporte, idade e altura. Agora,
escreva um programa que leia os dados de cinco atletas e os
armazene em um arquivo binário.
*/

#define Atletas 5

    typedef struct{
        char nome[50];
        char esporte[50];
        int idade;
        float altura;
    }Atleta;

int main(){

    FILE* arquivo;
    Atleta atleta[5];
    
    arquivo = fopen("atletas.dat", "wb");

    if (arquivo == NULL){
        perror("Erro ao criar o arquivo\n");
        exit(1);
    }
        
    for (int i = 0; i < Atletas; i++){
    fprintf(arquivo,"Digite o nome do atleta:\n");
    fscanf(arquivo,"%s",atleta[i].nome);

    fprintf(arquivo,"Digite o esporte do atleta:\n");
    fscanf(arquivo,"%s",atleta[i].esporte);

    fprintf(arquivo,"Digite o idade do atleta:\n");
    fscanf(arquivo,"%d",&atleta[i].idade);

    fprintf(arquivo,"Digite o altura do atleta:\n");
    fscanf(arquivo,"%f",&atleta[i].altura);

    }

    fwrite(&atleta, sizeof(Atleta), 5, arquivo);
    
    printf("Os dados dos foram sucesso no arquivo 'atletas.dat'.\n");
    
    fclose(arquivo);
    
    return 0;

}