#include <stdio.h> //Declaração de bibliotecas
#include <locale.h> //Declaração de bibliotecas
#define tam 10 //Define o tamanho do vetor

int main(){ //Função Principal
    setlocale(LC_ALL, "portuguese"); //Inclusao de caracteres especiais

    int n[tam]; // Vetor de numeros
    int x,i,contador = 0; //Variaveis X, i para contagem e contador para quantidade de numeros igual a x

    //Laço para receber os numeros
    for(i = 0; i < tam; i++){
        printf("Digite o %d° número:", i+1);
        scanf("%d", &n[i]);
    }
    printf("Digite um numero para X:");
    scanf("%d", &x);//Leitura do numero X

    //Laço para verificar quantos numeros igual a x existem dentro do vetor n
    for(i = 0; i < tam; i++){
        if(n[i] == x)
            contador++;
    }
    //Imprime o resultado
    printf("\nExistem %d numeros iguais a %d dentro do vetor!\n\n",contador, x);

    return 0;
}
