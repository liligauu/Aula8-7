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

void Contida(char *str1, char *str2){
    void *ptr1, *ptr2;
    ptr1 = &str1;
    ptr2 = &str2;

    if(ptr1 == ptr2){
        printf("Os ponteiros são iguais!\n");
    }else{
        printf("Os ponteiros são diferentes\n");
    }
}

int main(){
    
    char s1[20];
    char s2[20];

    char *ptr_s1 = s1;
    char *ptr_s2 = s2;

    printf("Digite a primeira string: ");
    leString(ptr_s1, 20);

    printf("Digite a segunda string: ");
    leString(ptr_s2, 20);

    Contida(ptr_s1, ptr_s2);

    return 0;
}