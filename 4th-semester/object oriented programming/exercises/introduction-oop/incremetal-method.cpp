#include <iostream>
#include <stdio.h>
using namespace std;

// Classe Incremental.
class Incremental
{
private:
    int numero;

public:
    void inicializaNumero();
    void incrementaNumero();
    void imprimeNumero();
};

// Funcao para inicializar o numero.
void Incremental::inicializaNumero()
{
    numero = 0;
}

// Funcao para incrementar o numero.
void Incremental::incrementaNumero()
{
    numero++;
}

// Funcao para mostrar o valor final.
void Incremental::imprimeNumero()
{
    cout << "\n\nNumero: " << numero;
    cout << "\n\n";
}

// Funcao principal.
int main(void)
{
    Incremental I;

    I.inicializaNumero();

    // Loop para incrementar o numero.
    for (int i = 0; i < 5; i++)
    {
        I.incrementaNumero();
    }

    I.imprimeNumero();

    return 0;
}