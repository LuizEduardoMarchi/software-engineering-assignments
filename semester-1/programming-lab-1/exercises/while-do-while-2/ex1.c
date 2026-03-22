#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    int cont,maior,n;
    cont=0;
    do{
        printf("Digite um numero inteiro:");
        scanf("%d", &n);
        if(n>maior)
            {
            maior=n;
               }
        cont++;
    }while(cont<=10);
    printf("O maior numero é:%d", maior);
}
