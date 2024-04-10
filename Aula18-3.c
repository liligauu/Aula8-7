#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
3) Crie uma função que retorne x elevado a y através de operação de
multiplicação. A função recebe x e y por parâmetro
*/

int retornaxy(int x, int y){
    if(y == 0){
        return 1;
    }else if(y == 1){
        return x;
    }else{
        int valor = x * retornaxy(x, y-1);
        return valor;
    }
}

int main(){
    int x1, y1;

    printf("Digite o valor do x: ");
    scanf("%i", &x1);
    printf("Digite o valor de y: ");
    scanf("%i", &y1);

    printf("Xŷ = %i\n", retornaxy(x1,y1));
}