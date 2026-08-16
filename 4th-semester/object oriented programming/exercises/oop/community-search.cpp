#include <iostream>
#include <stdio.h>
#define tam 20
using namespace std;

// Classe habitante
class Habitante
{
private:
    char nome[100];
    int idade;
    char sexo; // M p/ masculino e F p/ feminino.
    int n_filhos;
    float salario;

public:
    void cadastroHabitante();
    float mediaSalario(Habitante H[], int qtd_cadastrados);
    int somaFilhos(Habitante H[], int qtd_cadastrados);
    void exibirInformacoes(Habitante H[], float mediaSalario, int mediaFilhos, int qtd_cadastrados); 
};

// Metodo para cadastrar habitantes.
void Habitante::cadastroHabitante()
{
    cout << "\n\n==== Cadastro de Habitante ====" << endl;
    
    cout << "Nome: ";
    _flushall();
    gets(nome);

    cout << "Idade: ";
    cin >> idade;

    cout << "Sexo (M ou F): ";
    cin >> sexo;

    cout << "Numero de filhos: ";
    cin >> n_filhos;

    cout << "Salario: ";
    cin >> salario;
}

// Metodo para calcular a soma do salario dos habitantes Homens.
float Habitante::mediaSalario(Habitante H[], int qtd_cadastrados)
{
    float soma = 0;
    int qtd_homens = 0;

    // Laco para calcular a soma dos salarios dos habitantes.
    for (int i = 0; i < qtd_cadastrados; i++)
    {
        if (H[i].sexo == 'M' || H[i].sexo == 'm')
        {
            soma += H[i].salario;
            qtd_homens++;
        }
    }

    return soma / qtd_homens;
}

// Metodo para calcular a soma de filhos por habitante.
int Habitante::somaFilhos(Habitante H[], int qtd_cadastrados)
{
    int soma = 0;

    // Laco para calcular a soma do numero de filhos dos habitantes.
    for (int i = 0; i < qtd_cadastrados; i++)
    {
        soma += H[i].n_filhos;
    }

    return soma;
}

// Metodo para mostrar todas as informacoes dos homens com salario
// abaixo da media e quantidade de filhos acima da media.
void Habitante::exibirInformacoes(Habitante H[], float mediaSalario, int mediaFilhos, int qtd_cadastrados)
{
    // Percorre todos os habitantes cadastrados.
    for (int i = 0; i < qtd_cadastrados; i++)
    {
        // Verifica se o habitante eh do sexo masculino
        if (H[i].sexo == 'M' || H[i].sexo == 'm')
        {
            // Verifica se o salario eh abaixo da media e se o numero de filhos eh acima da media.
            if (H[i].salario < mediaSalario && H[i].n_filhos > mediaFilhos)
            {
                cout << "\n\n==== Habitante ====" << endl;
                cout << "Nome: " << H[i].nome << endl;
                cout << "Idade: " << H[i].idade << endl;
                cout << "Sexo: " << H[i].sexo << endl;
                cout << "Salario: " << H[i].salario << endl;
                cout << "Numero de Filhos: " << H[i].n_filhos << endl;
            }
        }
    }
}

// Funcao Principal.
int main(void)
{
    Habitante H[20];
    int qtd_cadastrados = 0; // Habitantes cadastrados.
    bool continuar = true;
    int opcao;
    
    // Loop para cadastro de habitante.
    while (continuar)
    {
        cout << "\n\n==== Menu ====" << endl;
        cout << "0- Sair.\n1- Cadastrar Habitante.\nOpcao: ";
        cin >> opcao;

        switch (opcao)
        {

        case 0:
            continuar = false;
            break;

        case 1:
            if(qtd_cadastrados < tam)
            {
                H[qtd_cadastrados++].cadastroHabitante();
            }
            break;
        
        default:
            cout << "\n\nOpcao invalida!\n";
            break;
        }
    }

    // Chama os metodos de soma da classe habitante e faz a media de cada metodo.
    float mediaSalario = H[0].mediaSalario(H, qtd_cadastrados);
    int mediaFilhos = H[0].somaFilhos(H, qtd_cadastrados) / qtd_cadastrados;
    
    // Chama o metodo para exibir os habitantes com salario menor que a media e quantidade de filhos maior que a media.
    H[0].exibirInformacoes(H, mediaSalario, mediaFilhos, qtd_cadastrados);

    cout << "\n\nEncerrando o programa!!\n\n";

    return 0;
}