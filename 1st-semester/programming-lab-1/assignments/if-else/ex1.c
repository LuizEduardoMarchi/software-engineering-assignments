#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    float sal,finan, fina;
    printf("Digite seu salario:");
    scanf("%f", &sal);
    printf("Digite o valor do finaciamento desejado:");
    scanf("%f", &finan);
    fina=sal*5;
    if(finan<=fina)
        printf("O Seu financiamento foi APROVADO!");
    else
        printf("O seu financiamento foi NEGADO");
}
