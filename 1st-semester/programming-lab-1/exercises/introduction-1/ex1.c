#include <stdio.h>

int main(void)
{
    int numero;

    printf("Digite qualquer número inteiro: ");
    scanf("%d", &numero);

    // Exibe o dobro do numero
    printf("O dobro de %d é: %d\n", numero, numero * numero);

    return 0;
}