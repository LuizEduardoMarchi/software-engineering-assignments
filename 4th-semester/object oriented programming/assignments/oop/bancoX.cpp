#include <iostream>
#include <stdio.h>
#include <iomanip>
#define tam 100
using namespace std;

// Classe BancoX
class BancoX
{
private:
    char Nome[200];
    char CPF[20];
    char telefone[20];
    char endereco[200];
    int numero_conta;
    float saldo = 0;
public:
    int cadastroCliente(int clientes_cadastrados);
    void efetuarSaque(float valor);
    void efetuarDeposito(float valor);
    void exibirDadosCliente();
    int retornaNumeroConta();
    static int contadorContas; 
};

// Gerador de ID/Numero da conta dos clientes com valor base = 1000.
int BancoX::contadorContas = 1000;

// Metodo para realizar o cadastro do cliente.
int BancoX::cadastroCliente(int clientes_cadastrados)
{
    if (clientes_cadastrados < tam)
    {
        // Gera o numero unico da conta automaticamente adicionando 1 ao valor base.
        numero_conta = ++contadorContas;

        cout << "\n\n==== Cadastro Usuario ====" << endl;

        cout << "Nome: ";
        _flushall();
        gets(Nome);

        cout << "CPF: ";
        _flushall();
        gets(CPF);

        cout << "Telefone (exemplo: 99 99999 9999): ";
        _flushall();
        gets(telefone);

        cout << "Endereco (exemplo: Rua, Numero, Bairro, Cidade): ";
        _flushall();
        gets(endereco);

        cout << "\n\nCliente cadastrado com sucesso!" << endl;
        cout << "Numero da conta: " << numero_conta << endl;
        clientes_cadastrados++;
        saldo = 0;
    }
    else
    {
        cout << "\n\nNumero maximo de clientes cadastrado atingido!\n" << endl;
    }

    return clientes_cadastrados;
}

// Metodo para realizar deposito.
void BancoX::efetuarDeposito(float valor)
{
    saldo += valor; // Incrementa o saldo
    cout << "\n\nDeposito realizado com Sucesso!" << endl;
    cout << "Novo saldo bancario: " << fixed << setprecision(2) << saldo << "\n" << endl;
}

// Metodo para realizar saque.
void BancoX::efetuarSaque(float valor)
{
    // Verifica se há saldo o suficiente.
    if (valor > saldo)
    {
        cout << "\n\nSaldo Insuficiente!\n";
    }
    else    
    {
        saldo -= valor; // Decrementa o saldo
        cout << "\n\nSaque realizado com Sucesso!\n";
        cout << "Novo saldo bancario: " << fixed << setprecision(2) << saldo << "\n" << endl;
    }
}

// Metodo para exibir os dados do cliente.
void BancoX::exibirDadosCliente()
{
    cout << "\n\n==== Cliente ====\n" << endl;
    cout << "Nome: " << Nome << endl;
    cout << "Codigo: " << numero_conta << endl;
    cout << "Saldo: " << saldo << endl;
    cout << "Telefone: " << telefone << endl;
    cout << "Endereco: " << endereco << endl;
}

// Metodo para retornar o numero da conta do cliente.
int BancoX::retornaNumeroConta()
{
    return numero_conta;
}

int main(void)
{
    BancoX Cliente[100];
    int clientes_cadastrados = 0, i = 0;
    bool continuar = true, encontrado = false, logado = false;
    int opcao, codigo;
    float valor;


    while(continuar)
    {
        cout << "\n\n==== Menu ====" << endl;
        cout << "0- Sair.\n1- Entrar na conta.\n2- Cadastrar novo usuario.\nOpcao: ";
        cin >> opcao;

        switch (opcao)
        {
        case 0:
            continuar = false;
            break;
        
        case 1:
            cout << "Digite o codigo da conta: ";
            cin >> codigo;

            // Verifica se existe ao menos umcliente cadastrado.
            if (clientes_cadastrados != 0)
            {
                // Loop de busca pela conta do cliente.
                for (i = 0; i < clientes_cadastrados; i++)
                {
                    if(codigo == Cliente[i].retornaNumeroConta())
                    {
                        cout << "\n\nLogin feito com sucesso!" << endl;
                        encontrado = true;
                        logado = true;
                        break;
                    }
                }

                // Verifica se o usuario foi encontrado
                if(encontrado)
                {
                    // Loop de repeticao do menu, para somente quando o usuario deslogar.
                    while(logado)
                    {
                        cout << "\n\n==== Menu ====" << endl;
                        cout << "0- Sair.\n1- Deposito (exemplo: 200).\n2- Saque (exemplo: 200).\n3- Exibir dados da conta.\nOpcao: ";
                        cin >> opcao;

                        // Selecao do menu.
                        switch (opcao)
                        {
                        case 0:
                            logado = false;
                            encontrado = false;
                            break;
                        case 1: 
                            cout << "Valor: ";
                            cin >> valor;

                            // Verifica se o valor a depositar eh positivo.
                            if(valor > 0)
                            {   
                                Cliente[i].efetuarDeposito(valor);
                            }
                            else
                            {
                                cout << "\nDeposito Invalido!" << endl;
                            }
                            
                            break;

                        case 2:
                            cout << "Valor: ";
                            cin >> valor;

                            // Verifica se o valor a depositar eh positivo.
                            if(valor > 0)
                            {   
                                Cliente[i].efetuarSaque(valor);
                            }
                            else
                            {
                                cout << "\nSaque Invalido!";
                            } 
                            break;

                        case 3:
                            Cliente[i].exibirDadosCliente();
                            break;

                        default:
                            cout << "\nOpcao Invalida!\n" << endl;
                            break;
                        }
                    }
                }
                else
                {
                    cout << "\n\nCliente nao encontrado!\n" << endl;
                }
            }
            else
            {
                cout << "\n\nErro! Nenhum cliente cadastrado.\n" << endl;
            }

            break;
        case 2:
            clientes_cadastrados = Cliente[clientes_cadastrados].cadastroCliente(clientes_cadastrados);
            break;

        default:
            cout << "Opcao Invalida!";
            break;
        }
    }

    cout << "\n\nEncerrando o programa!\n" << endl;

    return 0;
}


/*
// Metodo para exibir os dados do cliente.
void BancoX::exibirDadosCliente(int codigo, int clientes_cadastrados)
{
    // Loop de busca do usuario.
    for (int i = 0; i < clientes_cadastrados; i++)
    {
        if(codigo = numero_conta)
        {
            cout << "\n\n==== Cliente ====\n" << endl;
            cout << "Nome: " << Nome << endl;
            cout << "Codigo: " << codigo << endl;
            cout << "Saldo: " << saldo << endl;
            cout << "Telefone: " << telefone << endl;
            cout << "Endereco: " << endereco << endl; 
        }
    }
}

*/