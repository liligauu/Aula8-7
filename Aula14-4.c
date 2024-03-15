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
    float kW[5];
    int tempoativo[5];
}   Consumo;

int main(){
    Consumo Calculo;
    int Dias = 30;
    int HorasAcumulativas = 0;
    float ConsumoTotal = 0;
    float ConsumoDiario = 0;
    float ConsumoRelativo[5];

    for(int i = 0; i < 5; i++){
        printf("Digite o nome do %iº eletrodoméstico: ", i+1);
        fgets(Calculo.eletrodomestico[i], 15, stdin);
        Calculo.eletrodomestico[i][strcspn(Calculo.eletrodomestico[i], "\n")] = '\0';
        setbuf(stdin, NULL);

        printf("Digite a potência do dispositivo (kW): ");
        scanf("%f", &Calculo.kW[i]);

        printf("Tempo ativo por dia (Horas): ");
        scanf("%i", &Calculo.tempoativo[i]);
        setbuf(stdin, NULL);
    }

    for(int i = 0; i < 5; i++){
        ConsumoTotal = Calculo.kW[i] + ConsumoTotal;
        HorasAcumulativas = Calculo.tempoativo[i] + HorasAcumulativas;
        ConsumoRelativo[i] = (Calculo.kW[i]*Calculo.tempoativo[i]);
    }

    ConsumoTotal = (ConsumoTotal*HorasAcumulativas);
    ConsumoDiario = (ConsumoTotal/Dias);

    printf("%-15s | kW/h\n", "Eletrodoméstico");

    for (int i = 0; i < 5; i++)
    {
        printf("%-16s | %.2fkW/Hora\n", Calculo.eletrodomestico[i], ConsumoRelativo[i]);
    }

    printf("O total de consumo em kW foi de %.2f kW\n", ConsumoTotal);
    printf("A média de consumo diário foi de %.2fkW\n", ConsumoDiario);

    return 0;

}
