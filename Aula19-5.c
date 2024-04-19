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

    int tamanho1 = strlen(str1);
    int tamanho2 = strlen(str2);
    int match = 0; // Flag to check if the second string is found within the first

    while(*ptr1 != '\0'){
        if(*ptr1 == *ptr2){
            char *temp_ptr1 = ptr1;
            char *temp_ptr2 = ptr2;

            // Compare the characters
            while(*temp_ptr1 == *temp_ptr2 && *temp_ptr2 != '\0'){
                temp_ptr1++;
                temp_ptr2++;
            }

            // If second string is found within first
            if(*temp_ptr2 == '\0'){
                match = 1;
                break;
            }
        }
        ptr1++;
    }

    if(match){
        printf("A segunda string está contida na primeira.\n");
    }else{
        printf("A segunda string NÃO está contida na primeira.\n");
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
