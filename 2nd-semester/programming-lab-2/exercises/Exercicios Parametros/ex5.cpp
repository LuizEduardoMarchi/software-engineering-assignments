/*Faça um programa possuindo uma função que receba um vetor A de dez elementos
inteiros como parâmetro. Ao final dessa função, deverá ter sido gerado um vetor B
contendo o fatorial de cada elemento de A. O vetor B deverá ser mostrado no programa
principal.*/

#include <iostream>
using namespace std;

void fatorial (int vetA[10], int vetB[10])
{
    int fat = 1;

    // Laço para calcular fatorial
    for(int i = 0; i < 10; i++)
    {
        fat = 1;
        for(int j = 1; j <= vetA[i]; j++)
        {
            fat *= j;
        }
        vetB[i] = fat;
    }

}


int main () // Funçao Principal
{
    int vetor_a[10];
    int vetor_b[10];

    // Laço para receber os numeros
    for (int i = 0; i < 10; i++)
    {
        cout << "Digite o " << i + 1 << " numero: ";
        cin >> vetor_a[i];
    }

    fatorial(vetor_a, vetor_b);

    // Laço para mostrar os resultados
    for(int i = 0; i < 10; i++)
    {
        cout << vetor_b[i] << endl;
    }

    return 0;
}