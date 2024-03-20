/**
 * @brief 
 * @author 'Leonardo Vieira Tanamura'
 * @date 06/03/2024
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
Na tarde de ontem, 06 de dezembro, alguns servidores da Amazon (AWS) pararam de funcionar.
Com isso, diversos serviços ficaram indisponíveis. Dentre eles, os servidores da Riot responsáveis pelos jogos League of Legends, Valorant e Wild Rift.


Você foi convocado em uma missão de emergência para ajudar a identificar os locais das falhas e reestabelecer os serviços.

Para isso, faça um programa que armazene os dados de 5 cidades onde estão localizados os servidores com problemas, cada cidade possui: 
nome (20 caracteres), quantidade de servidores ativos(inteiro), quantidade de servidores com problemas (inteiro) e quantidade total de servidores(inteiro).

Para isso, faça:

a) Faça um programa que receba os dados das 5 cidades: nome(strings), 
a quantidade de servidores ativos e a quantidade de servidores com falha ( salvos nas duas primeiras colunas de uma matriz de inteiros 5x3). 
Os valores não podem ser negativos, solicite novos valores enquanto o usuário digite valores inválidos.

b) Utilizando estruturas de repetição, calcule a quantidade total de servidores em cada cidade e salve na última coluna da matriz;

c) Exiba em formato de tabela (com colunas alinhas separadas por | ) os nomes, as 3 quantidades de servidores de todos as cidades.

d) Receba um nome de uma cidade e busque ela na lista, todos os dados de seus servidores (apenas 1 vez). 
Exiba uma mensagem informando também caso não encontre o nome buscado.

e) Exiba o nome da cidade e a porcentagem da cidade que tem o maior percentual de servidores com problemas (duas casas decimais).

f) Utilizando estrutura de repetição, calcule e exiba o percentual total de servidores ativos e de servidores com problemas.

g) Acrescente o texto "Defeated" ao final da string do nome todas as cidades que têm o número de servidores com problemas maiores que os servidores ativos. 
Em seguida exiba o nome de todas as cidades (alteradas ou não).
Ex: "São Paulo" -> "São Paulo Defeated"

Obs.:

Os itens devem ser executados sequencialmente (Não é um menu);
Para obtenção da nota máxima, faça cada item, de A a G, em uma função separada. Não utilize variáveis globais.
Sempre que possível, utilize estruturas de repetição;
Bônus do Professor:

Por estar se esforçando e cursando uma universidade em um ano de pandemia, 
você acumulou Influence Points (IP) com o professor. 
Com isso, você ganhou o bônus de escolher, obrigatoriamente, um dos itens de "C" a "G" para ser eliminado da questão. Indique o item eliminado com um comentário em seu código
*/

int main(){
    
    char Servidores[5][21];
    int Status[5][3];
    char Busca[21];
    int Limite = 0;
    float ServidorDefeituoso = 0;
    float ServidorFuncional = 0;
/*
    a) Faça um programa que receba os dados das 5 cidades: nome(strings), 
    a quantidade de servidores ativos e a quantidade de servidores com falha ( salvos nas duas primeiras colunas de uma matriz de inteiros 5x3). 
    Os valores não podem ser negativos, solicite novos valores enquanto o usuário digite valores inválidos.
    b) Utilizando estruturas de repetição, calcule a quantidade total de servidores em cada cidade e salve na última coluna da matriz;
*/

    for(int i = 0; i < 5; i++){
        printf("Digite o nome da %i cidade: ", i+1);
        fgets(Servidores[i], 21, stdin);
        Servidores[i][strcspn(Servidores[i], "\n")] = '\0';
        setbuf(stdin, NULL);
        printf("Digite o número de servidores ativos na cidade: ");
        scanf("%i", &Status[i][0]);
        while(Status[i][0] > 999 || Status[i][0] < 0){
            printf("Digite o número de servidores ativos na cidade: ");
            scanf("%i", &Status[i][0]);
        }
        printf("Digite o número de servidores inativos na cidade: ");
        scanf("%i", &Status[i][1]);
        while(Status[i][1] > 999 || Status[i][1] < 0){
            printf("Digite o número de servidores inativos na cidade: ");
            scanf("%i", &Status[i][1]);
        }
        Status[i][2] = Status[i][0] + Status[i][1];
        setbuf(stdin, NULL);

    } // RECEBE O NOME DAS CIDADES E SERVIDORES.

/*
    c) Exiba em formato de tabela (com colunas alinhas separadas por | ) os nomes, as 3 quantidades de servidores de todos as cidades.
*/

    system("clear");
    printf("%-20s | %-3s | %-3s | %s \n", "Servidores", "ON", "OFF", "TOTAL");
    printf("\n");

    for(int i = 0; i < 5; i++){
        printf("%-20s | %-3i | %-3i  | %i ", Servidores[i], Status[i][0], Status[i][1], Status[i][2]);
        printf("\n");
    }

/*
    d) Receba um nome de uma cidade e busque ela na lista, todos os dados de seus servidores (apenas 1 vez). 
    Exiba uma mensagem informando também caso não encontre o nome buscado.
*/

    printf("Busca: ");
    fgets(Busca, 21, stdin);
    Busca[strcspn(Busca, "\n")] = '\0';
    setbuf(stdin, NULL);

    for(int i = 0; i <= 5; i++){
        if(strcmp(Servidores[i], Busca) == 0){
            printf("\n");
            printf("%-20s | %-3s | %-3s | %s \n", "Servidores", "ON", "OFF", "TOTAL");
            printf("%-20s | %-3i | %-3i  | %i \n", Servidores[i], Status[i][0], Status[i][1], Status[i][2]);
            Limite = 1;
        }
    }
        
        if(Limite == 0){
            printf("A cidade não foi encontrada!\n");
        }

/*
    e) Exiba o nome da cidade e a porcentagem da cidade que tem o maior percentual de servidores com problemas (duas casas decimais).
*/
    printf("\n");

    for(int i = 0; i < 5; i++){
        if(Status[i][1] > ServidorDefeituoso){
            ServidorDefeituoso = Status[i][1];
        }
    }

    for(int i = 0; i < 5; i++){
        if(Status[i][1] == ServidorDefeituoso){
            printf("%-20s | Possuí o maior percentual com %.2f%% dos servidores inativos\n", Servidores[i], (ServidorDefeituoso/Status[i][2])*100);
        }
    }

/*
    f) Utilizando estrutura de repetição, calcule e exiba o percentual total de servidores ativos e de servidores com problemas.
*/

    printf("\n");
    printf("%-20s | %-6s | %-6s | %s \n", "Servidores", "ON", "OFF", "TOTAL");

    for(int i = 0; i < 5;i++){
        ServidorDefeituoso = Status[i][1];
        ServidorFuncional = Status[i][0];
        printf("%-20s | %.2f%% | %.2f%% | 100%%\n", Servidores[i], (ServidorFuncional/Status[i][2])*100,(ServidorDefeituoso/Status[i][2])*100);
    }


    // EXERCICIO G RETIRADO...

    return 0 ;
}