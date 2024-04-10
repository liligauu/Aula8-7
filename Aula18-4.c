#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
4) Faça uma função recursiva que retorne o n-ésimo termo da sequência de
Fibonacci, sendo que n é recebido por parâmetro. Utilize essa função para
desenvolver um programa que mostre no main() os n termos dessa
sequência na tela, a partir do valor de n recebido pelo teclado. Sabe-se que
o 1º termo é 0 e o 2º termo é 1.
*/

int Fibonacci(int n){
    if(n == 0){
        return 1;
    }else if(n == 1){
        return n;
    }else{
        int valor = Fibonacci(n - 1) + Fibonacci(n - 2);
        return valor;
    }
}

int main(){

    int n = 0;

    printf("Digite o valor para calcular sua Fibonnaci: ");
    scanf("%i", &n);

    printf("O Fibonnaci de %i, é = %i", n, Fibonacci(n));
}