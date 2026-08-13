#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void) // Funcao principal
{
    int tam;

    cout << "\n\nDigite o tamanho do vetor: ";
    cin >> tam;
    
    // Aloca memoria dinamicamente
    int *vetor = (int*) malloc (tam * sizeof(int));
    
    int *ptr = vetor;

    // Loop para receber os dados do usuario
    for (int i = 0; i < tam; i++)
    {
        cout << "\nDigite o " << i + 1 << char(167) << " numero do vetor: ";
        cin >> *(ptr++);
    }
    
    ptr = vetor;

    // Loop para mostrar os valores e suas posicoes de memoria
    for (int i = 0; i < tam; i++)
    {
        cout << "\nElemento: " << *ptr << endl;
        cout << "Endereco de memoria: " << ptr << endl;
        ptr++;    
    }

    int menor_valor = *vetor, maior_valor = *vetor;
    int soma_elementos = 0;

    ptr = vetor;

    // Loop para encontrar menor, maior e soma dos valores
    for (int i = 0; i < tam; i++)
    {
        if (*ptr <= menor_valor)
        {
            menor_valor = *ptr;
        }

        if (*ptr >= maior_valor)
        {
            maior_valor = *ptr;
        }

        soma_elementos += *(ptr++);
    }

    cout << "\nMaior elemento: " << maior_valor << endl;
    cout << "Menor elemento: " << menor_valor << endl;
    cout << "Soma dos elementos: " << soma_elementos << "\n\n" << endl;

    // Libera memoria apos o uso
    free(vetor);
    
    return 0;
}