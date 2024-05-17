#include <stdlib.h> 
#include <stdio.h>
#include <string.h>

/*
4) Considerando a estrutura atleta do exercício anterior, escreva
um programa que leia um arquivo binário contendo os dados de
cinco atletas. Calcule e exiba o nome do atleta mais alto e do
mais velho.
*/

#define Atletas 5

typedef struct {
    char nome[50];
    char esporte[50];
    int idade;
    float altura;
} Atleta;

int main() {

    FILE *arquivo;
    Atleta atletas[5];

    arquivo = fopen("atletas.dat", "rb");
    if (arquivo == NULL){
        perror("Erro ao abrir o arquivo\n");
        exit(1);
    }

    fread(&atletas, sizeof(Atleta), 5, arquivo);

    fclose(arquivo);

    float altura_maxima = atletas[0].altura;
    char maisalto[50];
    for (int i = 1; i < 5; i++){
        if (atletas[i].altura > altura_maxima){
            altura_maxima = atletas[i].altura;
            strcpy(maisalto, atletas[i].nome);
        }
    }

    int idade_maxima = atletas[0].idade;
    char maisvelho[50];
    for (int i = 1; i < Atletas; i++){
        if (atletas[i].idade > idade_maxima){
            idade_maxima = atletas[i].idade;
            strcpy(maisvelho, atletas[i].nome);
        }
    }

    printf("O atleta mais alto é: %s\n", maisalto);
    printf("O atleta mais velho é: %s\n", maisvelho);

    fclose(arquivo);
    return 0;
}