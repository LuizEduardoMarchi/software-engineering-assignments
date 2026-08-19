#include <iostream>
#include <stdio.h>
using namespace std;

class Data
{
private:
    int dia; 
    int mes; // Maximo 31 dias no mes.
    int ano;

public: 
    Data(int novoDia, int novoMes, int novoAno);
    // Setters.
    void setDia(int novoDia);
    void setMes(int novoMes);
    void setAno(int novoAno);
    
    // Getters.
    int getDia();
    int getMes();
    int getAno();

    // Metodo para pular o dia.
    void proximaData();
};

// Construtor para inicializar os dados.
Data::Data(int novoDia, int novoMes, int novoAno)
{
    setDia(novoDia);
    setMes(novoMes);
    setAno(novoAno);
}

// Setters.
// Verifica e guarda o novo dia.
void Data::setDia(int novoDia)
{
    // Verifica a validade do Dia.
    if (novoDia > 0 && novoDia <= 31)
    {
        dia = novoDia;
    }
    else
    {
        cout << "\n\nDia Invalido!\n\n";
        dia = 0;
    }
}

// Verifica e guarda o novo Mes.
void Data::setMes(int novoMes)
{
    // Verifica a validade do Mes.
    if (novoMes > 0 && novoMes <= 12)
    {
        mes = novoMes;
    }
    else
    {
        cout << "\n\nMes Invalido!\n\n";
        mes = 0;
    }
}

// Verifica e guarda o novo Ano.
void Data::setAno(int novoAno)
{
    // Verifica a validade do Ano (d.C.).
    if (novoAno > 0 && novoAno <= 2026)
    {
        ano = novoAno;
    }
    else
    {
        cout << "\n\nAno Invalido!\n\n";
        ano = 0;
    }
}
 
// Getters.
int Data::getDia()
{
    return dia;
}

int Data::getMes()
{
    return mes;
}

int Data::getAno()
{
    return ano;
}

// Metodo para pular para a proxima data.
void Data::proximaData()
{
    if (dia < 31)
    {
        dia++;
    }
    else
    {
        dia = 1;
        if(mes < 12)
        {
            mes++;
        }
        else
        {
            mes = 1;
            ano++;
        }
    }
}

int main(void)
{
    // Instancia de data com valores inicializados.
    Data Data1{19, 8, 2026};

    // Exibe as datas antes de pular para a proxima data.
    cout << "Dia: " << Data1.getDia() << endl; 
    cout << "Mes: " << Data1.getMes() << endl; 
    cout << "Ano: " << Data1.getAno() << endl;
    
    // Exibe as datas depois de pular para a proxima data.
    cout << "\n==== Proxima data ====\n" << endl;
    Data1.proximaData();
    cout << "Dia: " << Data1.getDia() << endl; 
    cout << "Mes: " << Data1.getMes() << endl; 
    cout << "Ano: " << Data1.getAno() << endl;

    return 0;
}