#include <stdlib.h> 
#include <stdio.h>
#include <string.h>

/*
5) Crie uma estrutura representando um ranking. Essa
estrutura deve conter o nome do jogador e sua pontuação.
Em seguida, escreva um programa que leia os dados de 5
jogadores e os armazene em um arquivo utilizando a
técnica de Dados formatados.
*/

typedef struct {
    char nome[50];
    float pontuacao;
} Ranking;

int main() {
    FILE *arquivo;
    Ranking tops[5];

    arquivo = fopen("ranking.dat", "wb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do jogador %d:\n", i + 1);
        scanf("%s", tops[i].nome);

        printf("Digite a pontuação do jogador %d:\n", i + 1);
        scanf("%f", &tops[i].pontuacao);
    }

    fwrite(tops, sizeof(Ranking), 5, arquivo);

    printf("Dados dos jogadores gravados com sucesso no arquivo 'ranking.dat'.\n");

    fclose(arquivo);

    return 0;
}
