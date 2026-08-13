#include <iostream>
#include <string.h>
#include <stdio.h>
#define tam 2
using namespace std;

struct cadastro
{
    char nome[50];
    float salario;
    int estd_civil;
    char sexo[15];
    int n_dependentes = 0;
    char cidade[30];
    char estado_res[30];
};

int main()
{
    cadastro lista[tam];

    for (int i = 0; i < tam; i++)
    {
        cout << "\nDigite o nome: ";
        _flushall();
        gets(lista[i].nome);

        cout << "\nDigite o salario: ";
        _flushall();
        cin >> lista[i].salario;

        cout << "\nDigite o estado civil (1- Solteiro 2- Casado 3- Divorciado): ";
        _flushall();
        cin >> lista[i].estd_civil;

        cout << "\nDigite o sexo: ";
        _flushall();
        gets(lista[i].sexo);

        cout << "\nDigite a quantidade de dependentes: ";
        _flushall();
        cin >> lista[i].n_dependentes;

        cout << "\nDigite a cidade onde mora: ";
        _flushall();
        gets(lista[i].cidade);

        cout << "\nDigite o estado de residencia (ex: Mato grosso do sul = MS): ";
        _flushall();
        gets(lista[i].estado_res);
    }

    for (int i = 0; i < tam; i++)
    {
        if (lista[i].salario > 3000 && lista[i].estd_civil == 2)
        {
            if (strcmpi(lista[i].estado_res, "MS") == 0)
            {
                cout << "\nNome: " << lista[i].nome;
                cout << "\nSalario: " << lista[i].salario;
                cout << "\nSexo: " << lista[i].sexo;
                cout << "\nNumero de dependentes: " << lista[i].n_dependentes;
                cout << "\nCidade onde mora: " << lista[i].cidade;
                cout << "\nEstado onde mora: " << lista[i].estado_res;
            }
        }
        cout << "\n";
    }

    return 0;
}