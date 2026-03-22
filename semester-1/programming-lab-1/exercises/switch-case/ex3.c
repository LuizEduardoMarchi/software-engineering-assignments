#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    int carg;
    float sal_n,sal_v,diff;
    printf("\nDigite o codigo do cargo:");
    scanf("%d", &carg);
    printf("\nDigite o seu salario atual:");
    scanf("%f", &sal_v);
    switch (carg)
    {
        case 101:
            sal_n=sal_v*1.1;
        break;
        case 102:
            sal_n=sal_v*1.2;
        break;
        case 103:
            sal_n=sal_v*1.3;
        break;
        default:
            sal_n=sal_v*1.4;
    }
    diff=sal_n-sal_v;
    printf("\nO salario antigo é de:%.2f",sal_v);
    printf("\nO salario novo é de:%.2f", sal_n);
    printf("\nA diferença dos salarios é de:%.2f",diff);
}
