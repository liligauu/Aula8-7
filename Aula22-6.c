#include <stdlib.h> 
#include <stdio.h>
#include <string.h>

/*
6) Considerando a estrutura ranking do exercício anterior,
escreva um programa que leia o arquivo gerado contendo
os dados dos 5 jogadores.
*/

typedef struct {
    char nome[50];
    float pontuacao;
} Ranking;

int main() {

    FILE* arquivo;
    Ranking colocacao[5];
    int i;

    arquivo = fopen("ranking.dat", "rb");
    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        if (fread(&colocacao[i], sizeof(Ranking), 1, arquivo) != 1) {
            printf("Erro ao ler os dados dos jogadores\n");
            fclose(arquivo);
            return 1;
        }
    }

    printf("Dados dos jogadores lidos do arquivo 'ranking.dat':\n");
    for (i = 0; i < 5; i++){
        printf("Jogador %d:\n", i+1);
        printf("Nome: %s\n", colocacao[i].nome);
        printf("Pontuacao: %.2f\n", colocacao[i].pontuacao);
        printf("\n");
    }
    
    fclose(arquivo);

    return 0;
}
