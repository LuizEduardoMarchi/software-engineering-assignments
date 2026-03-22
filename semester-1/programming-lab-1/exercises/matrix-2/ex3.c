#include <stdio.h>

void main ()
{
    int n;
    int i, j;
    int n_linhas = 0;
    int n_colunas = 0;
    int nula;
    printf("\nInforme a qtde de linhas e de colunas das matriz A : ");
    scanf("%d", &n);
    int A[n][n];
    printf("\nInforme os valores da Matrizes A\n");
    for(i = 0; i < n; i++){
        printf("\nLinha %d : \n", i+1);
        for(j = 0; j < n; j++)
        {
            printf("   Coluna %d : ", j+1);
            scanf("%d", &A[i][j]);
        }
    }
    for(i = 0; i < n; i++){
        j = 0;
        nula = 1;
        while(nula == 1 && j < n)
        {
            if(A[i][j] != 0)
                nula = 0;
            j++;
        }
        if(nula == 1)
            n_linhas++;
        j = 0;
        nula = 1;
        while(nula == 1 && j < n){
            if(A[j][i] != 0)
                nula = 0;
            j++;
        }
        if(nula == 1)
            n_colunas++;
    }
    printf("\n\nNumero de Linhas Nulas da Matriz : %d", n_linhas);
    printf("\n\nNumero de Colunas Nulas da Matriz : %d\n\n", n_colunas);
}

