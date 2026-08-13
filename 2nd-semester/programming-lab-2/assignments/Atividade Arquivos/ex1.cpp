#include <iostream>
#include <stdio.h>
using namespace std;

int main() // Funcao Principal
{
    FILE *arquivo; // Ponteiro para o arquivo
    char nome[50], cpf[15], data_nas[10], endereco[30]; // String para cada informacao do usuario
    bool continuar = true; // Variavel para indicar continuação do programa

    arquivo = fopen("dados.txt", "a+");

    // Verifica se foi criado um arquivo corretamente
    if (arquivo == NULL)
    {
        cout << "ERRO, Arquivo nao encontrado!!" << endl;
        return 1;
    }

    // Loop para entrada de dados
    while (continuar)
    {
        cout << "Digite seu nome: ";
        fflush(stdin);
        gets(nome);

        cout << "Digite seu cpf: ";
        fflush(stdin);
        gets(cpf);

        cout << "Digite sua data de nascimento (dd/mm/aaaa): ";
        fflush(stdin);
        gets(data_nas);

        cout << "Digite seu endereco: ";
        fflush(stdin);
        gets(endereco);

        fprintf(arquivo, "%s&%s&%s&%s\n", nome, cpf, data_nas, endereco); // Armazena os dados recebidos pelo usuario no arquivo

        cout << "Deseja continuar? \n0 - sair\n1 - continuar \n: "; 
        cin >> continuar; // Leitura de continuação de execucao do program
    }

    cout << "\nArquivos Gravados com sucesso!!\n\n";

    fclose(arquivo); // Fecha o arquivo
    return 0;
}