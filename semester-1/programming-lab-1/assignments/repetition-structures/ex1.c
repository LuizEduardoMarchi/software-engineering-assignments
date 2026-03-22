/*inclusçao de bibliotecas*/
#include <stdio.h>
#include <locale.h>
void main(){//define a função principal
    setlocale(LC_ALL,"portuguese");//inclui a biblioteca de caracteres especiais em portugues
    /*Declaração de variaveis como contador, altura maior e altura*/
    int cont,altura_m=0;
    float altura;

    for(cont=1; cont<= 10;cont++){//laço de leitura da altura de 10 pessoas
        printf("\nDigite sua altura em metros (ex: 1,75): ");
        scanf("%f", &altura);//leitura da altura
        if(altura>1.80)//testa se a altura digitada é maior que 1,80
            altura_m++;//atribuição da quantidade de pessoas maiores que 1,80m de altura
    }
    if(altura_m==0){//testa se existe alguem com altura maior que 1,80
        printf("\nNão tem ninguém maior que 1,80m!\n\n");//mostra que não há pessoas com mais de 1,80
    }else
        printf("\n%d pessoa(s) são maiores que 1,80m!\n\n", altura_m);//mostra que há pessoas com mais de 1,80
}
