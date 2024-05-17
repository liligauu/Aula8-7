#include <stdlib.h> 
#include <stdio.h>
#include <string.h>

/*
2) Escreva um programa que leia do usuário os nomes de dois
arquivos texto. Crie um terceiro arquivo texto com o conteúdo dos
dois primeiros juntos (o conteúdo do primeiro seguido do conteúdo do
segundo).
*/

void CriaArq1(){
    FILE *arq1 = fopen("Arquivo1.txt", "w");
    if(arq1 == NULL){
        perror("Erro ao abrir arquivo.\n");
        exit(1);
    }

    char frase[] = "Estou juntando";
    fputs(frase, arq1);

    fclose(arq1);
}

void CriaArq2(){
    FILE *arq2 = fopen("Arquivo2.txt", "w");
    if(arq2 == NULL){
        perror("Erro ao abrir arquivo.\n");
        exit(1);
    }

    char frase[] = "As palavras";
    fputs(frase, arq2);

    fclose(arq2);
}

int main(){
    // CriaArq1(); // OPCIONAL: Se quiser criar o arquivo 1 automaticamente
    // CriaArq2(); // OPCIONAL: Se quiser criar o arquivo 2 automaticamente

    char Arquivo1[50];
    char Arquivo2[50];

    printf("Digite o nome do primeiro arquivo: ");
    fgets(Arquivo1, 50, stdin);
    Arquivo1[strcspn(Arquivo1, "\n")] = '\0';
    setbuf(stdin, NULL);

    printf("Digite o nome do segundo arquivo: ");
    fgets(Arquivo2, 50, stdin);
    Arquivo2[strcspn(Arquivo2, "\n")] = '\0';
    setbuf(stdin, NULL);

    FILE* Arq3 = fopen("ArquivoTeste.txt", "w");
    if(Arq3 == NULL){
        perror("Erro ao criar arquivo!\n");
        exit(1);
    }

    FILE* Arq1 = fopen(Arquivo1, "r");
    FILE* Arq2 = fopen(Arquivo2, "r");
    if(Arq1 == NULL || Arq2 == NULL){
        perror("Erro ao abrir arquivo!\n");
        exit(1);
    }

    int c;
    while ((c = fgetc(Arq1)) != EOF) {
        fputc(c, Arq3);
    }

    printf("\n");

    while ((c = fgetc(Arq2)) != EOF) {
        fputc(c, Arq3);
    }

    fclose(Arq1);
    fclose(Arq2);
    fclose(Arq3);

    printf("Os arquivo foi criado e finalizado com sucesso!\n");

    return 0;
}
