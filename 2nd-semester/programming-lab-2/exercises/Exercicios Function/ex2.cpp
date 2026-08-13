#include <iostream>
using namespace std;

void menorvalor(float n1, float n2, float n3)
{
    float menor = n1;

    if (n2 < menor) {
        menor = n2;
    }
    if (n3 < menor) {
        menor = n3;
    }
    cout << "o menor numero foi: " << menor;
}

int main()
{
    float n1,n2,n3;

    cout << "Digite o primeiro numero: ";
    cin >> n1;

    cout << "Digite o segundo numero: ";
    cin >> n2;

    cout << "Digite o terceiro numero: ";
    cin >> n3;

    menorvalor(n1,n2,n3);

    return 0;
}