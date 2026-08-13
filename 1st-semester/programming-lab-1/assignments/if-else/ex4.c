#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    int est_a,est_max,est_min;
    float est_med;
    printf("Digite a quantidade do estoque atual:");
    scanf("%d", &est_a);
    printf("Digite a quantidade de estoque maximo:");
    scanf("%d", &est_max);
    printf("Digite a quantida de estoque minimo:");
    scanf("%d", &est_min);
    est_med=(est_max+est_min)/2;
    if(est_a>=est_med)
        printf("Não efetuar compra de novo estoque!");
    else
        printf("Efetuar a compra de novo estoque!");


}
