#include <stdio.h>

int main(void)
{
    int horas, minutos, segundos;
    int ins_segundos;
    int resto;

    printf("Digite um valor qualquer em segundos: ");
    scanf("%d", &ins_segundos);

    // Calcula a quantidade de horas
    horas = ins_segundos / 3600;

    // Calcula o resto da divisao das horas
    resto = ins_segundos % 3600;

    // Calcula os minutos restantes
    minutos = resto / 60;

    // Calcula os segundos restantes
    segundos = resto % 60;

    printf("\nHoras: %d", horas);
    printf("\nMinutos: %d", minutos);
    printf("\nSegundos: %d", segundos);

    return 0;
}