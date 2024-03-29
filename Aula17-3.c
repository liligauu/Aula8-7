#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
 3) Crie um Sistema de Gerenciamento de Bandas seguindo os seguintes
passos:
 a) Defina uma estrutura que irá representar bandas de música. Essa estrutura deve
ter o nome da banda, que tipo de música ela toca, o número de integrantes e em que
posição do ranking essa banda está dentre as suas 5 bandas favoritas;
 b) Crie uma função para preencher as 5 estruturas de bandas criadas no exemplo
passado. Após criar e preencher, exiba todas as informações das bandas/estruturas.
 c) Crie uma função que peça ao usuário um número de 1 até 5. Em seguida, seu
programa deve exibir informações da banda cuja posição no seu ranking é a que foi
solicitada pelo usuário;
 d) Crie uma função que peça ao usuário um tipo de música e exiba as bandas com
esse tipo de música no seu ranking.
 e) Crie uma função que peça o nome de uma banda ao usuário e diga se ela está
entre suas bandas favoritas ou não;
 f) Agora junte tudo e crie um menu com as opções de preencher as estruturas e
todas as opções das questões passadas.
*/

#define TODAS_BANDAS 5

typedef struct {
    char nome[21];
    char tipo_musica[21];
    int integrantes;
    int posicao_ranking;
} Banda;

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

void preencherBandas(Banda bandas[]) {
    for (int i = 0; i < TODAS_BANDAS; i++) {
        printf("Banda %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", bandas[i].nome);
        limparBuffer(); 

        printf("Tipo de música: ");
        scanf("%s", bandas[i].tipo_musica);
        limparBuffer();

        printf("Número de integrantes: ");
        scanf("%d", &bandas[i].integrantes);
        limparBuffer(); 

        printf("Posição no ranking (de 1 a 5): ");
        scanf("%d", &bandas[i].posicao_ranking);
        limparBuffer(); 
    }
}

void exibirBandas(Banda bandas[]) {
    printf("\nInformações das Bandas:\n");
    for (int i = 0; i < TODAS_BANDAS; i++) {
        printf("Banda %d:\n", i + 1);
        printf("Nome: %-21s\n", bandas[i].nome);
        printf("Tipo de música: %s\n", bandas[i].tipo_musica);
        printf("Número de integrantes: %d\n", bandas[i].integrantes);
        printf("Posição no ranking: %d\n", bandas[i].posicao_ranking);
        printf("\n");
    }
}

void exibirBandaPorRanking(Banda bandas[]) {
    int numero_banda;

    printf("Digite o número da banda que deseja ver (1 a 5): ");
    scanf("%d", &numero_banda);
    limparBuffer();

    if (numero_banda < 1 || numero_banda > 5) {
        printf("Número de banda inválido.\n");
        return;
    }

    printf("\nInformações da Banda %d:\n", numero_banda);
    printf("Nome: %s\n", bandas[numero_banda - 1].nome);
    printf("Tipo de música: %s\n", bandas[numero_banda - 1].tipo_musica);
    printf("Número de integrantes: %d\n", bandas[numero_banda - 1].integrantes);
    printf("Posição no ranking: %d\n", bandas[numero_banda - 1].posicao_ranking);
}

void exibirBandasPorTipoMusica(Banda bandas[]) {
    char tipo[21];

    printf("Digite o tipo de música que deseja buscar: ");
    scanf("%s", tipo);
    limparBuffer();

    printf("\nBandas com o tipo de música '%s':\n", tipo);
    for (int i = 0; i < TODAS_BANDAS; i++) {
        if (strcmp(bandas[i].tipo_musica, tipo) == 0) {
            printf("Nome: %-21s\n", bandas[i].nome);
            printf("Tipo de música: %-21s\n", bandas[i].tipo_musica);
            printf("Número de integrantes: %d\n", bandas[i].integrantes);
            printf("Posição no ranking: %d\n", bandas[i].posicao_ranking);
            printf("\n");
        }
    }
}

void verificarBandaFavorita(Banda bandas[]) {
    char nome[21];
    int favorita = 0;

    printf("Digite o nome da banda que deseja verificar: ");
    scanf("%s", nome);
    limparBuffer();

    for (int i = 0; i < TODAS_BANDAS; i++) {
        if (strcmp(bandas[i].nome, nome) == 0) {
            favorita = 1;
            break;
        }
    }

    if (favorita) {
        printf("%s está entre suas bandas favoritas.\n", nome);
    } else {
        printf("%s não está entre suas bandas favoritas.\n", nome);
    }
}

int main() {
    Banda bandas[TODAS_BANDAS];
    int opcao;

    do {
        printf("\n=== Menu ===\n");
        printf("1. Preencher bandas\n");
        printf("2. Exibir todas as bandas\n");
        printf("3. Exibir banda por número\n");
        printf("4. Exibir bandas por tipo de música\n");
        printf("5. Verificar se uma banda é favorita\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        limparBuffer();

        switch (opcao) {
            case 1:
                preencherBandas(bandas);
                break;
            case 2:
                exibirBandas(bandas);
                break;
            case 3:
                exibirBandaPorRanking(bandas);
                break;
            case 4:
                exibirBandasPorTipoMusica(bandas);
                break;
            case 5:
                verificarBandaFavorita(bandas);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
