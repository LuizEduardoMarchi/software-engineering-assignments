#include <stdio.h>

int main(void)
{
    float comprimento, largura, potencia_lampada;
    float area, potencia_necessaria;
    float numero_de_lampadas;

    printf("Digite a potencia da lampada (em watts): ");
    scanf("%f", &potencia_lampada);

    printf("Digite o comprimento do comodo (em metros): ");
    scanf("%f", &comprimento);

    printf("Digite a largura do comodo (em metros): ");
    scanf("%f", &largura);

    // Calcula a area do comodo em metros quadrados
    area = comprimento * largura;

    // Calcula a potencia total necessaria para o comodo
    potencia_necessaria = area * 20.0f;

    // Calcula o numero de lampadas necessarias
    numero_de_lampadas = potencia_necessaria / potencia_lampada;

    // Exibe o resultado
    printf("O numero de lampadas necessarias para iluminar %.2f metros quadrados e: %.2f\n", area, numero_de_lampadas);

    return 0;
}