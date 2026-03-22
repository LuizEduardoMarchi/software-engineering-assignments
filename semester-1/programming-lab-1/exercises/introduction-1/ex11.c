#include <stdio.h>

int main(void)
{
    int total, horas, minutos, segundos;

    printf("Digite as horas: ");
    scanf("%d", &horas);

    printf("Digite os minutos: ");
    scanf("%d", &minutos);

    printf("Digite os segundos: ");
    scanf("%d", &segundos);

    // Calcula quantos segundos sao
    total = (horas * 3600) + (minutos * 60) + segundos;

    // Exibe os resultados
    printf("Se passaram %d segundos desde o inicio do dia.\n", total);

    return 0;
}