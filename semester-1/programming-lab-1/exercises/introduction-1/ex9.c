#include <stdio.h>

int main(void)
{
    // Usa double para lidar com valores decimais com precisao
    double raio, area;
    double pi = 3.1415927;

    printf("Digite o raio do circulo: ");
    scanf("%lf", &raio);

    // Calcula a area de um circulo dado o seu raio
    area = pi * raio * raio;

    // Exibe o resultado
    printf("A area de um circulo com raio %.2lf e: %.2lf\n", raio, area);

    return 0;
}