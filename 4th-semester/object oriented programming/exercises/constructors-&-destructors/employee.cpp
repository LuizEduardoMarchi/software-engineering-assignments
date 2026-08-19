#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

// Classe Empregado.
class Empregado
{
private:
    char nome[100];
    char CPF[20];
    float salarioMensal;
public: 
    // Construtor.
    Empregado(const char novoNome[100], const char novoCPF[20], float novosalarioMensal);
    
    // Getters.
    char *getNome();
    char *getCPF();
    float getSalarioMensal();

    // Setters.
    void setNome(char novoNome[]);
    void setCPF(char novoCPF[]);
    void setSalarioMensal(float novoSalarioMensal);

};

// Construtor da classe funcionario.
Empregado::Empregado(const char novoNome[100], const char novoCPF[20], float novoSalarioMensal)
{
    strcpy(nome, novoNome);
    strcpy(CPF, novoCPF);
    salarioMensal = novoSalarioMensal;
}

// Getters.
char *Empregado::getNome()
{
    return nome;
}

char *Empregado::getCPF()
{
    return CPF;
}

float Empregado::getSalarioMensal()
{
    return salarioMensal;
}

// Setters.
void Empregado::setNome(char novoNome[])
{
    strcpy(nome, novoNome);
}

void Empregado::setCPF(char novoCPF[])
{
    strcpy(CPF, novoCPF);
}

void Empregado::setSalarioMensal(float novoSalarioMensal)
{
    salarioMensal = novoSalarioMensal;
}

// Funcao Principal.
int main(void)
{
    // Instancias da classe empregado.
    Empregado Empregado1{"Pedro Junior", "000.000.000-00", 1500.00},
              Empregado2{"Jose Eduardo", "111.111.111-11", 2300.00};
    
    // Exibe as informacoes antes do reajuste.
    cout << "\n\nFuncionario: " << Empregado1.getNome() << "\nCPF: " << Empregado1.getCPF() << "\nSalario Anual: " << Empregado1.getSalarioMensal() * 12 << endl;
    cout << "\n\nFuncionario: " << Empregado2.getNome() << "\nCPF: " << Empregado2.getCPF() << "\nSalario Anual: " << Empregado2.getSalarioMensal() * 12 << endl;

    // Realiza o reajuste de salario de cada instancia.
    Empregado1.setSalarioMensal(Empregado1.getSalarioMensal() * 1.10);
    Empregado2.setSalarioMensal(Empregado2.getSalarioMensal() * 1.10);

    // Exibe as informacoes depois do reajuste.
    cout << "\n\nFuncionario: " << Empregado1.getNome() << "\nCPF: " << Empregado1.getCPF() << "\nSalario Anual reajustado: " << Empregado1.getSalarioMensal() * 12 << endl;
    cout << "\n\nFuncionario: " << Empregado2.getNome() << "\nCPF: " << Empregado2.getCPF() << "\nSalario Anual reajustado: " << Empregado2.getSalarioMensal() * 12 << endl;

    return 0;
}