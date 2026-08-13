#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "portuguese");
    int n,soma=0,term,cont;
    printf("Digite a quantidade de termos a ser lida:");
    scanf("%d", &term);
    for(cont=0;cont<term;cont++){
        printf("Digite um numero:");
        scanf("%d", &n);
        if(n%2==1)
            soma+=n;
    }
    printf("A soma é:%d", soma);
}
