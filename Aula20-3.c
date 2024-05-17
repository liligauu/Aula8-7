#include <stdlib.h> 
#include <stdio.h>
#include <string.h>

/*
3) Escreva uma função que receba como parâmetro dois vetores via referência( A e B)
e o tamanho N. A função deve retornar o ponteiro para um vetor C de tamanho N
alocado dinamicamente, em que:
C[i] = A[i] * B[i]
*/

int *Retornaproduto(int N,int *A,int *B){

    if(N <= 0 || A == NULL || B == NULL){
        return NULL;
    }

    int *C = (int*) malloc(N * sizeof(int));
    if(C == NULL){
        perror("Erro ao alocar memória!\n");
        exit(1);
    }

    for(int i = 0; i < N; i++){
        C[i] = A[i] * B[i];
    }

    return C;
}


int main(){

    int N;

    do{
        printf("Digite o tamanho do vetor: ");
        scanf("%i", &N);
    }while(N < 0);

    int *A = (int*) malloc(N * sizeof(int));
    int *B = (int*) malloc(N * sizeof(int));

    for(int i = 0; i < N; i++){
        printf("Digite o %i elemento do vetor A: ", i+1);
        scanf("%i", &A[i]);
    }

    for(int i = 0; i < N; i++){
        printf("Digite o %i elemento do vetor B: ", i+1);
        scanf("%i", &B[i]);
    }

    int *C = Retornaproduto(N, A, B);
    if(C == NULL){
        perror("Erro ao alocar memória!\n");
        exit(1);
    } else {
        printf("Vetor C: \n");
        for(int i = 0; i < N; i++){
            printf("%i ", C[i]);
        }
        printf("\n");
        free(C);
    }

    free(A);
    free(B);

    return 0;
}