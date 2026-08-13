#include <stdio.h>

int main(void)
{
    float numero_um, numero_dois;

    printf("Digite o primeiro numero real: ");
    scanf("%f", &numero_um);

    printf("Digite o segundo numero real: ");
    scanf("%f", &numero_dois);

    // Exibe os resultados
    printf("O produto de %.2f e %.2f e: %.2f\n", numero_um, numero_dois, numero_um * numero_dois);

    return 0;
}