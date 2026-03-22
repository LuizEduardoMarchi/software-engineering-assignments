#include <stdio.h> //Declaração de biblioteca
#include <locale.h> //Declaração de biblioteca
#define tam 4 //Define tamanho 4 para a matriz

int main(){ //Função Principal
    setlocale(LC_ALL, "portuguese"); //Inclusçao da biblioteca de caracteres especiais

    int matriz[tam][tam]; //Matriz inteira tamanho 4x4
    int i; //Variavel contadoras
    int itinerario[8]; //vetor para os custos do itinerario
    int total = 0; //variavel de soma total do itinerario

    //Atribuição de valores para matriz
    matriz[0][0] = 4;
    matriz[0][1] = 1;
    matriz[0][2] = 2;
    matriz[0][3] = 3;
    matriz[1][0] = 5;
    matriz[1][1] = 2;
    matriz[1][2] = 1;
    matriz[1][3] = 400;
    matriz[2][0] = 2;
    matriz[2][1] = 1;
    matriz[2][2] = 3;
    matriz[2][3] = 8;
    matriz[3][0] = 7;
    matriz[3][1] = 1;
    matriz[3][2] = 2;
    matriz[3][3] = 5;

    //Atribuição de valores para itinerario
    itinerario[0] = 0;
    itinerario[1] = 3;
    itinerario[2] = 1;
    itinerario[3] = 3;
    itinerario[4] = 3;
    itinerario[5] = 2;
    itinerario[6] = 1;
    itinerario[7] = 0;


    //Laço de soma dos valores
    for(i = 0; i < 7; i++){
        total += matriz[itinerario[i]][itinerario[i+1]];
    }

    //Exibe o resultado
    printf("\nO custo total do itinerario é:%d\n\n", total);

    return 0;
}
