#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
5) Um problema típico em ciência da computação consiste em
converter um número da sua forma decimal para binária. Crie um
algoritmo recursivo para resolver esse problema.
 Solução trivial: x=0 quando o número inteiro já foi convertido para
binário
 Passo da recursão: saber como x/2 é convertido. Depois, imprimir um
dígito (0 ou 1) dado o sucesso da divisão.
*/

int binario(int x){
    int resto = 0;
    if(x == 0){
        return 0; 
    }else{
        resto = x % 2;
        x = x/2; // ANTES DA CHAMADA É A IDA.
        binario(x); 
        printf("%i", resto); // DEPOIS DA CHAMADA É A VOLTA. 
        return 0;
    }
}

int main(){

    int x;

    printf("Converta seu número em binário.\n");
    printf("Digite o valor: ");
    scanf("%i", &x);
    
    printf("Binario: ");
    binario(x);
    printf("\n");
}