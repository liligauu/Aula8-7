#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 6) Considere a funcaox abaixo. O que essa função faz? Escreva
uma função não-recursiva que resolve o mesmo problema
int funcaox(int a){
 if(a <= 0) return 0;
 else return a + funcaox(a-1);
}//funcaox
*/

int funcaox(int a){
    if(a <= 0){
        return 0;
    }else{
        return a + funcaox(a-1);
    }
}

int funcaoxx(int a){
    int resultado = 0;
    while(a > 0){
        resultado = resultado + a;
        a--;
    }

    return resultado;
}

int main(){

    int a;

    printf("Digite a: ");
    scanf("%i", &a);

    funcaox(a);
    funcaoxx(a);

    printf("Resultado: %i\n", funcaox(a));
    printf("Resultado: %i\n", funcaoxx(a));

    return 0;
}