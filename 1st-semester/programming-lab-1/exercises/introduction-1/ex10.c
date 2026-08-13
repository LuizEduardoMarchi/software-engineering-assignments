#include <stdio.h>

int main(void)
{
    float conta, total;

    printf("Digite o valor da conta: ");
    scanf("%f", &conta);

    // Calcula o total incluindo os 10% de gorjeta
    total = conta * 1.10f;

    // Exibe o resultado
    printf("O valor final incluindo os 10%% de gorjeta e: %.2f\n", total);

    return 0;
}