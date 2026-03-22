#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    int n,i,fat;
    fat=1;
    i=1;
    printf("Digite um numero para calcular seu fatorial:");
    scanf("%d",&n);
    while(i<=n){
       fat=fat*i;
       i++;
    };
    printf("O fatorial de %d é:%d", n, fat);
}
