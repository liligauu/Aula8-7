#include <stdlib.h>
#include <stdio.h>  
#include <string.h>

int main(){

    int linha = 5;
    int coluna = 3;

    // Criar Matriz:

    int **matriz = (int **) malloc(linha * sizeof(int*));

    for(int l = 0; l < linha; l++){
        matriz[l] = (int*) malloc(coluna * sizeof(int));
    }

    for (int l = 0; l < linha; l++){
        for(int c = 0; c < coluna; c++){
            printf("Digite o valor de (%d, %d): ", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }

    for (int l = 0; l < linha; l++){
        for(int c = 0; c < coluna; c++){
            printf("(%d, %d) = %d\n", l, c, matriz[l][c]);
        }
    }
    
    // Liberar:

    for(int l = 0; l < linha; l++){
        free(matriz[l]);
    }
    free(matriz);

    for (int l = 0; l < linha; l++){
        for(int c = 0; c < coluna; c++){
            printf("(%d, %d) = %d\n", l, c, matriz[l][c]);
        }
    }

    return 0;

}