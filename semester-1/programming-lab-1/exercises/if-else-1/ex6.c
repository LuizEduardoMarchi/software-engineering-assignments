#include <stdio.h>
#include <locale.h>

void main (){
    setlocale(LC_ALL, "Portuguese");
    int ano;
    printf("\nInforme o ano: ");
    scanf("%d", &ano);
    if(ano % 4 == 0)
        printf("\nAno Bissexto!");
    else
        printf("\nAno NÃO Bissexto!");
}
