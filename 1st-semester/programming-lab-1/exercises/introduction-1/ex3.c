#include <stdio.h>

int main(void)
{
    int numero_um, numero_dois;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &numero_um);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &numero_dois);

    // Exibe os resultados
    printf("A soma dos quadrados de %d e %d e: %d\n", numero_um, numero_dois, numero_um * numero_um + numero_dois * numero_dois);

    return 0;
}