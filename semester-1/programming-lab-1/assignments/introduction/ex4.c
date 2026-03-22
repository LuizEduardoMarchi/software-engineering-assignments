#include <stdio.h>
void main (){
    float lata, garrafa, dois_l, soma;
    printf("Digite o numero de latas 350ml:");
    scanf("%f", &lata);
    printf("Digite o numero de garrafas de 600ml:");
    scanf("%f", &garrafa);
    printf("Digite o numero de garrafas de 2 litros:");
    scanf("%f", &dois_l);
    soma = ((((lata * 350)/ 1000) + (garrafa * 600) / 1000) + (dois_l * 2));
    printf("O numero de litros vendidos de refrigerante foi:%f", soma);
}
