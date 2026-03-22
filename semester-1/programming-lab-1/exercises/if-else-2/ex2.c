#include <stdio.h>
#include <locale.h>
void main (){
    setlocale(LC_ALL, "portuguese");
    int n1,n2,n3;
    printf("Digite um primeiro numero inteiro:");
    scanf("%d", &n1);
    printf("Digite um Segundo numero divergente inteiro:");
    scanf("%d", &n2);
    printf("Digite um Terceiro numero divergente inteiro:");
    scanf("%d", &n3);
    if(n1<n2&& n1<n3){
        printf("O Menor numero é:%d",n1);
    }else
        if(n2<n3){
            printf("O Menor numero é:%d", n2);
        }else
            printf("O Menor numero é:%d", n3);
}
