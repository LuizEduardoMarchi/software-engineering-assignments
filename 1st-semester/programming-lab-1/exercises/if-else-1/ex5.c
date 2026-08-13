#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    int num;
    printf("Digite um numero inteiro:");
    scanf("%f", &num);
    if(num % 3==0)
        printf("Numero divisivel por 3");
    else
        printf("Numero nao divisivel por 3");
}
