#include <stdio.h>
#include <locale.h>
void main (){
    setlocale(LC_ALL, "portuguese");
    float result,n;
    int cont=0;
    printf("Digite um numero qualquer");
    scanf("%d", &n);
    while(n!=-99){
            cont=cont+1;
    }
    result=n/cont;
    printf("O resultado é:%f", result);
}
