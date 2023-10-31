/**
 * @file ExerciciosAula13-7.c
 * @author Leonardo Tanamura (leotanamura@icloud.com)
 * @brief Exercicio 7 Aula 13
 * @date 2023-10-26
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    
    char sigla[3];

    printf("Digite a sigla do estado (SP, RJ, MG, ES, PR, SC, RS): ");
        scanf("%s", sigla);

    for (int i = 0; i < strlen(sigla); i++) {
        sigla[i] = toupper(sigla[i]);
    }

    char* estado;
    
    if (strcmp(sigla, "SP") == 0) {
        estado = "São Paulo";
    } 
        else if (strcmp(sigla, "RJ") == 0) {
            estado = "Rio de Janeiro";
        } 
            else if (strcmp(sigla, "MG") == 0) {
                estado = "Minas Gerais";
            }  
                else if (strcmp(sigla, "ES") == 0) {
                    estado = "Espirito Santo";
                } 
                    else if (strcmp(sigla, "PR") == 0) {
                        estado = "Paraná";
                    } 
                        else if (strcmp(sigla, "SC") == 0) {
                            estado = "Santa Catarina";
                        } 
                            else if (strcmp(sigla, "RS") == 0) {
                                estado = "Rio Grande do Sul";
                            } 
                                else {
                                    printf("Sigla de estado inválida.\n");
                                    return 0;
                                }
    
    printf("O estado referente a sigla %s é %s.\n", sigla, estado);
    
    return 0;
}