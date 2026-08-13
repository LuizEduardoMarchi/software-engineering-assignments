#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
     FILE *registro_cliente;
    FILE *conta_bancaria;

    char registro[100],cod_cliente[5];
    int num_conta, num_cliente, cod;
    float saldo;
    int codigo;
    int k = 0;

    conta_bancaria = fopen("conta_bancaria.txt", "a+");
    registro_cliente = fopen("registro_cliente.txt", "a+");

    if (registro_cliente == NULL) return 1;
    if (conta_bancaria == NULL) return 1;

    while (fgets(registro, 100, registro_cliente) != NULL)
    {
        int i = 0;
        int j = 0;
        
        while(registro[i] != ' ')
        {
            cod_cliente[j++] = registro[i++]; 
        }
        cod_cliente[j] = '\0';

        num_cliente = atoi(cod_cliente);
        fprintf(conta_bancaria, "%d \n", num_cliente);
        k++;
    }

    for(int l = 0; l < k; l++)
    {
        cout << "Digite o codigo da conta bancaria a ser criado: ";
        cin >> codigo;

        cout << "Digite o saldo do cliente";
        cin >> saldo;

        fprintf(conta_bancaria, "%d %.2f",codigo,saldo);
    }

    fclose(conta_bancaria);
    fclose(registro_cliente);
    return 0;
}