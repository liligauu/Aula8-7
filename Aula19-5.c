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

    /*
    Universidade Tecnologica Federal Do Parana  
    dade
    */

    int tamanho1, tamanho2;
    int i = 0, j = 0;

    tamanho1 = strlen(str1);
    tamanho2 = strlen(str2);

    while(i < tamanho1 && j < tamanho2){
        if(*(str2 + j) == *(str1 + i)){
            printf("%c, %c\n", *(str1 + i), *(str2 + j));
            i++;
            j++;
        }else{
            i++;
        }    
    }

    return;

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
