/**
 * @file ExerciciosAula13-5.c
 * @author Leonardo Tanamura (leotanamura@icloud.com)
 * @brief Exercicio 5 Aula 13
 * @date 2023-10-26
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
5) Faça um programa que receba uma frase e depois exiba quantas vezes
cada vogal aparece. Ele deve contar considerando o tamanho da String.
*/

int main (){

    char frase[101];
    int tamanho, a = 0, e = 0, i = 0, o = 0,u = 0;

    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);
    frase[strcspn(frase, "\n")] = '\0';
    setbuf(stdin,NULL);

    tamanho = strlen(frase);

    for(int j = 0; j < tamanho; j++){
        if(frase[j] == 'a' || frase[j] == 'A'){
            a++;
        }
            if(frase[j] == 'e' || frase[j] == 'E'){
                e++;
            }
                if(frase[j] == 'i' || frase[j] == 'I'){
                    i++;
                }
                    if(frase[j] == 'o' || frase[j] == 'O'){
                        o++;
                    }
                        if(frase[j] == 'u' || frase[j] == 'U'){
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