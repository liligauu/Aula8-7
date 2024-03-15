#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
4) Faça um programa que controla o consumo de energia dos
eletrodomésticos de uma casa e:
 Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras),
potência (real, em kW) e tempo ativo por dia (real, em horas).
 Leia um tempo t (em dias), calcule e mostre o consumo total na casa e
o consumo relativo de cada eletrodoméstico (consumo/consumo total)
nesse período de tempo. Apresente este último dado em porcentagem.
*/

typedef struct{
    char eletrodomestico[5][16];
    int kW[5];
    int tempoativo[5];
}   Consumo;

int main(){
    Consumo Calculo;
    int Dias = 30;
    float ConsumoTotal = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite o nome do %iº eletrodoméstico: ", i+1);
        fgets(Calculo.eletrodomestico[i], 15, stdin);
        Calculo.eletrodomestico[i][strcspn(Calculo.eletrodomestico[i], "\n")] = '\0';
        setbuf(stdin, NULL);

        printf("Digite a potência do dispositivo (kW): ");
        scanf("%i", &Calculo.kW[i]);

        printf("Tempo ativo por dia (Horas): ");
        scanf("%i", &Calculo.tempoativo[i]);
        setbuf(stdin, NULL);
    }

    for(int i = 0; i < 5; i++){
        ConsumoTotal = Calculo.kW[i] + ConsumoTotal;
    }

    return 0;

}