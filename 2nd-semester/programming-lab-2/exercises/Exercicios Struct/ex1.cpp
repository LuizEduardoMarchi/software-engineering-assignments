#include <iostream>
#include <string.h>
using namespace std;

struct imoveis
{
    char tipo[15];
    char endereco[15];
    char bairro[15];
    float valor;
    int situacao;
};

int main()
{
    int sit;
    imoveis lista[50];
    for (int i = 0; i < 50; i++)
    {
        cout << "Digite o tipo do imovel: ";
        gets(lista[i].tipo);

        cout << "Digite o endereco: ";
        gets(lista[i].endereco);

        cout << "Digite o bairro: ";
        gets(lista[i].bairro);

        cout << "Digite o valor do imovel: ";
        cin >> lista[i].valor;

        cout << "Digite a situacao do imovel (1- aluguel ou 2- Venda): ";
        cin >> lista[i].situacao;
    }

    cout << "Digite a situacao dos imoveis a serem pesquisadas (1- aluguel ou 2- Venda): ";
    cin >> sit;

    for (int i = 0; i < 50; i++)
    {
        if (sit == lista[i].situacao)
        {
            cout << "\n"
                 << lista[i].tipo;
            cout << "\n"
                 << lista[i].endereco;
            cout << "\n"
                 << lista[i].bairro;
            cout << "\n"
                 << lista[i].valor;
        }
        cout << "\n";
    }

    return 0;
}