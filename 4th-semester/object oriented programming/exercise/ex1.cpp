#include <iostream>
#include <stdio.h>
using namespace std;

class produto
{

private:
    int codigo;
    char descricao[100];
    int estq_min, estq_atual;
    float preco;

public:
        void cadastrarProduto()
        {
            cout << "\nDigite o codigo: ";
            cin >> codigo;

            cout << "\nDigite o codigo do produto: ";
            gets(descricao)

            cout << "\nDigite o estoque minimo do produto: ";
            cin >> estq_min;

            cout << "\nDigite o estoque atual do produto: ";
            cin >> estq_atual;

            cout << "\nDigite o preco do produto: ";
            cin >> preco;
        }

        void exibirProduto()
        {
            while
        }
};

int main(void)
{

}
