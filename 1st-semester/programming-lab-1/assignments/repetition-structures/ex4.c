/*inclusçao de bibliotecas*/
#include <stdio.h>
#include <locale.h>
void main(){//define a função principal
    setlocale(LC_ALL,"portuguese");//inclui a biblioteca de caracteres especiais em portugues
    int n,soma=0;//declaração das variaveis numero e da variavel soma que começa com 0
     do{
        printf("Digite um número (0 para sair): ");
        scanf("%d", &n);//leitura do numero digitado
        if (n%5==0 && n!=0)//testa se o numero é multiplo de cinco e se é diferente de zero
            soma += n;//atribuição da soma dos numeros multiplos de cinco
    }while(n!=0);//laço de contagem de numeros multiplos de 5 ate que o 0 seja digitado para finalizar a execução
    if (soma != 0) {//testa se a soma é diferente de zero
        printf("\n\nO resultado da soma dos números múltiplos de 5 é: %d\n\n", soma);//mostra ao usuario o resultado da soma dos numeros multiplos de cinco
    } else {
        printf("\n\nNenhum número múltiplo de 5 foi digitado!\n\n");//mostra ao usuario que nenhum numero multiplo de cinco foi digitado
    }
}
