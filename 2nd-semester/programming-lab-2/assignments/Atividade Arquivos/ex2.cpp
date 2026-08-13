#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main() // Funcao principal
{
    FILE *arquivo; // Ponteiro para o arquivo

    char registro[100], id[10], nome[35], idade[5]; // Variaveis para armazenar dados retirados do arquivo
    
    // Variaveis para armazenar dados do aluno mais velho
    char nome_mais_velho[35];
    int quantidade_estudantes = 0, idade_mais_velho = -1;
    
    int i,j;

    arquivo = fopen("registro_aluno.txt", "r");
   
    // Verifica a existencia de um arquivo
    if (arquivo == NULL)
    {
        cout << "ERRO, Arquivo nao encontrado!!";
        return 1;
    }
  
    // Laço para retirada de informaçoes do arquivo
    while (fgets(registro, 100, arquivo) != NULL)
    {
        i = j = 0;
        // Leitura do ID
        while (registro[i] != '%') id[j++] = registro[i++];
        id[j] = '\0';
        j = 0;
        i++;

        // Leitura do Nome
        while (registro[i] != '%') nome[j++] = registro[i++];
        nome[j] = '\0';
        j = 0;
        i++;

        // Leitura da Idade
        while (registro[i] != '\n' && registro[i] != '\0') idade[j++] = registro[i++];
        idade[j] = '\0';

        // Verifica se é um aluno mais velho
        if(atoi(idade) > idade_mais_velho)
        {
            idade_mais_velho = atoi(idade);
            strcpy(nome_mais_velho, nome); // copia o nome retirado do arquivo para a string nome_mais_velho
        }

        quantidade_estudantes++;
    }

    // Testa se houve uma quantidade valida de alunos no registro
    if (quantidade_estudantes > 0)
    {
        cout << "Entre " << quantidade_estudantes << " alunos, o aluno mais velho foi:" << endl;
        cout << "Nome: " << nome_mais_velho << endl;
        cout << "Idade: " << idade_mais_velho << endl;
    }
    else
    {
        cout << "Nenhum estudante foi encontrado!!";
    }    

    fclose(arquivo); // Fecha o arquivo
    return 0;
}