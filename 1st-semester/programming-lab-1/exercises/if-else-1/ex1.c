#include <stdio.h>
void main (){
    int n;
    printf("Escreva o numero a ser verificado:");
    scanf("%d", &n);
     if(n%2==0)
        printf("Numero par");
    else
        printf("Numero impar");
}
