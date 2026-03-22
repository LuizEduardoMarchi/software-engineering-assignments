#include <stdio.h>
const int n = 4;

void main (){
    int Patio[n][n];
    int n_material[7];
    printf("\n--- Informe os valores para cada espaco do patio da empresa ---\n");
    printf("\nOs valores devem ser compostos de 3 algarismos - (Os dois primeiros indicam a \nqtde de itens do material e o ultimo indica o codigo do material. \nPara informar um espaco vazio no patio digite 000\n");
    printf("\n\n ## Codigo de cada material ##\n");
    printf("\n   1 - Cimento\n   2 - Areia\n   3 - Tubos\n   4 - Concreto\n   5 - Madeira\n   6 - Cal\n   7 - Saibro\n\n");
    for(int i = 0; i < n; i++){
        printf("\nLinha %d : \n", i+1);
        for(int j = 0; j < n; j++){
            do{
                printf("   Coluna %d : ", j+1);
                scanf("%d", &Patio[i][j]);

                if(Patio[i][j]%10 < 0 || Patio[i][j]%10 > 7)
                    printf("\nEste material nao existe, favor informe novamente\n\n");

            }while(Patio[i][j]%10 < 0 || Patio[i][j]%10 > 7);
        }
    }
    for(int i = 0; i < 7; i++)
        n_material[i] = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            n_material[(Patio[i][j]%10)-1] = n_material[(Patio[i][j]%10)-1] + Patio[i][j]/10;
    }

    printf("\nQtde de elementos de cada material\n");
    printf("\nQtde de Cimento : %d", n_material[0]);
    printf("\nQtde de Areia : %d", n_material[1]);
    printf("\nQtde de Tubos : %d", n_material[2]);
    printf("\nQtde de Concreto : %d", n_material[3]);
    printf("\nQtde de Madeira : %d", n_material[4]);
    printf("\nQtde de Cal : %d", n_material[5]);
    printf("\nQtde de Saibro : %d\n\n", n_material[6]);
}

