#include <string.h>
#include <iostream>
using namespace std;

int main()
{
    int idade[10];
    char nome[10][50];

    int velhoidade = 0;
    char velhonome[50];

    for (int i = 0; i < 10 && idade[i] >= 0; i++)
    {
        cout << "Digite seu nome: " << endl;
        gets(nome[i]);
        cout << "Digite sua idade: " << endl;
        cin >> idade[i];
        if (idade[i] > velhoidade)
        {
            velhoidade = idade[i];
            strcpy(velhonome, nome[i]);
        }
    }

    cout << "A Maior idade foi: " << velhoidade << endl;
    cout << "A pessoa mais velha foi: " << velhonome << endl;

    return 0;
}