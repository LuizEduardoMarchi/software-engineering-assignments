/*inclusçao de bibliotecas*/
#include <stdio.h>
#include <locale.h>
void main(){//define a função principal
    setlocale(LC_ALL,"portuguese");//inclui a biblioteca de caracteres especiais em portugues
    int n,cont,soma,par;//declaração de variaveis como, numero, contador, soma, e de numero par
    printf("Digite um numero:");
    scanf("%d", &n);//faz a leitura do numero digitado
    for(cont=1,soma=0;cont<=n;cont++){//laço para calcular a soma dos numeros pares de acordo com a quantidade de termos digitados
        soma+=2;//atribuição de numeros pares
        par=par+soma;//soma dos numeros pares
    }
    printf("O resultado é:%d", par);//mostra ao usuario os numeros pares de acordo com a quantidade de termos
}
