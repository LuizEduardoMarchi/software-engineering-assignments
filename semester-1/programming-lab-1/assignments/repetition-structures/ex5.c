/*inclusçao de bibliotecas*/
#include <stdio.h>
#include <locale.h>
void main(){//define a função principal
    setlocale(LC_ALL,"portuguese");//inclui a biblioteca de caracteres especiais em portugues
    int i,max,face,face1=0,face2=0,face3=0,face4=0,face5=0,face6=0;//declaração de variaveis, numero de faces e contador

    printf("Digite o valor dos 15 lancamentos (valores de 1 a 6)\n");
    for (i = 0; i < 15; i++) {//Laço de coleta do numero de lançamentos
        do {
            printf("Lancamento %d: ", i + 1);
            scanf("%d", &face);//faz a leitura da face do dado
            if (face<1||face>6){//testa se o valor digitado esta dentro do intervalo
                printf("Valor invalido. Digite um numero de 1 a 6.\n");
            }
        } while (face<1||face>6);//repete o laço até que uma entrada de dados seja valida

        /*Contagem de ocorrências*/
        switch (face) {
            case 1:
                face1++;//Adiciona mais 1 para face 1
                break;
            case 2:
                face2++;//Adiciona mais 1 para face 2
                break;
            case 3:
                face3++;//Adiciona mais 1 para face 3
                break;
            case 4:
                face4++;//Adiciona mais 1 para face 4
                break;
            case 5:
                face5++;//Adiciona mais 1 para face 5
                break;
            case 6:
                face6++;//Adiciona mais 1 para face 6
                break;
        }
    }

    // Exibe contagem de cada face
    printf("\nOcorrencias de cada face:\n");
    printf("Face 1: %d vezes\n", face1);
    printf("Face 2: %d vezes\n", face2);
    printf("Face 3: %d vezes\n", face3);
    printf("Face 4: %d vezes\n", face4);
    printf("Face 5: %d vezes\n", face5);
    printf("Face 6: %d vezes\n", face6);
}
