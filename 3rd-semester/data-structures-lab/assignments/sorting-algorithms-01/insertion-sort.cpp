#include <iostream>

using namespace std;

int insertionSort (int vetor[], int n)
{
    int troca = 0;

    for (int i = 1; i < n; i++)
    {
        int chave = vetor[i];
        int j = i - 1;

        while(j >= 0 && vetor[j] > chave)
        {
            vetor[j + 1] = vetor[j];
            j--;
            troca++;
        }
        vetor[j + 1] = chave;
    }

    return troca;
}


int main(void)
{
    int tamanho;

    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        cout << "Digite o " << i + 1 << (char)167 << " numero: ";
        cin >> vetor[i];
    }

    int troca = insertionSort(vetor,tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        cout << vetor[i] << " ";
    }

    cout << "A quantidade de trocas foi de: " << troca;
    
    return 0;
}
