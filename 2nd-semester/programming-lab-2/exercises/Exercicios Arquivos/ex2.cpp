/*Uma loja de revenda de automóveis mantém, em um arquivo, os dados dos veículos
que estão disponíveis à venda, tais como: modelo, fabricante, cor, ano,
placa e valor. Para auxiliar os vendedores da loja, faça um programa para ler,
do usuário, o modelo de um veículo desejado e apresentar a cor, o ano e o valor
dos veículos equivalentes que estão cadastrados no arquivo.*/

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    char registro[45], modelo[15], fabricante[20], cor[10], placa[10];
    char mod[15];
    int ano;
    float preco;
    FILE *arquivo;
    int i, j;

    arquivo = fopen("revenda.txt", "r");

    cout << "Digite um modelo para consulta: ";
    gets(mod);

    while (fgets(registro, 45, arquivo) != NULL)
    {
        i = j = 0;
        while (registro[i] != ' ')
        {
            modelo[j++] = registro[i++];
        }
        modelo[j] = '\0';
        j = 0;

        while (registro[i] != ' ')
        {
            fabricante[j++] = registro[i++];
        }
        fabricante[j] = '\0';
        j = 0;

        while (registro[i] != ' ')
        {
            cor[j++] = registro[i++];
        }
        cor[j] = '\0';
        j = 0;

        while (registro[i] != ' ')
        {
            ano[j++] = registro[i++];
        }
        ano[j] = '\0';
        j = 0;

        while (registro[i] != ' ')
        {
            placa[j++] = registro[i++];
        }
        placa[j] = '\0';
        j = 0;

        while (registro[i] != ' ' && registro[i] != '\n')
        {
            cor[j++] = registro[i++];
        }
        cor[j] = '\0';
        j = 0;

        if (strcmp(modelo, mod) == 0)
        {
            cout << "\n"
                 << modelo << fabricante << ano << placa << endl;
        }
    }

    fclose(arquivo);
    return 0;
}