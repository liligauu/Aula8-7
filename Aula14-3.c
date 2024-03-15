#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
3) Construa uma estrutura aluno com nome, curso e 4 notas,
média e situação. Leia as informações nome, curso e notas do
teclado, calcule a média e armazene a situação do aluno.
 media ≥ 7 → Aprovado;
 3 ≤ media < 7 → Exame;
 media < 3 → Reprovado;
*/

typedef struct {
    char aluno[31];
    char curso[101];
    float nota[4];
}   Aluno;

int main(){

    Aluno meu_aluno;
    float media = 0;
    
    for(int i = 0; i < 1; i++){
//NOME
    printf("Digite o nome do aluno %i: ", i+1);
    fgets(meu_aluno.aluno, 31, stdin);
    meu_aluno.aluno[strcspn(meu_aluno.aluno, "\n")] ='\0';
    setbuf(stdin,NULL);
//CURSO
    printf("Digite o curso do aluno %i: ", i+1);
    fgets(meu_aluno.curso, 101, stdin);
    meu_aluno.curso[strcspn(meu_aluno.curso, "\n")] ='\0';
    setbuf(stdin,NULL);
//NOTAS
        for(int i = 0; i < 4; i++){
            printf("Digite a %i nota: ", i+1);
            scanf("%f", &meu_aluno.nota[i]);
            while(meu_aluno.nota[i] < 0 || meu_aluno.nota[i] > 10){
                printf("Digite a %i nota: ", i+1);
                scanf("%f", &meu_aluno.nota[i]);
            }
        }
    }

//MÉDIA
    for(int i = 0; i < 4; i++){
        media = meu_aluno.nota[i] + media;
    }

    media = media/4;

    printf("Nome: %s\n", meu_aluno.aluno);
    printf("Curso: %s\n", meu_aluno.curso);

    if(media >= 7){
        printf("Media: %.2f | Aluno Aprovado", media);
    }
    if(media < 7 && media >= 3){
        printf("Media: %.2f | Exame te aguarda!", media);
    }
    if(media < 3){
        printf("Media: %.2f | Aluno Reprovado", media);
    }

    return 0;

}
