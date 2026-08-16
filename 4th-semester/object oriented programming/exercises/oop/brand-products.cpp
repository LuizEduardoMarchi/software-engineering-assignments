#include <iostream>
#include <stdio.h>
using namespace std;

// Classe produto.
class Produto
{
private:
    int codigo;
    char descricao[100];
    int estq_min, estq_atual;
    float preco;

public:
    void cadastrarProduto();
    void exibirProduto();
};

// Metodo para cadastrar os produtos.
void Produto::cadastrarProduto()
{
    cout << "\n\n==== Cadastro de Produtos ====\n";

    cout << "Digite o codigo: ";
    cin >> codigo;

    _flushall();
    cout << "Digite o descricao do produto: ";
    gets(descricao);

    cout << "Digite o preco do produto: ";
    cin >> preco;

    cout << "Digite o estoque minimo do produto: ";
    cin >> estq_min;

    cout << "Digite o estoque atual do produto: ";
    cin >> estq_atual;
}

// Metodo para exibir todos os produtos cadastrados.
void Produto::exibirProduto()
{
    // Verifica e exibe apenas produtos que estao abaixo do estoque minimo.
    if (estq_atual < estq_min) 
    {
        cout << "\n\n==== Produtos ====\n";
        cout << "Codigo: " << codigo << endl;
        cout << "Descricao: " << descricao << endl;
        cout << "Preco: " << preco << endl;
        cout << "Estoque Atual: " << estq_atual << endl;
        cout << "Estoque Minimo: " << estq_min << endl;
    }
}

// Funcao Principal.
int main(void)
{
    Produto P[10];
    bool continuar = true;
    int opcao, i = 0;

    // Laco de repeticao do menu
    while(continuar)
    {
        cout << "\n\n==== Menu ====\n";
        cout << "0- Sair.\n1- Inserir produtos.\n2- Listar produtos.\nOpcao: ";
        cin >> opcao;

        // Estrutura de selecao do menu
        switch (opcao)
        {
        case 0:
            continuar = false;
            break;
        case 1:
            // Verifica se esta dentro do limite de produtos maximos cadastrados.
            if (i < 10)
            {
                P[i++].cadastrarProduto();
            }
            else
            {
                cout << "Produtos maximos cadastrados!";
            }
            
            break;
        case 2:
            // Loop para exibir apenas produtos cadastrados
            for (int k = 0; k < i; k++)
            {
                P[k].exibirProduto();
            }
            break;
        default:
            cout << "Opcao invalida!";
            break;
        }
    }

    return 0;
}
