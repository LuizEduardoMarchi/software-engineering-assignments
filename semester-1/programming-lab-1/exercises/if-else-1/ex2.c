#include <stdio.h>
void main (){
    int idade;
    printf("Digite a sua idade:");
    scanf("%d", &idade);
    if(idade >=18)
        printf("maior de idade");
    else
        printf("menor de idade");
}
