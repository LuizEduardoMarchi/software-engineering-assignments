#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

// Definição da estrutura
struct obra
{
    int codigo;
    char doacao;
    char nome_obra[50];
    char nome_autor[50];
};


int main()
{
    setlocale(LC_ALL, "portuguese");
 
    obra lista[100]; // Vetor lista do tipo obra
    int cod,tam;

    // Faz a leitura da quantidade de obras que o usuario deseja cadastrar
    cout << "Digite a quantidade de obras a serem cadastradas (até 100): ";
    cin >> tam;
    
    while(tam > 100)
    {
        cout << "Quantidade invalida!\n";
        cout << "Digite a quantidade de obras a serem cadastradas (até 100): ";
        cin >> tam;
    }

    // Laço de leitura dos detalhes da obra
    for(int i = 0; i < tam; i++)
    {
        cout << "Digite o codigo da obra: ";
        cin >> lista[i].codigo;

        cout << "Digite o nome da obra: ";
        _flushall();
        gets(lista[i].nome_obra);

        cout << "Digite o nome do autor da obra: ";
        _flushall();
        gets(lista[i].nome_autor);

        cout << "Digite se a obra foi doação (S/N): ";
        _flushall();
        cin >> lista[i].doacao;
    }

    // Laço de pesquisa de obras
    do{
        cout << "\nDigite o codigo da obra a ser procurada (ou 1 para sair): ";
        cin >> cod;

        if(cod != 1)
        {
            bool encontrado = false;

            // Laço de busca de obra cadastrada
            for(int i = 0; i < tam; i++)
            {
                // Escrita dos detalhes da obra
                if(lista[i].codigo == cod)
                {
                    cout << "\n--------Obra Cod: " << lista[i].codigo << " --------" << endl;
                    cout << "Nome do autor: " << lista[i].nome_autor << endl;
                    cout << "Nome da obra: " << lista[i].nome_obra << endl;
                    cout << "Doacao: " << lista[i].doacao << endl;
                    encontrado = true;
                    break;
                }
                // Testa se foi encontrado algum codigo na lista igual a o digitado
                if(!encontrado)
                {
                    cout << "\nCodigo Invalido!" << endl;
                }     
            }
        }
    }while (cod != 1);

    cout << "\nOperação finalizada!\n\n" << endl;
    
    return 0;
}