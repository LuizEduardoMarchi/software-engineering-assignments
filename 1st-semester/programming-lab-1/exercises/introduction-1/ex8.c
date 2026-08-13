#include <stdio.h>

int main(void)
{
    float celsius, fahrenheit;

    printf("Digite uma temperatura em celsius: ");
    scanf("%f", &celsius);

    // Converte celsius para fahrenheit
    fahrenheit = celsius * 1.8 + 32.0;

    // Exibe o resultado
    printf("A temperatura %f celsius em fahrenheit e: %f\n", celsius, fahrenheit);

    return 0;
}