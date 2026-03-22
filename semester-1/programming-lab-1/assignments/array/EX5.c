#include <stdio.h> //Declaração de biblioteca
#include <locale.h> //Declaração de biblioteca
#define tam 10 //Define o tamanho do vetor

int main(){ //Função Principal
    setlocale(LC_ALL, "portuguese"); //Inclui a biblioteca de caracteres especiais

    int n[tam]; //Vetor n de tamanho TAM
    int i; //Variavel Contador
    int n_pares = 0; //Variavel da quantidade de numeros pares

    //Laço para ler numeros
    for(i = 0; i < tam; i++){
        printf("Digite o %d° numero:", i+1);
        scanf("%d", &n[i]);
    }

    //Laço para verificar a quantidade de numeros pares dentro do vetor
    for(i = 0; i < tam; i++){
        if(n[i] % 2 == 0)
            n_pares++;
    }
    //Imprime o resultado
    printf("\nExiste %d numeros pares digitados!\n\n", n_pares);

    return 0;
}
