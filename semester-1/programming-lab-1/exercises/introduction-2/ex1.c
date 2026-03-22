#include <stdio.h>

int main(void)
{
    int A, B, C;
    int D, R, S;

    printf("Digite o valor para A: ");
    scanf("%d", &A);

    printf("Digite o valor para B: ");
    scanf("%d", &B);

    printf("Digite o valor para C: ");
    scanf("%d", &C);

    // Calcula R = (A + B)^2
    R = (A + B) * (A + B);

    // Calcula S = (B + C)^2
    S = (B + C) * (B + C);

    // Calcula S = (B + C)^2
    D = (R + S) / 2;

    printf("O valor de D e: %d", D);

    return 0;
}