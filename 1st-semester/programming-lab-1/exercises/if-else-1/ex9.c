#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int n1,n2;
    printf("Digite um numero qualquer:");
    scanf("%d", &n1);
    printf("Digite um segundo numero qualquer:");
    scanf("%d", &n2);
   if(n1==n2){
        printf("O Primeiro Numero %d é igual ao Segundo Numero %d", n1,n2);
    }else
        printf("O Primeiro Numero:%d é diferente do Segundo Número:%d", n1,n2);
        if(n1>n2){
            printf("\nO Primeiro Numero:%d é maior que o Segundo Número:%d",n1,n2);
        }else{
            printf("\nO Segundo Número:%d é maior que o Primeiro Número:%d",n2,n1);
            }
}
