#include <stdlib.h> 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
5) Elabore um programa para calcular e exibir o número de
vezes que cada letra ocorre dentro de um arquivo texto.
Ignore as letras com acento. O usuário deverá informar o
nome do arquivo.
*/

void LeString(char String[], int tamanho){
    fgets(String, tamanho, stdin);
    String[strcspn(String, "\n")] = '\0';
    setbuf(stdin, NULL);
}

int main(){

    char Arquivo[50];

    printf("Digite o nome do arquivo: ");
    LeString(Arquivo, 49);

    FILE* Arq1 = fopen(Arquivo, "r");
    if(Arq1 == NULL){
        perror("Erro ao abrir arquivo!\n");
        exit(1);
    }

    int c;
    int contador[26] = {0};

    while((c = fgetc(Arq1)) != EOF){
        if (isalpha(c)) { // Verifica se o caractere é uma letra do alfabeto
            c = toupper(c);
            contador[c - 'A']++; // Incrementa o contador para a letra correspondente
        }
    }

    for(int i = 0; i < 26; i++) {
        if (contador[i] > 0) {
            printf("%c: %d\n", 'A' + i, contador[i]);
        }
    }

    fclose(Arq1);

    return 0;
}