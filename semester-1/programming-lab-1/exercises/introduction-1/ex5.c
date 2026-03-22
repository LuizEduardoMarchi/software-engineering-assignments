#include <stdio.h>

int main(void)
{
    float numero_um, numero_dois, media = 0;

    printf("Digite o primeiro numero real: ");
    scanf("%f", &numero_um);

    printf("Digite o segundo numero real: ");
    scanf("%f", &numero_dois);

    media = (numero_um + numero_dois) / 2;

    // Exibe os resultados
    printf("A media de %.2f e %.2f e: %.2f\n", numero_um, numero_dois, media);

    return 0;
}