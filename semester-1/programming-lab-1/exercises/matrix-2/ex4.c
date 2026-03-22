#include <stdio.h>
const int n = 4;

void main (){
    int Tabuleiro[n][n];
    int n_peca[7];
    printf("\nInforme as pecas para o tabuleiro de xadrez\n");
    printf("\n 1 - Peoes\n 2 - Torres\n 3 - Reis\n 4 - Cavalos\n 5 - Bispos\n 6 - Rainhas\n 7 - Ausencia de Peca\n\n");
    for(int i = 0; i < n; i++){
        printf("\nLinha %d : \n", i+1);
        for(int j = 0; j < n; j++){
            do{
                printf("   Coluna %d : ", j+1);
                scanf("%d", &Tabuleiro[i][j]);
                if(Tabuleiro[i][j] < 1 || Tabuleiro[i][j] > 7)
                    printf("\nEsta peca nao existe, favor informe novamente\n\n");
            }while(Tabuleiro[i][j] < 1 || Tabuleiro[i][j] > 7);
        }
    }
    for(int i = 0; i < 7; i++)
        n_peca[i] = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            n_peca[Tabuleiro[i][j]-1]++;
    }
    printf("\nQtde de Peoes : %d", n_peca[0]);
    printf("\nQtde de Torres : %d", n_peca[1]);
    printf("\nQtde de Reis : %d", n_peca[2]);
    printf("\nQtde de Cavalos : %d", n_peca[3]);
    printf("\nQtde de Bispos : %d", n_peca[4]);
    printf("\nQtde de Rainhas : %d", n_peca[5]);
    printf("\nQtde de Pecas Ausentes : %d\n\n", n_peca[6]);
}

