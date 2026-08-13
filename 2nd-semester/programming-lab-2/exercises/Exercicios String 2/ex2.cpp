#include <string.h>
#include <iostream>
#define tam 50

using namespace std;

int main()
{
    char nome[tam];

    cout << "Digite seu nome: " << endl;
    gets(nome);

    nome[0] = toupper(nome[0]);

    for (int i = 0; i < strlen(nome); i++)
    {
        if (nome[i] == ' ')
        {
            nome[i + 1] = toupper(nome[i + 1]);
        }
    }

    cout << "Nome modificado: " << nome << endl;

    return 0;
}