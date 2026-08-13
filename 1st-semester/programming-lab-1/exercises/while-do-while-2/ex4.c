#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    int i,n,soma;
    printf("Digite um numero a ser verificado:");
    scanf("%d", &n);
    i=1;
    soma=0;
    if(n<=0){
        printf("Digite outro numero maior que 0:");
        scanf("%d", &n);
        }
    while(i<n){
        if(n%i==0){
            soma+=i;
            }
        i++;
    }
    if(soma==n)
        printf("Numero perfeito!");
    else
        printf("Numero nao perfeito!");
}

