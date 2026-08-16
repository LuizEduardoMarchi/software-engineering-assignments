#include <iostream>
#include <stdio.h>
#include <string.h>
#define tam 50
using namespace std;

// Classe municipio.
class Municipios
{
private:
    char nome[tam];
    char estado[3];
    int populacao;

public:
    void cadastrarMunicipio();
    void exibirMunicipio(char uf[]);
};

// Metodo de cadastro de municipios.
void Municipios::cadastrarMunicipio()
{
    cout << "\n\n==== Cadastro de municipio ====\n" << endl;
    
    _flushall();
    cout << "Nome: ";
    gets(nome);

    _flushall();
    cout << "Estado (SIGLA): ";
    gets(estado);

    cout << "Populacao: ";
    cin >> populacao;
}

// Metodo para exibir todos os municipios de acordo com a pesquisa do usuario.
void Municipios::exibirMunicipio(char uf[])
{
    // Verifica se o estado corresponde a UF dada pelo usuario.
    if (strcmpi(uf, estado) == 0)
    {
        cout << "\n\n==== Municipio ====\n"<< endl;
        cout << "Nome: " << nome << endl;
        cout << "Populacao: " << populacao << endl;
    }
}

// Funcao principal.
int main(void)
{
    Municipios M[tam];
    int opcao, i = 0;
    bool continuar = true;
    char estado[3];

    // Laco de repeticao Menu.
    while(continuar)
    {
        cout << "\n\n==== Menu ====\n";
        cout << "0- Sair.\n1- Inserir municipio.\n2- Exibir Municipio.\nOpcao: ";
        cin >> opcao;

        // Estrutura de selecao Menu.
        switch (opcao)
        {
        case 0:
            continuar = false;
            break;
    
        case 1:
            // Verifica se atingiu a quantidade maxima de municipios cadastrados.
            if (i < tam)
            {
                M[i++].cadastrarMunicipio();
            }
            else
            {
                cout << "Numero maximo de municipios cadastrados!";
            }
            break;
       
        case 2:
            _flushall();
            cout << "Digite o estado do municipio a ser buscado(SIGLA): ";
            gets(estado);
            
            // Laco de repeticao para percorrer todos os municipios cadastrados.
            for (int j = 0; j < tam; j++)
            {
                M[j].exibirMunicipio(estado);
            }
            
            break;

        default:
            cout << "Opcao invalida!";
            break;
        }
    }

    return 0;
}