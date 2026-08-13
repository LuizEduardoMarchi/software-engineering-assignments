#include <iostream>
#include <stdio.h>
using namespace std;

class Pessoa
{
    private:
        char Nome[30];
        char Cpf[15];
        int AnoNasc;
public:
    void CadastrarPessoa()
    {
        cout <<"\nNome: ";
        gets(Nome);
        cout << "CPF: ";
        gets(Cpf);
        cout <<"Ano Nascimento: ";
        cin >> AnoNasc;
    }
    void ImprimirPessoa()
    {
        cout << "\nCpf: " << Cpf ;
        cout << "\nNome: " << Nome;
        cout << "\n Ano de Nascimento: " << AnoNasc;
    }

};

class funcionario
{
    void exibe_func(void);
};

void funcionario::exibe_func(void)
{

private:
    char nome[150];
    int idade;

public
    void mostrarnome() // metodos fora da classe
    {
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << endl;
    }
}


int main()
{
    Pessoa p;

    p.CadastrarPessoa();
    p.ImprimirPessoa();
}
