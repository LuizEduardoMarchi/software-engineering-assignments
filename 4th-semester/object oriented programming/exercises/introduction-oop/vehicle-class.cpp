#include <iostream>
#include <stdio.h>
using namespace std;

// Classe veiculo slide 12.
class Veiculo
{
private:
    char Modelo[30];
    char Fabricante[50];
    char Placa[10];
    char Proprietario[150];

public:
    void registrarDados();
    void imprimirDados();
};

// Metodos registrar dados da classe veiculo.
void Veiculo::registrarDados()
{
    _flushall();
    cout << "Modelo: ";
    gets(Modelo);

    _flushall();
    cout << "Fabricante: ";
    gets(Fabricante);

    _flushall();
    cout << "Placa: ";
    gets(Placa);

    _flushall();
    cout << "Proprietario: ";
    gets(Proprietario);
}

// Metodos imprimir dados da classe veiculo.
void Veiculo::imprimirDados()
{
    cout << "\n\n==== Veiculo ====";
    cout << "\nModelo: " << Modelo;
    cout << "\nFabricante: " << Fabricante;
    cout << "\nPlaca: " << Placa;
    cout << "\nProprietario: " << Proprietario;
    cout << "\n\n";
}

// Funcao Principal.
int main(void)
{
    Veiculo V;

    V.registrarDados();
    V.imprimirDados();

    return 0;
}