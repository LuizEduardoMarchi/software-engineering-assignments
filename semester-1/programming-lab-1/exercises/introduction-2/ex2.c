#include <stdio.h>

int main(void)
{
    float deposito;
    float poupanca;
    float taxa_juros = 1.06;

    printf("Digite o valor do deposito: R$ ");
    scanf("%f", &deposito);

    // Calcula o valor corrigido com juros de 6 por cento
    poupanca = deposito * taxa_juros;

    printf("\nValor inicial: R$ %.2f", deposito);
    printf("\nValor corrigido apos 1 mes: R$ %.2f \n\n", poupanca);

    return 0;
}