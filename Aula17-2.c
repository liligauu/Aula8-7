#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
2) Reescreva o exercício anterior utilizando a estrutura horário
(contendo hora, minuto e segundo) e passando a estrutura por
referência. Utilize o seguinte protótipo da função:
void converteHorario(int total_segundos, Horario* hora)
*/

typedef struct {
    int hora;
    int minuto;
    int segundo;
} Horario;

void converteHorario(int total_segundos, Horario* hora) {
    int resto_horas = 0;

    hora->hora = total_segundos / 3600;
    resto_horas = total_segundos % 3600;
    hora->minuto = resto_horas / 60;
    hora->segundo = resto_horas % 60;

    return;
}

int main() {
    int total_segundos = 0;
    Horario horario;

    printf("Digite os segundos: ");
    scanf("%i", &total_segundos);

    converteHorario(total_segundos, &horario);

    printf("Horário: %02d:%02d:%02d\n", horario.hora, horario.minuto, horario.segundo);

    return 0;
}

