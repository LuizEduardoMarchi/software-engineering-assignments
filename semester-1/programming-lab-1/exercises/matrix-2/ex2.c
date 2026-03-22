#include <stdio.h>

void main (){
    int n;
    int i, j;
    int soma_linha;
    int soma_coluna;
    int soma_principal;
    int soma_secundaria;
    int magico = 1;
    printf("\nInforme a qtde de linhas e de colunas das matriz A : ");
    scanf("%d", &n);
    int A[n][n];
    printf("\nInforme os valores da Matrizes A\n");
    for(i = 0; i < n; i++){
        printf("\nLinha %d : \n", i+1);
        for(j = 0; j < n; j++){
            printf("   Coluna %d : ", j+1);
            scanf("%d", &A[i][j]);
        }
    }
    soma_principal = 0;
    for(int i = 0; i < n; i++)
        soma_principal = soma_principal + A[i][i];
    soma_secundaria = 0;
    for(int i = 0; i < n; i++)
        soma_secundaria = soma_secundaria + A[i][n-i-1];
    if(soma_principal != soma_secundaria)
        magico = 0;
    i = 0;
    while(magico == 1 && i < n){
        soma_linha = 0;
        for(int j = 0; j < n; j++)
            soma_linha = soma_linha + A[i][j];
        soma_coluna = 0;
        for(int j = 0; j < n; j++)
            soma_coluna = soma_coluna + A[j][i];
        if(soma_linha != soma_principal || soma_coluna != soma_principal)
            magico = 0;
        i++;
    }
    if(magico == 1)
        printf("\nA matriz A eh um quadrado magico\n\n");
    else
        printf("\nA matriz A nao ehn um quadrado magico\n\n");
}

