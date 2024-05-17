#include <stdlib.h> 
#include <stdio.h>
#include <string.h>

/*
4) Escreva uma função que receba como parâmetro um valor L e um valor C e retorne
o ponteiro para uma matriz alocada dinamicamente contendo L linhas e C colunas.
Essa matriz deve ser inicializada com o valor 0 em todas as suas posições.
Obs: Ao final de cada programa, não se esqueça de liberar a memória alocada
dinamicamente
*/

int **Alocarmatriz(int L, int C){
    
    if(L <= 0 || C <= 0){
        return NULL;
    }

    int **matriz = (int**) malloc(L * sizeof(int*));
    if(matriz == NULL){
        perror("Erro ao alocar memória das matrizes!\n");
        exit(1);
    }

    for(int i = 0; i < L; i++){
        matriz[i] = (int*) calloc(C, sizeof(int));
        if(matriz[i] == NULL){
            perror("Erro ao alocar memória!\n");
            exit(1);
        }
    }

    return matriz;

}

void liberar_matriz(int **matriz, int L) {

    if (matriz == NULL) {
        return;
    }
    
    for (int i = 0; i < L; i++) {
        free(matriz[i]);
    }

    free(matriz);
}


int main(){

    int L, C;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &L);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &C);
    
    // Chamando a função para alocar a matriz
    int **matriz = Alocarmatriz(L, C);
    if (matriz == NULL) {
        printf("Erro ao alocar memória para a matriz!\n");
        return 1;
    }

    // Imprimindo a matriz (apenas para visualização)
    printf("Matriz alocada e inicializada com zeros:\n");
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    liberar_matriz(matriz, L);

    return 0;

}