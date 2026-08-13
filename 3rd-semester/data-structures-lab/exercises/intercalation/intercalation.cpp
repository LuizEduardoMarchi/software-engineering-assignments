#include <iostream>
#define N 10
using namespace std;

void MOSTRA_VETOR(int vetor[])
{
    cout << "\n\n"
         << endl;
    for (int i = 0; i < N; i++)
    {
        cout << vetor[i] << ", ";
    }
    cout << "\n\n"
         << endl;
}

void INTERCALA(int vetor[], int p, int r, int q)
{
    int auxiliar[N];

    for (int i = p; i <= r; i++)
    {
        auxiliar[i] = vetor[i];
    }

    for (int j = q + 1; j <= r; j++) 
    {
        auxiliar[r + q + 1 - j] = vetor[j];
    }

    for (int k = p; k <= r; k++)
    {
        if (auxiliar[p] <= auxiliar[r])
        {
            vetor[k] = auxiliar[p];
            p++;
        }
        else
        {
            vetor[k] = auxiliar[r];
            r--;
        }
    }

    MOSTRA_VETOR(vetor);
}

int main(void)
{
    int vetor[N] = {4, 3, 1, 2, 5, 8, 6, 7, 10, 9};

    INTERCALA(vetor, 0, N, 5);

    return 0;
}