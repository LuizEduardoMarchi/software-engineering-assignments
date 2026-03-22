#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int litros;
    float v_pg;
    printf("Digite o numero de litros abastecidos:");
    scanf("%d", &litros);
    if(litros<20)
        v_pg=litros*5.184;
    else
        v_pg=litros*5.076;
    printf("O valor a ser pago por %d de gasolina é:%.2f",litros,v_pg);
}
