#include <iostream>
#include <string.h>

using namespace std;

int main(){

    int numerocaractere = 0;
    char frase[30],caractere;

    cout << "Digite uma frase qualquer:";
    gets(frase);

    cout << "Digite o caractere a ser procurado:";
    cin >> caractere;

    for(int i=0; i < strlen(frase); i++)
    {
        if(frase[i] == caractere)
        {
            numerocaractere ++;
        }
    }

    cout << "A quantidade de caracteres igual a " << caractere << " foi de:" << numerocaractere << endl;

    return 0;
}
