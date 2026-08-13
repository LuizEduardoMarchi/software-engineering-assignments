#include <string.h>
#include <iostream>

using namespace std;

int main()
{
    int i = 0, j = 0;
    char nome[50];
    char primeironome[20], sobrenome[30];

    cout << "Digite seu nome: ";
    gets(nome);

    while (nome[i] != ' ')
    {
        primeironome[i] = nome[i];
        i++;
    }

    primeironome[i] = '\0';

    while (nome[i] != '\0')
    {
        sobrenome[j] = nome[i];
        j++;
        i++;
    }

    sobrenome[j] = '\0';

    cout << "Primeiro nome: " << primeironome << endl;
    cout << "Segundo nome: " << sobrenome << endl;

    return 0;
}