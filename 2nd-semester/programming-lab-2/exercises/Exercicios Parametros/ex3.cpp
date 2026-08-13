/*Faça um programa contendo uma função que receba por passagem de parâmetro cinco
valores inteiros e que determina o maior e o menor entre eles. O maior e o menor valor
devem ser apresentados na função principal do programa.*/

#include <iostream>
using namespace std;

// Função que localiza o maior numero
int maior(int vetor[5])
{
    int maior = vetor[0];

    // Laço para verificar qual é o maior numero
    for (int i = 0; i < 5; i++)
    {
        if(vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }

    return maior;
}

// Função que busca o menor numero
int menor(int vetor[5])
{
    int menor = vetor[0];

    // Laço para verificar qual é o menor numero
    for (int i = 0; i < 5; i++)
    {
        if(vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }

    return menor;  
}


int main ()
{
    int lista[5]; // Vetor para armazenar os 5 numeros

    // Laço para leitura dos numeros inteiros
    for(int i = 0; i < 5; i++)
    {
        cout << "Digite o " << i + 1 << " numero: ";
        cin >> lista[i];
    }

    cout << "Maior numero: " << maior(lista) << endl;
    cout << "Menor numero: " << menor(lista) << endl;
    cout << "\n\n";

    return 0;
}