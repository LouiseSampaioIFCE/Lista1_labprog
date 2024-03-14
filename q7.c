#include <stdio.h>

int main()
{
   float horas, minutos, segundos;
   float tempo_total_segundos;

    printf("Insira uma quantidade de horas: ");
    scanf(" %f", &horas);

    printf("Insira uma quantidade de minutos: ");
    scanf(" %f", &minutos);

    printf("Insira uma quantidade de segundos: ");
    scanf(" %f", &segundos);

    tempo_total_segundos = horas*3600 + minutos*60 + segundos;
    printf("Tempo total: %.1f segundos\n", tempo_total_segundos);
    return 0;
}
