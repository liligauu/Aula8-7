#include <stdlib.h> 
#include <stdio.h>
#include <string.h>

/*
1) Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em
seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o
imprima.
*/

int main(){

    int tamanho;

    do{
        printf("Digite o tamanho do vetor: ");
        scanf("%i", &tamanho);
    }while(tamanho < 0);

    int *vetor = (int*) malloc(tamanho * sizeof(int));
    if(vetor == NULL){
        perror("Erro ao alocar memória!\n");
        exit(1);
    }

    printf("Digite os elementos do vetor!\n");
    for(int i = 0; i < tamanho; i++){
        printf("Digite o %i elemento: ", i+1);
        scanf("%i", &vetor[i]);
    }

    printf("Vetor inserido:\n");
    for (int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    free(vetor);

    return 0;
}