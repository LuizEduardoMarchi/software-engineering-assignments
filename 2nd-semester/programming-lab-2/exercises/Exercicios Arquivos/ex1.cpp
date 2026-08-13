/*Faça um programa para ler, em um arquivo, as informações referentes aos produtos de uma
loja de informática cadastrados com os seguintes dados: código, descrição, quantidade em
estoque e preço da unidade. A seguir, o programa deverá apresentar o código, a descrição e o
preço dos produtos com mais de 100 unidades em estoque.*/
/*------------------------------------------------------------------------------------------*/

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main ()
{
    int i,j;
    // ponteiro que vai armazenar onde esta alocado o arquivo de leitura.
    FILE *arquivo;

    // variavel para armazenar os dados, dados do tipo codigo, descricao, quantidade, preco.
    char registro[50],codigo[10],desc[20],qntd[10],preco[10];
    
    // nome arquivo, tipo de leitura.
    arquivo = fopen ("estoque.txt", "r");
    
    // nome da variavel , tamanho da variavel, o arquivo de destino.
    while(fgets(registro, 50, arquivo) != NULL)
    {
        //123 Teclado 130 108.50
        i = j = 0;
        while(registro[i] != ' ')
        {
            codigo[j] = registro[i];
            i++;
            j++;
        }
        codigo[j] = '\0';

        i++;
        j = 0;
        while(registro[i] != ' ')
        {
            desc[j] = registro[i];
            i++;
            j++;
        }
        desc[j] = '\0';
        
        i++;
        j = 0;
        while(registro[i] != ' ')
        {
            qntd[j] = registro[i];
            i++;
            j++;
        }
        qntd[j] = '\0';

        i++;
        j = 0;
        while(registro[i] != '\n' && registro[i] != '\0')
        {
            preco[j] = registro[i];
            i++;
            j++;
        }
        preco[j] = '\0';
        
        int estoque = atoi(qntd);

        if(estoque > 100)
        {
            cout << "\n" << codigo << " " << desc << " R$: " << preco;
        }    
    }

    fclose(arquivo);
    return 0;
}