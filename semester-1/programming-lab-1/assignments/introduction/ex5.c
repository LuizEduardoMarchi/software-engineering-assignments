#include <stdio.h>
void main () {
    float salario, valortvenda, salario_f;
    printf("Escreva o seu salario:");
    scanf("%f", &salario);
    printf("Escreva o valor total de vendas no mes:");
    scanf("%f", &valortvenda);
    salario_f = ((valortvenda * 0.05) + salario);
    printf("O Seu salario desse mes é:%.2f", salario_f);
}
