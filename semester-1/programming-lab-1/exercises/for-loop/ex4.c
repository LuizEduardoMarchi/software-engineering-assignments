#include <stdio.h>

void main ()
{
    int qtde_prod, caix_extr, caix_gran, caix_med, caix_peq;
    printf("\nInforme uma s�rie de quantidades do produto a ser transportado. Para sair digite ZERO\n");
    printf("\nDigite a quantidade do produto: ");
    scanf("%d", &qtde_prod);
    while(qtde_prod != 0)
    {
        caix_extr = qtde_prod / 50;
        caix_gran = (qtde_prod % 50) / 20;
        caix_med = ((qtde_prod % 50) % 20) / 5;
        caix_peq = ((qtde_prod % 50) % 20) % 5;
        printf("\nTotal utilizado de cada tamanho de caixa:");
        printf("\nCaixa Extra-grande: %d", caix_extr);
        printf("\nCaixa Grande: %d", caix_gran);
        printf("\nCaixa Media: %d", caix_med);
        printf("\nCaixa Pequena: %d", caix_peq);
        printf("\n\nDigite a quantidade do produto: ");
        scanf("%d", &qtde_prod);
    }
    printf("\nPrograma Encerrado!\n");
}
