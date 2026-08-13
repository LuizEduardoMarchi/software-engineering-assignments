// Inclusão de bibliotecas
#include <string.h>
#include <iostream>
using namespace std;

int main() // Função principal
{
    char frase[101]; // String para ler a frase de ate 100 caracteres
    int a = 0, e = 0, i = 0, o = 0, u = 0; // Variaveis para cada vogal 

    // Leitura da frase
    cout << "Digite uma frase qualquer: ";
    gets(frase);

    for (int j = 0; j < strlen(frase) - 1; j++)
    {
        if (frase[j] == 'a' || frase[j] == 'A') // Testa se existe uma vogal A
        {
            a++;
        }
        else if (frase[j] == 'e' || frase[j] == 'E') // Testa se existe uma vogal E
        {
            e++;
        }
        else if (frase[j] == 'i' || frase[j] == 'I') // Testa se existe uma vogal I
        {
            i++;
        }
        else if (frase[j] == 'o' || frase[j] == 'O') // Testa se existe uma vogal O
        {
            o++;
        }
        else if (frase[j] == 'u' || frase[j] == 'U') // Testa se existe uma vogal U
        {
            u++;
        }
    }

    // Imprime os resultados
    cout << "\nNumero de vogais" << endl;
    cout << "\nA: " << a;
    cout << "\nE: " << e;
    cout << "\nI: " << i;
    cout << "\nO: " << o;
    cout << "\nU: " << u;

    return 0;
}