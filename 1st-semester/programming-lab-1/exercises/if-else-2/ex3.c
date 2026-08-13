#include <stdio.h>
#include <locale.h>
void main (){
    setlocale(LC_ALL,"portuguese");
    int n1,n2,n3;
    printf("Digite um primeiro numero inteiro:");
    scanf("%d", &n1);
    printf("Digite um Segundo numero divergente inteiro:");
    scanf("%d", &n2);
    printf("Digite um Terceiro numero divergente inteiro:");
    scanf("%d", &n3);
    if(n1<n2&&n1>n3)||(n1<n3&&n1<n2){
        printf("O Numero intermediario é PRI:%d", n1);
    }else
        if(n2<n1&&n2>n3)||(n2>n1&&n2<n3){
            printf("O numero intermediario é o SEG:%d", n2);

        }else
            printf("O numero intermediario é o TERC:%d", n3);

}
