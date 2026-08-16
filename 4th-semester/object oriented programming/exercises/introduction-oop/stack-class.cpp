#include <iostream>
#include <stdio.h>
using namespace std;

// CLasse pilha.
class Pilha
{
private:
    int vPilha[1000];
    int ultimo = -1;

public:
    void inserir();
    void remover();
    void mostrar();
};

// Metodo para inserir valores na pilha.
void Pilha::inserir()
{
    if (ultimo < 999) // Verifica se a pilha nao esta cheia.
    {
        cout << "Numero: ";
        cin >> vPilha[++ultimo];
    }
    else
    {
        cout << "\n\nPilha cheia!\n\n";
    }
}

// Metodo para remover valores da pilha.
void Pilha::remover()
{
    if (ultimo > -1) // Verifica se a pilha nao esta vazia.
    {
        cout << "valor removido: " << vPilha[ultimo--] << "\n\n";
    }
    else
    {
        cout << "\n\nPilha Vazia!\n\n";
    }
}

// Metodo para mostrar valores da pilha.
void Pilha::mostrar()
{
    for (int i = 0; i <= ultimo; i++)
    {
        cout << i + 1 << char(167) << " numero: " << vPilha[i] << endl;
    }
}

// Funcao principal.
int main(void)
{
    Pilha P;
    bool continuar = true;
    int opcao;

    // Loop repeticao Menu
    while (continuar)
    {
        cout << "\n\n==== Menu Pilha ====" << endl;
        cout << "0- Sair.\n1- Inserir.\n2- Remover.\n3- Mostar.\n Opcao: ";
        cin >> opcao;

        switch (opcao)
        {
        case 0:
            continuar = false;
            break;

        case 1:
            P.inserir();
            break;

        case 2:
            P.remover();
            break;

        case 3:
            P.mostrar();
            break;

        default:
            cout << "Opcao invalida!\n\n";
            break;
        }
    }

    return 0;
}
