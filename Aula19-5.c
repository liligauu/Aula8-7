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

    char *ptr1 = str1;
    char *ptr2 = str2;
    int encontrou = 0; 

    while(*str1 != '\0'){
        if(*str1 == *str2){
            while(*ptr1 == *ptr1 && *ptr1 != '\0'){
                ptr1++;
                ptr1++;
            }

            if(*ptr1 == '\0'){
                encontrou = 1;
                break;
            }
        }
        str1++;
    }

    if(encontrou){
        printf("A string %s está contida em %s.\n", str2, str1);
    }else{
        printf("A string %s não está contida em %s.\n", str2, str1);
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
