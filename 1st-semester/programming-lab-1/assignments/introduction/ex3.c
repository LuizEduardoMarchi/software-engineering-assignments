#include <stdio.h>
void main (){
    float kg, valor_f;
    printf("Digite o peso do seu prato em KG:");
    scanf("%f", &kg);
    valor_f = kg * 60;
    printf("O valor do seu prato eh:%g", valor_f);
}
