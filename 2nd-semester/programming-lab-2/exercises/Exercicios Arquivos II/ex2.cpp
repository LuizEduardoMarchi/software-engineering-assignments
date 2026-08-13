#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    FILE *registro_cliente;

    char nome[50];
    int num_cliente;
    bool  continuar = true;
    int i = 1;
    
    registro_cliente = fopen("registro_cliente.txt", "a+");

    if(registro_cliente == NULL)
    {
        cout << "ERRO, Arquivo nao encontrado!!";
        return 1;
    }

    while(continuar)
    {
        fflush(stdin);

        cout << "\nCadastro do " << i << " cliente!" << endl;
        cout << "Digite o nome do Cliente: ";
        gets(nome);

        cout << "\nDigite o numero do cliente: ";
        cin >> num_cliente;

        cout << "Deseja continuar o processo de cadastro de novos clientes?" << endl;
        cout << "0 -  Sair \n1- Continuar \n:";
        cin >> continuar;
        
        fprintf(registro_cliente, "%d %s\n", num_cliente, nome);
        i++;
    }

    cout << "Usuario(s) cadastrado(s) com sucesso!!";
    
    fclose(registro_cliente);
    return 0;
}

    