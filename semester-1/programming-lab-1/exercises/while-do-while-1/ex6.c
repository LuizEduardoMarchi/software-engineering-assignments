#include <stdio.h>

void main (){
    int n1, n2;
    int res = 0;
    int i = 1;
    printf("\nInforme o primeiro numero: ");
    scanf("%d", &n1);
    printf("\nInforme o segundo numero: ");
    scanf("%d", &n2);
    while(i <= n2){
        res = res + n1;
        i++;
    }
    printf("\nProduto dos numeros: %d\n\n", res);
}
