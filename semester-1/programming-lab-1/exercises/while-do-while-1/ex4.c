#include <stdio.h>
#include <locale.h>
void main (){
    setlocale(LC_ALL, "portuguese");
    int n,cont;
    cont=0;
    do{
        printf("\nDigite um numero qualquer:");
        scanf("%d", &n);
        if(n%3==0){
            printf("O Numero %d  � divisvel por 3",n);
        }else
            printf("O Numero %d  N�o � divisvel por 3",n);
        cont++;
    }while(cont<=10);
}
