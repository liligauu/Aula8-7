#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
2) Crie uma função que retorne x*y através de operação de soma. A função
recebe x e y por parâmetro
*/

int retornaxy(int x, int y){
    if(y == 0){
        return 0;
    }else if(y == 1){
        return x;
    }else{
        return x + retornaxy(x, y-1);
    }
}

int main(){

    int x1,y1;

    printf("Digite o valor de x: ");
    scanf("%i", &x1);

    printf("Digite o valor de y: ");
    scanf("%i", &y1);

    printf("x*y = %i\n", retornaxy(x1,y1));

}