/*
codigo original:
#include <iostream>
#include <stdio.h>
using namespace std;

// Classe pessoa com metodos criados dentro da classe
class Pessoa
{
    private:
        char Nome[150];
        char Cpf[15];
        int AnoNasc;
    public:

        // Metodo de cadastro de pessoa dentro da classe
        void cadastrarPessoa()
        {
            cout << "\n\n ==== Pessoa ====\n";
            _flushall();
            cout <<"\nNome: ";
            gets(Nome);
            _flushall();
            cout << "CPF: ";
            gets(Cpf);
            cout <<"Ano Nascimento: ";
            cin >> AnoNasc;
        }

        // Metodo de imprimir funcionario dentro da classe
        void imprimirPessoa()
        {
            cout << "\n\n ==== Pessoa ====";
            cout << "\nNome: " << Nome;
            cout << "\nCpf: " << Cpf;
            cout << "\nAno de Nascimento: " << AnoNasc;
    }

};

int main(void)
{
    Pessoa p;

    p.cadastrarPessoa();
    p.imprimirPessoa();

    return 0;
}
*/