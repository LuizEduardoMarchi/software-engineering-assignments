#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void)
{
    int vetor[5] = {1, 2, 3, 4, 5};
    int *pont;

    pont = vetor; // dessa forma ja passa o endereco do valor base do vetor
    // ou
    int *pont2 = &vetor[2];


    cout << *pont << endl;
    cout << *pont2 << endl;

    return 0;
}
