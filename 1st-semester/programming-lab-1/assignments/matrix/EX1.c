#include <stdio.h> //Declaração de biblioteca
#include <locale.h> //Declaração de biblioteca
#define tam 4 //Declaração do tamanho das matrizes

int main(){ //Função Principal
    setlocale(LC_ALL,"portuguese"); //Inclusão da biblioteca de caracteres especiais

    float matriz[tam][tam]; //Matriz principal
    float v[tam]; //Vetor para multiplicar a matriz
    float r[tam]; //Vetor de resultado das operações
    int i,j; //Variaveis contadoras para percorrer a matriz

    //Laço para a leitura dos elementos
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("Digite um numero:");
            scanf("%f", &matriz[i][j]);
        }
    }

    //Laço para leitura dos elementos do vetor
    for(i = 0; i < tam; i++){
        printf("Digite o %d° elemento do vetor", i+1);
        scanf("%f", &v[i]);
    }

    //Laço para a multiplicação dos elementos
    for(i = 0; i < tam; i++){
        r[i] = 0;
        for(j = 0; j < tam; j++){
            r[i] += v[j] * matriz[i][j];
        }
    }
    //Laço para mostrar os resultados
    for(i = 0; i < tam; i++){
        printf("O %d° resultado é:%.1f\n", i+1, r[i]);
    }
    printf("\n\n")
    return 0;
}
