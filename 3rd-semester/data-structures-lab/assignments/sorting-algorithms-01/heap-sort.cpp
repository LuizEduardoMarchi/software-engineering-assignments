#include <iostream>

using namespace std;

int heapify(int vetor[], int n, int i)
{
    int maior = i;
    int esq = 2*i + 1;
    int dir = 2*i + 2;
    int trocas = 0;

    if (esq < n && vetor[esq] > vetor[maior])
    {
        maior = esq;
    }

    if (dir < n && vetor[dir] > vetor[maior])
    {
        maior = dir;
    }    

    if (maior != i)
    {
        int temp = vetor[i];
        vetor[i] = vetor[maior];
        vetor[maior] = temp;
        trocas++;

        trocas += heapify(vetor, n, maior);
    }
    return trocas;
}

int heapSort(int vetor[], int n)
{
    int trocas = 0;
    
    for (int i = n/2 - 1; i >= 0; i--)
        trocas += heapify(vetor, n, i);

    for (int i = n-1; i > 0; i--)
    {
        int temp = vetor[0];
        vetor[0] = vetor[i];
        vetor[i] = temp;
        trocas++;

        trocas += heapify(vetor, i, 0);
    }

    return trocas;
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

    int trocas = heapSort(vetor, tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        cout << vetor[i] << " ";
    }

    cout << "O numero de trocas foi de: " << trocas << endl;

    return 0;
}