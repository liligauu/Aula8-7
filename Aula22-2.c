#include <stdlib.h> 
#include <stdio.h>
#include <string.h>

/*
2) Elabore um programa que leia um arquivo binário contendo
100 números. Mostre na tela a soma desses números.
*/

#include <stdlib.h>
#include <stdio.h>

int main() {
    FILE *arquivo;
    int numero;
    int soma = 0;
    int contador = 0;

    arquivo = fopen("random.bin", "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fread(&numero, sizeof(int), 1, arquivo) == 1) {
        soma = soma + numero;
        contador++;
    }

    if (contador != 100) {
        printf("Erro: O arquivo não contém exatamente 100 números.\n");
        fclose(arquivo);
        return 1;
    }

    printf("A soma dos números é: %d\n", soma);

    fclose(arquivo);

    return 0;
}