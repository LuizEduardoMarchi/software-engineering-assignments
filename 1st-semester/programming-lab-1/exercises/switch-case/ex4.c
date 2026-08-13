#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int cod;
    float valp, valc;
    printf("Digite o codigo do produto:");
    scanf("%d", &cod);
    printf("Digite o valor do produto:");
    scanf("%f", &valp);
    switch(cod)
    {
    case 1001:
        valc=valp*0.78;
    break;
    case 1254:
        valc=valp*0.70;
    break;
    case 1548:
        valc=valp*0.68;
    break;
    case 1687:
        valc=valp*0.63;
    break;
    case 1923:
        valc=valp*0.60;
    break;
    default:
        printf("Codigo do produto invalido!");
        cod=-1;
    }
    if(cod!=-1)
    printf("O valor do produto com desconto é:%.2f",valc);
}
