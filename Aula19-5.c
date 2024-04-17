#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
5) Elabora uma função que receba duas strings como parâmetros e
verifique se a segunda string está dentro da primeira. Para isso, utilize
apenas aritmética de ponteiros.
*/

void leString(char string[], int tamanho){
    fgets(string, tamanho, stdin);
    string[strcspn(string, "\n")] = '\0';
    setbuf(stdin, NULL);
}

void Strings(char Letras[]){

}

int main(){
    
    char *Texto[2][50];

    printf("Digite o texto: ");
    leString(Texto, 50);
    
}