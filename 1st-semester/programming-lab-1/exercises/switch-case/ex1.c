#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int cod,qnt;
    float v_pg;
    printf("Digite o codigo do produto consumido:");
    scanf("%d", &cod);
    printf("Digite a quantidade consumida:");
    scanf("%d", &qnt);
    switch(cod)
    {
        case 100:
            v_pg= 22,5*qnt;
            break;
        case 101:
            v_pg= 20.5*qnt;
            break;
        case 102:
            v_pg= 34*qnt;
            break;
        case 103:
            v_pg=40*qnt;
            break;
        case 104:
            v_pg=7.5*qnt;
            break;
        default:
            printf("Codigo invalido!");
            cod=-1;
    }
   if(cod!=-1)
    printf("O valor a pagar é:%.2f",v_pg);
}
