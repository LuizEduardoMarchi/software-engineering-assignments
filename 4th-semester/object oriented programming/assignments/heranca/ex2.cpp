#include <stdio.h>
#include <iostream>
#define tam 10

using namespace std;

class FuncionarioEscola
{
    private: 
        int matricula;
        char nome[100];
        float salarioBase;
    public: 
        void registrarDados();
        void mostrarDados();
        float getSalarioBase();
        int getMatricula ();
};

void FuncionarioEscola::registrarDados()
{
    cout << "\n\n==== Registro funcionario Escola ====" << endl;
    cout << "Nome: ";
    cin.ignore();
    cin.getline(nome, 100);
    cout << "Matricula: ";
    cin >> matricula;
    cout << "Salario: ";
    cin >> salarioBase;
}

void FuncionarioEscola::mostrarDados()
{
    cout << "\n\n==== funcionario Escola ====" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Matricula: " << matricula << endl;
    cout << "Salario: " << salarioBase << endl;
}

float FuncionarioEscola::getSalarioBase()
{
    return salarioBase;
}

int FuncionarioEscola::getMatricula()
{
    return matricula;
}

class Professor:FuncionarioEscola
{
    private: 
        float adicionalNoturno;
    public:
        void registrarDados();
        float calcularSalario();
        void mostrarDados();
        int getMatricula () { return FuncionarioEscola::getMatricula();}
};

void Professor::registrarDados()
{
    FuncionarioEscola::registrarDados();

    cout << "Adicional noturno: ";
    cin >> adicionalNoturno;
}

float Professor::calcularSalario()
{
    return adicionalNoturno + getSalarioBase();
}

void Professor::mostrarDados()
{
    FuncionarioEscola::mostrarDados();
    cout << "Adicional noturno: " << calcularSalario() << endl; 
}

class ApoioAdministrativo:FuncionarioEscola
{
    private: 
        float convenioMedico;
    public:
        void registrarDados();
        float calcularSalario();
        void mostrarDados();
        int getMatricula () { return FuncionarioEscola::getMatricula();}
};


void ApoioAdministrativo::registrarDados()
{
    FuncionarioEscola::registrarDados();

    cout << "Convenio Medico: ";
    cin >> convenioMedico;
}

float ApoioAdministrativo::calcularSalario()
{
    return convenioMedico + getSalarioBase();
}

void ApoioAdministrativo::mostrarDados()
{
    FuncionarioEscola::mostrarDados();
    cout << "Convenio Medico: " << calcularSalario() << endl; 
}

int main(void)
{
    Professor P[tam];
    ApoioAdministrativo AA[tam];

    bool continuar = true;
    bool encontrado = false;
    int opcao = 0;
    int matricula;

    int professoresMatriculados = 0;
    int AdministradoresMatriculados = 0;

    while (continuar)
    {
        cout << "\n\n ==== Menu ====" << endl;
        cout << "0- Sair\n1- Cadastrar Funcionario.\n2- Consultar Funcionario.\nOpcao: ";
        cin >> opcao;

        switch (opcao)
        {
            case 0:
                continuar = false;
                break;
            case 1:
                cout << "0- Sair\n1- Professor.\n2- Apoio Administrativo.\nOpcao: ";
                cin >> opcao;

                switch(opcao)
                {
                    case 0:
                        break;
                    case 1:
                        if (professoresMatriculados >= tam)
                        {
                            cout << "\n\nLimite de professores atingido!\n" << endl;
                        }
                        else
                        {
                            P[professoresMatriculados++].registrarDados();
                        }
                        break;
                    case 2:
                        if (AdministradoresMatriculados >= tam)
                        {
                            cout << "\n\nLimite de apoios administrativos atingido!\n" << endl;
                        }
                        else
                        {
                            AA[AdministradoresMatriculados++].registrarDados();
                        }
                        break;
                    default:
                        cout << "\n\nOpcao Invalida!\n" << endl;
                }   
                break;
            case 2:
                cout << "\n\n==== Consulta Funcionario ====" << endl;
                cout << "0- Sair.\n1- Consultar Professor.\n2- Apoio Administrativo.\nOpcao: ";
                cin >> opcao;

                switch (opcao)
                {
                    case 0:
                        break;
                    case 1:
                        cout << "Digite a matricula: ";
                        cin >> matricula;

                        encontrado = false;
                        for (int i = 0; i < professoresMatriculados; i++)
                        {
                            if(matricula == P[i].getMatricula())
                            {
                                P[i].mostrarDados();
                                encontrado = true;
                            }
                        }

                        if(!encontrado)
                        {
                            cout << "\n\nProfessor nao encontrado!\n" << endl;
                        }

                        break;
                    case 2:
                        cout << "Digite a matricula: ";
                        cin >> matricula;

                        encontrado = false;
                        for(int i = 0; i < AdministradoresMatriculados; i++)
                        {
                            if(matricula == AA[i].getMatricula())
                            {
                                AA[i].mostrarDados();
                                encontrado = true;
                            }
                        }

                        if(!encontrado)
                        {
                            cout << "\n\nProfessor nao encontrado!\n" << endl;
                        }

                        break;
                    default:
                        cout << "\n\nOpcao Invalida!\n" << endl;
                }
                break;

            default:
                cout << "\n\nOpcao Invalida!\n" << endl;
        }
    }

}