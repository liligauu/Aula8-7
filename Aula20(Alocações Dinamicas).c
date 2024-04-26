#include <stdlib.h>
#include <stdio.h>  
#include <string.h>

typedef struct{
    char Nome[40];
} Serie;

int main(){

// Alocação Estática;

//    int vetor[10];

// Alocação Dinamica:

//      Serie* vetorSeries = (Serie*) malloc(10 * sizeof(int));
//      float* vetorFloatDinamico = (float*) malloc(10 * sizeof(int));
//      int* vetorDinamico = (int*) malloc(10 * sizeof(int));

//      Serie* vetorSeries = (Serie*) calloc(tamanho, sizeof(int));
//      float* vetorFloatDinamico = (float*) calloc(tamanho, sizeof(int));
//      int* vetorDinamico = (int*) calloc(tamanho, sizeof(int));

// Alocação struct

//      Pessoa* vetCadastro = (Pessoa*) malloc (3 * sizeof(Pessoa));

//      free(vetCadastro);

    int tamanho;

    printf("Digite o tamanho dos vetores: ");
    scanf("%i", &tamanho);

    int* vetorDinamico = (int*) calloc(tamanho, sizeof(int));

    if(vetorDinamico == NULL){
        perror("Erro ao alocar memória");
        exit(EXIT_FAILURE); //SAIR FUNÇÃO
    }

    for (int i = 0; i < tamanho; i++){
        printf("Digite vetor[%d]: ", i);
        scanf("%d", &vetorDinamico[i]);
    }
    
    for (int i = 0; i < tamanho; i++){
        printf("Exibindo vetor[%d]: %d\n", i, vetorDinamico[i]);
    }
    
    // REALLOC / Realocação Dinamica:

    //  void *realloc(void *ptr, unsigned int num);

    printf("Digite o novo tamanho desejado: ");
    scanf("%d", &tamanho);
    vetorDinamico = (int*) realloc(vetorDinamico, tamanho);

    for (int i = 0; i < tamanho; i++){
        printf("Exibindo vetor após realocagem[%d]: %d\n", i, vetorDinamico[i]);
    }

    //  FREE (LIBERAR MEMÓRIA ALOCADA DINAMICAMENTE)

    //  void* free(void *ptr);

    free(vetorDinamico);

    return 0;
}