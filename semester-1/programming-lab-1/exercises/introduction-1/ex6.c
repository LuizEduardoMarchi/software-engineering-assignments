#include <stdio.h>

int main(void)
{
    float numero_um, numero_dois, numero_tres; 
    float media, soma;

    printf("Digite o primeiro numero real: ");
    scanf("%f", &numero_um);

    printf("Digite o segundo numero real: ");
    scanf("%f", &numero_dois);

    printf("Digite o terceiro numero real: ");
    scanf("%f", &numero_tres);

    // Soma dos numeros
    soma = numero_um + numero_dois + numero_tres;

    // Media dos numeros
    media = soma / 3;

    // Exibe os resultados
    printf("A soma de %.2f, %.2f e %.2f e: %.2f\n", numero_um, numero_dois, numero_tres, soma);
    printf("A media dos numeros %.2f, %.2f e %.2f e: %.2f\n", numero_um, numero_dois, numero_tres, media);

    return 0;
}