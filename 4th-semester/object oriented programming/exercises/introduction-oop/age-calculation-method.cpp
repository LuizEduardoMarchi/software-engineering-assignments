#include <iostream>
#include <stdio.h>
using namespace std;

// Classe pessoa com metodos criados fora da classe.
class Pessoa
{
private:
    char Nome[150];
    char Cpf[15];
    int AnoNasc;

public:
    void cadastrarPessoa();
    int calculoIdade();
    void imprimirPessoa();
};

// Metodo de cadastro de pessoa fora da classe.
void Pessoa::cadastrarPessoa()
{
    cout << "\n\n ==== Pessoa ====\n";
    _flushall();
    cout << "\nNome: ";
    gets(Nome);
    _flushall();
    cout << "CPF: ";
    gets(Cpf);
    cout << "Ano Nascimento: ";
    cin >> AnoNasc;
}

int Pessoa::calculoIdade()
{
    return 2026 - AnoNasc;
}

// Metodo de imprimir funcionario fora da classe.
void Pessoa::imprimirPessoa()
{
    cout << "\n\n ==== Pessoa ====";
    cout << "\nNome: " << Nome;
    cout << "\nCpf: " << Cpf;
    cout << "\nAno de Nascimento: " << AnoNasc;
    cout << "\nIdade: " << calculoIdade();
}

// Funcao principal.
int main(void)
{
    Pessoa p;

    p.cadastrarPessoa();
    p.imprimirPessoa();

    return 0;
}