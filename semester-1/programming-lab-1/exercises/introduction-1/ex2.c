#include <stdio.h>

int main(void)
{
    int numero;

    printf("Digite qualquer número inteiro: ");
    scanf("%d", &numero);

    // Exibe o quadrado do número
    printf("O quadrado de %d é: %d\n", numero, numero * numero);

    return 0;
}