#include <stdio.h>

void main (){
    int n1, n2, resto, aux;
    printf("\nInforme o primeiro numero: ");
    scanf("%d", &n1);
    printf("\nInforme o segundo numero: ");
    scanf("%d", &n2);
    if(n1 < n2){
        aux = n1;
        n1 = n2;
        n2 = aux;
    }
    resto = n1 % n2;
    while(resto != 0){
        n1 = n2;
        n2 = resto;
        resto = n1 % n2;
    }
    printf("\nMDC dos numeros: %d\n\n", n2);
}
