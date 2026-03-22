#include <stdio.h>

int main(void)
{
    float fahrenheit, celsius;

    printf("Digite a temperatura em fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Converte fahrenheit para celsius
    celsius = (fahrenheit - 32.0) / 1.8;

    // Exibe o resultado
    printf("A temperatura %.1f fahrenheit em celsius e: %.1f\n", fahrenheit, celsius);

    return 0;
}