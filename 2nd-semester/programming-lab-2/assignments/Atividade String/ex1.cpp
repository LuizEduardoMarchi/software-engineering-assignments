// Inclusão de bibliotecas
#include <string.h>
#include <iostream>
using namespace std;

int main() // Função principal
{
    char palavra[16]; // String para palavra
    int tamanho = 0; // Variavel para tamanho da string
    int palindromo = 1; // Variavel para armazenar se é palindromo

    // Leitura da palavra
    cout << "Digite uma palavra: ";
    gets(palavra); 

    tamanho = strlen(palavra); // Atribui o tamanho da palavra a tamanho

    // Laço para verificar se a palavra é palindromo
    for (int i = 0, j = tamanho - 1; i < j; i++, j--)
    {
        if (palavra[i] == palavra[j]) //Teste se a palavra é palindromo
        {
            palindromo = 1;
        }
        else
        {
            //Encera o programa caso encontre uma letra diferente
            palindromo = 0;
            break;  
        }
    }

    if (palindromo == 1) // Verifica se foi encontrada uma palavra palindromo
    {
        cout << "A palavra " << palavra << " e palindromo" << endl; // Imprime o resultado
    }
    else
    {
        cout << "A palavra " << palavra << " nao e Palindromo" << endl; // Imprime o resultado
    }

    
    cout << "\n"; // Quebra de linha
    return 0;
}
