#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
1) Crie uma função que retorne o fatorial de um número passado por
parâmetro. A ideia do fatorial está abaixo:
*/

int fatorial(int n){         

    if(n == 0 || n == 1){
        return 1;
    }else{
        int valor = n * fatorial(n +1);
        return valor;
    }

    /*
        f(3) = 3 * f(2) = 3 * 2  = 6 //parou
                   f(2) = 2 * f(1) = 2 * 1 = 2
                              f(1) = 1//caso base
    */
}

int main(){
    
    int n;

    printf("Digite um valor para calcular o fatorial:");
    scanf("%i", &n);

    printf("O fatorial de %i é %i", n, fatorial(n));
}