#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_SERIES 4

typedef struct{
    char série[40];
    char plataforma[40];   
    float IMDb;
    int temporadas;
    int episodios;
} Serie;

void leString(char string[], int tamanho){
    fgets(string, tamanho, stdin);
    string[strcspn(string, "\n")] = '\0';
    setbuf(stdin, NULL);
}

void DefineSerie(Serie serie[]){
    
    for(int i = 0; i < MAX_SERIES; i++){
        printf("Digite o nome da %i série: ", i+1);
        leString(serie[i].série, 39);
        printf("Digite o nome da %i plataforma: ", i+1);
        leString(serie[i].plataforma, 39);
        setbuf(stdin, NULL);
        do{
            printf("Dê uma nota de (1 a 10) para esta série: ");
            scanf("%f", &serie[i].IMDb);
        } while(serie[i].IMDb < 0 || serie[i].IMDb > 10);
        do{
            printf("Digite o número de temporadas: ");
            scanf("%i", &serie[i].temporadas);
        } while(serie[i].temporadas < 0);
        do{
            printf("Digite o número de episodios: ");
            scanf("%i", &serie[i].episodios);
        } while(serie[i].episodios < 0);
        setbuf(stdin, NULL);
    }
}

void Exibesérie(Serie serie[]){
    printf("%-41s | %-40s | %-1s | %-1s | %s\n", "Série", "Plataforma", "Nota", "T", "E");
    for (int i = 0; i < MAX_SERIES; i++){
        printf("%-40s | %-40s | %.2f | %i | %i\n", serie[i].série, serie[i].plataforma, serie[i].IMDb, serie[i].temporadas, serie[i].episodios);
    }
}
   

int main(){

    Serie serie[5];

    // A) Definir séries:
    DefineSerie(serie);
    Exibesérie(serie);
    





    return 0;

}