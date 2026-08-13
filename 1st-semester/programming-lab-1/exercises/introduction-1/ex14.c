#include <stdio.h>

int main(void)
{
    float comprimento, largura, area;
    float area_por_lata;
    float razao;
    float valor_total;
    int qtd_latas;

    printf("Digite o comprimento da area a ser pintada: ");
    scanf("%f", &comprimento);

    printf("Digite a largura da area a ser pintada: ");
    scanf("%f", &largura);

    // Calcula a area total a ser pintada
    area = comprimento * largura;

    // Calcula quantos metros quadrados uma lata de tinta consegue pintar
    area_por_lata = 3.6 * 13;

    // Calcula a razao entre a area total e a area coberta por uma lata
    razao = area / area_por_lata;

    // Pega apenas a parte inteira da razao
    qtd_latas = (int)razao;

    // Se existir parte decimal, adiciona mais uma lata
    if (razao > qtd_latas)
    {
        qtd_latas++;
    }

    // Calcula o valor total a ser pago
    valor_total = qtd_latas * 25.0;

    printf("\nArea total: %.2f m2\n", area);
    printf("Quantidade de latas necessarias: %d\n", qtd_latas);
    printf("Valor total: R$ %.2f\n\n", valor_total);

    return 0;
}
