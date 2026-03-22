#include <stdio.h>
#include <locale.h>
void main (){
    setlocale(LC_ALL, "portuguese");
    int n1,n2;
    printf("Digite o Primeiro Número:");
    scanf("%d", &n1);
    printf("Digite o Segundo Número:");
    scanf("%d", &n2);
    if(n1%n2==0)
        printf("O valor %d é multiplo de %d", n1,n2);
    else
        printf("O valor %d Não é multiplo de %d", n1,n2);
}
