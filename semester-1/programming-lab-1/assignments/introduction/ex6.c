#include <stdio.h>
void main () {
    float salario_a, contrato1, contrato2, contrato3;
    printf("Digite o seu salario atual:");
    scanf("%f", &salario_a);
    contrato1 = salario_a * 1.07;
    contrato2 = contrato1 * 1.06;
    contrato3 = contrato2 * 1.05;
    printf("\nO Seu salario atual é:%.2f", salario_a);
    printf("\nO salario apos o primeiro ano é:%.2f", contrato1);
    printf("\nO salario apos o segundo ano é:%.2f", contrato2);
    printf("\nO salario apos o terceiro ano é:%.2f", contrato3);


}
