#include<stdio.h> 
#define TAM 5

void main ()
{
    char M[TAM];
    float C[TAM];
    int ec, i;
    printf("\nInforme a primeira letra de cinco modelos de carros: \n\n");
    for(i = 0; i < TAM; i++)
    {
        printf("%d%c modelo: ", i+1, 167);
        fflush(stdin);
        scanf("%c", &M[i]);
    }
    printf("\nInforme o consumo (km/l) de cada modelo de carro: \n\n");
    for(i = 0; i < TAM; i++)
    {
        printf("Modelo %c: ", M[i]);
        scanf("%f", &C[i]);
    }
    ec = 0;
    for(i = 1; i < TAM; i++) 
    {
        if(C[i] > C[ec])
            ec = i;
    }
    printf("\nModelo mais economico: %c ", M[ec]);
    printf("\n\nQtde de combustivel que cada modelo consome para percorer 1000 km\n");
    for(i = 0; i < TAM; i++) 
    {
        printf("\nModelo: %c - Litros: %.1f", M[i], (float)1000/C[i]); 
    }
    printf("\n\n");
}
