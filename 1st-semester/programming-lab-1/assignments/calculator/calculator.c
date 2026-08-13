/*inclusão de bibliotecas*/
#include <stdio.h>
#include <locale.h>

void main(){//Função Principal
    setlocale(LC_ALL, "portuguese");//inclusão da função de caracteres especiais
    /*inclusão de variaveis*/
    int op,cont=0, fim;
    float n1,n2,res;

    do{
        printf("\n0 – Sair \n1 – Adição \n2 – Subtração \n3 – Multiplicação \n4 – Divisão \n5 – Potenciação \nTipo de operação:");
        scanf("%d", &op);//leitura do tipo de operação
        if(op>=1&&op<=5){//testa se o valor é diferente de zero e diferente de cinco
                if(op!=5)//testa se operação é diferente de cinco(caso seja sera requisitado ao usuario o primeiro valor e o valor a ser elevado dentro da estrutura case 5)
                    {
                    printf("\nDigite o primeiro número:");
                    scanf("%f", &n1);//Leitura do primeiro numero
                    printf("\nDigite o segundo número:");
                    scanf("%f", &n2);//Leitura do segundo numero
                    }
            switch (op){//seleciona o tipo de operação e faz o calculo
                case 1:
                    res=n1+n2;//Soma o primeiro numero com o segundo
                    printf("\nO resultado entre %.2f + %.2f = %.2f\n",n1,n2, res);//exibe o resultado na tela do usuario
                break;
                case 2:
                    res=n1-n2;//Subtrai o primeiro numero com o segundo
                    printf("\nO resultado entre %.2f - %.2f = %.2f\n",n1,n2, res);//exibe o resultado na tela do usuario
                break;
                case 3:
                    res=n1*n2;//Multiplica o primeiro numero com o segundo
                    printf("\nO resultado entre %.2f * %.2f = %.2f\n",n1,n2, res);//exibe o resultado na tela do usuario
                break;
                case 4:
                    while(n2==0){//Testa o segundo numero até que seja diferente de zero
                        printf("Numero de divisor invalido, Digite um numero maior que zero:");
                        scanf("%f", &n2);
                    }
                    res=n1/n2;
                    printf("\nO resultado entre %.2f / %.2f = %.2f\n",n1,n2, res);//exibe o resultado na tela do usuario
                break;
                case 5:
                    printf("\nDigite um número:");
                    scanf("%f", &n1);//faz a leitura do primeiro numero
                    printf("\nDigite o numero a ser elevado:");
                    scanf("%f", &n2);//faz a leitura do numero a ser elevado
                    res=1;
                    cont=1;
                    while(cont<=n2){//Faz a repetição do calculo até que o resultado seja atingido
                        res = res * n1;
                        cont++;
                    }
                    printf("\nO resultado entre %.2f ^ %.2f = %.2f\n",n1,n2,res);//exibe o resultado na tela do usuario
                break;
            }
        }else
        if(op!=0){//testa se operação é diferente de zero(terminar operação) caso nenhuma das opçôes validas sejam digitadas
            printf("\nOperação Invalida!\n");//exibe na tela operação invalida caso nenhuma das opções validas sejam digitadas
        }
        if(op==0)//testa se o usuario deseja finalizar a operação
            printf("\nOperação Finalizada!\n\n");//mostra operação finalizada na tela do usuario
    }while(op!=0);//executa o laço até que o tipo de operação seja igual a zero
}
