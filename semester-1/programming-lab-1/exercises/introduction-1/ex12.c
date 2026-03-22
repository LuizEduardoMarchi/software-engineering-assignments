#include <stdio.h>

int main(void)
{
    float nota1, nota2, nota3;
    float media_ponderada;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Calcula a media ponderada
    media_ponderada = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10.0f;

    // Exibe o resultado
    printf("A media ponderada de %.2f, %.2f, e %.2f e: %.2f\n", nota1, nota2, nota3, media_ponderada);

    return 0;
}