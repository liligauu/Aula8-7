/**
 * @file ExerciciosAula13-5.c
 * @author Leonardo Tanamura (leotanamura@icloud.com)
 * @brief Exercicio 5 Aula 13
 * @date 2023-10-26
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>

/*
5) Faça um programa que receba uma frase e depois exiba quantas vezes
cada vogal aparece. Ele deve contar considerando o tamanho da String.
*/

int main (){

    char frase[101];
    int tamanho, a = 0, e = 0, i = 0, o = 0,u = 0;

    printf("Digite uma frase: ");
    scanf("%100[^\n]", &frase);

    tamanho = strlen(frase);

    for(int i = 0; i < tamanho; i++){
        if(frase[i] == 'a' || frase[i] == 'A'){
            a++;
        }
            if(frase[i] == 'e' || frase[i] == 'E'){
                e++;
            }
                if(frase[i] == 'i' || frase[i] == 'I'){
                    i++;
                }
                    if(frase[i] == 'o' || frase[i] == 'O'){
                        o++;
                    }
                        if(frase[i] == 'u' || frase[i] == 'u'){
                            u++;
                        }
    }

    printf("Foram encontrados %i letras A\n", a);
        printf("Foram encontrados %i letras E\n", e);
            printf("Foram encontrados %i letras I\n", i);
                printf("Foram encontrados %i letras O\n", o);
                    printf("Foram encontrados %i letras U\n", u);

    return 0;

}