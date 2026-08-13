/*inclusçao de bibliotecas*/
#include <stdio.h>
#include <locale.h>
void main(){//define a função principal
    setlocale(LC_ALL,"portuguese");//inclui a biblioteca de caracteres especiais em portugues
    int idade,idadem=0;//variaveis de idade e idade maior
    for(;idade!=0;){//laço de leitura de idade ate que seja digitado 0 para parar a execução
        printf("Digite sua idade:");
        scanf("%d",&idade);//leitura da idade
        if(idade>idadem)//testa se a idade digitada é a maior idade que ja foi digitada
            idadem=idade;//atribuição de idade maior
    }
    printf("A maior idade é:%d", idadem);//mostra ao usuario qual é a maior idade
}
