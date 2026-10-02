#include <stdio.h>
#include <iostream>
#define tam 10

using namespace std;

class Restaurante
{
    private:
        char nomeRestaurante[100];
        char endereco[100];
        char telefone[25];
        float preco_medio_prato;
        char tipo_comida[100];

    public: 
        void setDados();
        float getValor();
        void mostrarDados();

};

void Restaurante::setDados()
{
    cout << "==== Cadastro de restaurante ====" << endl;
    cout << "Nome do restaurante: ";
    cin.ignore();
    cin.getline(nomeRestaurante, 100);
    
    cout << "Digite o endereco: ";
    cin.ignore();
    cin.getline(endereco, 100);
    
    cout << "Telefone: ";
    cin.ignore();
    cin.getline(telefone, 25);
    
    cout << "Digite o valor do prato: ";
    cin >> preco_medio_prato;

    cout << "Tipo de comida: ";
    cin.ignore();
    cin.getline(tipo_comida, 100);
}

float Restaurante::getValor()
{
    return preco_medio_prato;
}

void Restaurante::mostrarDados()
{
    cout << "\n\n==== Restaurante ==== " << endl;
    cout << "Nome: " << nomeRestaurante << endl;
    cout << "Endereco: " << endereco << endl;
    cout << "Telefone: " << telefone << endl;
    cout << "Tipo de comida: " << tipo_comida << endl; 
}

int main (void)
{
    Restaurante R[tam];

    int restaurantes_cadastrados = 0;

    for (restaurantes_cadastrados = 0; restaurantes_cadastrados < tam; restaurantes_cadastrados++)
    {
        R[restaurantes_cadastrados].setDados();
    }

    bool continuar = true;
    int opcao = 0;
    float preco_maximo;

    while(continuar)
    {
        cout << "\n\n ==== Menu ====" << endl;
        cout << "0- Sair\n1- Buscar restaurante.\nOpcao: ";
        cin >> opcao;

        switch (opcao)
        {
            case 0:
                continuar = false;
                break;
            case 1:
                cout << "\n\nDigite o preco maximo: ";
                cin >> preco_maximo;

                for(int i = 0; i < restaurantes_cadastrados; i++)
                {
                    if (R[i].getValor() <= preco_maximo)
                    {
                        R[i].mostrarDados();
                    }

                }

                break;
            default:
                cout << "\n\nOpcao Invalida!\n" << endl;
        }
    }

    return 0;
}