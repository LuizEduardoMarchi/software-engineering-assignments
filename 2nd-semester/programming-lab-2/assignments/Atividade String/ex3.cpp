// Inclusão de bibliotecas
#include <string.h>
#include <iostream>
using namespace std;

int main() // Função principal
{
    // Area de variaveis
    char frase[100]; // String para ler uma frase
    int tamanho = 0; // Variavel para armazenar o tamanho da string

    // Leitura da string
    cout << "Digite uma frase qualquer: ";
    _flushall();
    gets(frase);

    // Atribui o tamanho da string para a variavel tamanho
    tamanho = strlen(frase);

    //Laço para reescrever a palavra na ordem inversa
    for (int i = tamanho - 1; i >= 0; i--)
    {
        if (frase[i] == ' ' || i == 0) // Testa se a palavra na posição I é igual a um espaço ou igual a primeira palavra
        {
            int iniciofrase; // Variavel de inicio de frase

            if (i == 0) //Testa se é a primeira letra da string
            {
                iniciofrase = 0;
            }
            else
            {
                iniciofrase = i + 1;
            }

            // Laço para reescrever a string na ordem inversa
            for (int j = iniciofrase; j <= tamanho && frase[j] != ' '; j++)
            {
                cout << frase[j]; //Imprime o resultado
            }
            cout << " "; //Quebra de linha
        }
    }

    return 0;
}