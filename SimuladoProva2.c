#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
Na tarde de ontem, 06 de dezembro, alguns servidores da Amazon (AWS) pararam de funcionar.
Com isso, diversos serviços ficaram indisponíveis. Dentre eles, os servidores da Riot responsáveis pelos jogos League of Legends, Valorant e Wild Rift.

Você foi convocado em uma missão de emergência para ajudar a identificar os locais das falhas e reestabelecer os serviços.

Para isso, faça um programa que armazene os dados de 5 cidades onde estão localizados os servidores com problemas, cada cidade possui: nome (20 caracteres),
quantidade de servidores ativos(inteiro), quantidade de servidores com problemas (inteiro) e quantidade total de servidores(inteiro).

a) Faça um programa que receba os dados das 5 cidades: nome(strings), a quantidade de servidores ativos
   a quantidade de servidores com falha (salvos nas duas primeiras colunas de uma matriz de inteiros 5x3).
   Os valores não podem ser negativos, solicite novos valores enquanto o usuário digite valores inválidos.
b) Utilizando estruturas de repetição, calcule a quantidade total de servidores em cada cidade e salve na última coluna da matriz;
c) Exiba em formato de tabela (com colunas alinhas separadas por | ) os nomes,
   as 3 quantidades de servidores de todos as cidades.
d) Receba um nome de uma cidade e busque ela na lista, todos os dados de seus servidores (apenas 1 vez).
   Exiba uma mensagem informando também caso não encontre o nome buscado.
e) Exiba o nome da cidade e a porcentagem da cidade que tem o maior percentual de servidores com problemas (duas casas decimais).
f) Utilizando estrutura de repetição, calcule e exiba o percentual total de servidores ativos e de servidores com problemas.
g) Acrescente o texto "Defeated" ao final da string do nome todas as cidades que têm o número de servidores com problemas maiores que os servidores ativos.
   Em seguida exiba o nome de todas as cidades (alteradas ou não).
   Ex: "São Paulo" -> "São Paulo Defeated"

Obs.:
Sempre que possível, utilize estruturas de repetição;
Os itens devem ser executados sequencialmente (Não é um menu);

Treino Extra:
Faça cada item, de A a G, em uma função separada. Não utilize variáveis globais.
*/

int main()
{

    char cidade[5][21];
    int servidores[5][3];
    int tamanhostrings;

    /*
    a) Faça um programa que receba os dados das 5 cidades: nome(strings), a quantidade de servidores ativos
    a quantidade de servidores com falha (salvos nas duas primeiras colunas de uma matriz de inteiros 5x3).
    Os valores não podem ser negativos, solicite novos valores enquanto o usuário digite valores inválidos.
    b) Utilizando estruturas de repetição, calcule a quantidade total de servidores em cada cidade e salve na última coluna da matriz;
    c) Exiba em formato de tabela (com colunas alinhas separadas por | ) os nomes,
   as 3 quantidades de servidores de todos as cidades.
    */

    for (int i = 0; i < 5; i++){
        printf("Digite o nome da cidade: ");
        fgets(cidade[i], 21, stdin);
        cidade[i][strcspn(cidade[i], "\n")] = '\0';
        setbuf(stdin, NULL); // ARMAZENA CIDADES...

        printf("Quantos servidores ativos? ");
        scanf("%i", &servidores[i][0]);
        setbuf(stdin, NULL);
        
        while(servidores[i][0] < 0){
            printf("Quantos servidores ativos? ");
            scanf("%i", &servidores[i][0]);
            setbuf(stdin, NULL);
        }
    
        printf("Quantos servidores inativos? ");
        scanf("%i", &servidores[i][1]);
        setbuf(stdin, NULL);

        while(servidores[i][1] < 0){
            printf("Quantos servidores inativos? ");
            scanf("%i", &servidores[i][1]);
            setbuf(stdin, NULL);
        }

        servidores[i][2] = servidores[i][0] + servidores[i][1];

        }
            
    for(int i = 0; i < 5; i++){
            printf("%c |", cidade[i]);
            printf(" %i |", servidores[i][0]);
            printf(" %i |", servidores[i][1]);
            printf(" %i |", servidores[i][2]);
            printf("\n");
    }

    }
