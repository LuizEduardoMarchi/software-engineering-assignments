#include <iostream>

using namespace std;

int selectionSort (int vetor[], int n)
{
    int trocas = 0;

    // Loop de ordenacao
    for(int i = 0; i < n; i++)
    {
        int menor_indice = i;

        // Varre o vetor para encontrar o menor valor
        for (int j = i + 1; j < n; j++)
        {

            if(vetor[j] < vetor[menor_indice])
            {
                menor_indice = j;
            }
        }

        // Verificacao para nao fazer a troca de elementos do mesmo indice
        if(menor_indice != i)
        {
            int chave = vetor[i];
            vetor[i] = vetor[menor_indice];
            vetor[menor_indice] = chave;
            trocas++;
        }
    }
    return trocas;
}

int main (void)
{
    int tamanho;

    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    int vetor[tamanho];

    // Loop para coletar todos os valores
    for (int i = 0; i < tamanho; i++)
    {
        cout << "Digite o " << i + 1 << (char)167 << " numero: ";
        cin >> vetor[i];
    }

    int trocas = selectionSort(vetor, tamanho);

    // Loop para imprimir o vetor ordenado
    for (int i = 0; i < tamanho; i++)
    {
        cout << vetor[i] << " ";
    }

    cout << "A quantidade de trocas foi de: " << trocas << endl;

    return 0;
}