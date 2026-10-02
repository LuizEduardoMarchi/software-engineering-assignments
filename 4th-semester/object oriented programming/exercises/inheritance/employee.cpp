#include <iostream>
#include <stdio.h>
#include <string.h>
#define tam 5

using namespace std;

class Empregado {
    private:
        char nome[100];
        char RG[20];
        char CPF[20];
    public: 
        void setDados();
        void getDados();
};

void Empregado::setDados() {
    
    _flushall();
    cout << "\n\n==== Cadastro Empregado ====" << endl;
    cout << "Digite o nome: ";
    gets(nome);
    _flushall();
    cout << "Digite o RG: ";
    gets(RG);
    cout << "Digite o CPF: ";
    _flushall();
    gets(CPF);
}

void Empregado::getDados() {
    cout << "==== Empregado ====" << endl;
    cout << "Nome: " << nome << endl;
    cout << "RG: " << RG << endl;
    cout << "CPF: " << CPF << endl;
}

class EmpregadoIntegral : public Empregado {
    private:
        float salario;
    public:
        void registrarDados();
        void mostrarDados();
        float calcularSalario();
};

void EmpregadoIntegral::registrarDados() {

    Empregado::setDados();

    cout << "Digite o salario: ";
    cin >> salario;
}

void EmpregadoIntegral::mostrarDados() {
    getDados();
    cout << "Salario: " << calcularSalario() << endl;
}

float EmpregadoIntegral::calcularSalario() {
    return salario;
}

class EmpregadoHorista : public Empregado {
    private:
        float valorHora;
        int horasTrabalhadas;
    public:
        void registrarDados();
        void mostrarDados();
        float calcularSalario();
};

void EmpregadoHorista::registrarDados() {

    Empregado::setDados();

    cout << "Digite o valor da hora: ";
    cin >> valorHora;
    cout << "Digite a quantidade de horas trabalhadas: ";
    cin >> horasTrabalhadas;
}

void EmpregadoHorista::mostrarDados() {
    getDados();
    cout << "Valor da hora: " << valorHora << endl;
    cout << "Horas trabalhadas: " << horasTrabalhadas << endl;
    cout << "Salario: " << calcularSalario() << endl;
}

float EmpregadoHorista::calcularSalario() {
    return valorHora * horasTrabalhadas;
}

class EmpregadoServico : public Empregado {
    private:
        float valorServico;
        int horasTrabalhadas;
    public:
        void registrarDados();
        void mostrarDados();
        float calcularSalario();
};

void EmpregadoServico::registrarDados() {

    Empregado::setDados();

    cout << "Digite o valor do servico: ";
    cin >> valorServico;
    cout << "Digite a quantidade de horas trabalhadas: ";
    cin >> horasTrabalhadas;
}

void EmpregadoServico::mostrarDados() {
    getDados();
    cout << "Valor do servico: " << valorServico << endl;
    cout << "Horas trabalhadas: " << horasTrabalhadas << endl;
    cout << "Salario: " << calcularSalario() << endl;
}

float EmpregadoServico::calcularSalario() {
    return valorServico * horasTrabalhadas;
}

int main (void)
{
    EmpregadoIntegral EI[tam];
    EmpregadoHorista EH[tam];
    EmpregadoServico ES[tam];

    // Variaveis de controle.
    int opcao;
    bool continuar = true;
    int i = 0, k = 0, j = 0;

    while(continuar)
    {
        cout << "\n\n==== Menu Empregado ====" << endl;
        cout << "0- Sair.\n1- Empregado Integral.\n2- Empregado Horista.\n3- Empregado Servico\nOpcao: ";
        cin >> opcao; 

        switch(opcao)
        {
        case 0:
            continuar = false;
            break;
        case 1:
        {
            bool continuacao = true;
            int empregado = 0;

            while (continuacao)
            {
                cout << "\n\n==== Empregado Integral ====" << endl;
                cout << "0- Sair.\n1- Cadastrar Empregado.\n2- Acessar Empregado.\nOpcao: ";
                cin >> opcao;

                switch (opcao)
                {
                case 0:
                    continuacao = false;
                    break;

                case 1:
                    if (i < tam)
                    {
                        EI[i++].registrarDados();
                    }
                    else
                    {
                        cout << "\n\nNumero maximo de Empregados Integral cadastrado!\n\n" << endl;
                    }
                    break;
                case 2:
                    if (i == 0)
                    {
                        cout << "\n\nErro! Nenhum funcionario cadastrado!\n" << endl;
                    }

                    empregado = 0;
                    while (empregado < 1 || empregado > tam)
                    {
                        cout << "Digite o numero do funcionario (1 a " << tam << ")\nOpcao: ";
                        cin >> empregado;
                    }

                    EI[--empregado].mostrarDados();

                    break;

                default:
                    cout << "\n\nOpcao Invalida!\n" << endl;
                    break;
                }
            }
            break;
        }
        case 2:
        {
            bool continuacao = true;
            int empregado = 0;

            while(continuacao)
            {
                cout << "\n\n==== Empregado Servico ====" << endl;
                cout << "0- Sair.\n1- Cadastrar Empregado.\n2- Acessar Empregado.\nOpcao: ";
                cin >> opcao;

                switch (opcao)
                {
                case 0:
                    continuacao = false;
                    break;

                case 1:
                    if (j < tam)
                    {
                        ES[j++].registrarDados();
                    }
                    else
                    {
                        cout << "\n\nNumero maximo de Empregados Integral cadastrado!\n\n" << endl;
                    }
                    break;

                case 2:
                    if (j == 0)
                    {
                        cout << "\n\nErro! Nenhum funcionario cadastrado!\n" << endl;
                        break;
                    }
                    else
                    {
                        empregado = 0;
                        while (empregado < 1 || empregado > tam)
                        {
                            cout << "Digite o numero do funcionario (1 a " << tam << ")\nOpcao: ";
                            cin >> empregado;
                        }

                        ES[--empregado].mostrarDados();
                    }
                    break;

                default:
                    cout << "\n\nOpcao Invalida!\n" << endl;
                    break;
                }
            }
            break;
        }

        case 3:
        {
            bool continuacao = true;
            int empregado = 0;

            while(continuacao)
            {
                cout << "\n\n==== Empregado Horista ====" << endl;
                cout << "0- Sair.\n1- Cadastrar Empregado.\n2- Acessar Empregado.\nOpcao: ";
                cin >> opcao;

                switch (opcao)
                {
                case 0:
                    continuacao = false;
                    break;

                case 1:
                    if (k < tam)
                    {
                        EH[k++].registrarDados();
                    }
                    else
                    {
                        cout << "\n\nNumero maximo de Empregados Integral cadastrado!\n\n" << endl;
                    }
                    break;
                case 2:
                    if (k == 0)
                    {
                        cout << "\n\nErro! Nenhum funcionario cadastrado!\n" << endl;
                        break;
                    }
                    else
                    {   
                        empregado = 0;
                        while (empregado < 1 || empregado > tam)
                        {
                            cout << "Digite o numero do funcionario (1 a " << tam << ")\nOpcao: ";
                            cin >> empregado;
                        }

                        EH[--empregado].mostrarDados();
                    }
                    break;

                default:
                    cout << "\n\nOpcao Invalida!\n" << endl;
                    break;
                }
            }
            break;
        }

        default: 
            cout << "\n\nOpcao Invalida!\n" << endl;
            break;
        }
    }

    cout << "\n\nEncerrando o Programa!\n\n" << endl;

    return 0;
}