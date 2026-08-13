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
        case 1001:
            v_pg= 12.32*qnt;
            break;
        case 1324:
            v_pg= 16.45*qnt;
            break;
        case 6548:
            v_pg= 22.37*qnt;
            break;
        case 5987:
            v_pg= 25.32*qnt;
            break;
        case 7623:
            v_pg= 36.45*qnt;
            break;
        default:
            printf("Codigo invalido!");
            cod=-1;
    }
    if(cod!=-1)
    printf("O valor a pagar é:%.2f",v_pg);
}
