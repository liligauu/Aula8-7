#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int numeros[100];
    FILE* arquivo;
 
    for (int i = 0; i < 100; i++) {
        numeros[i] = rand();
    }

    arquivo = fopen("random.bin", "wb");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    fwrite(numeros, sizeof(int), 100, arquivo);

    printf("Números gerados e armazenados no arquivo \"random.bin\".\n");

    fclose(arquivo);

    return 0;
}