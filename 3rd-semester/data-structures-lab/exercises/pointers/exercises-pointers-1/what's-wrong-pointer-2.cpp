#include <iostream>
using namespace std;

int main(void)
{
    int X;
    int *P;

    X = 10;

    /*  O erro esta em atribuir o valor de X para P, fazendo apenas uma copia do valor de X ao inves de passar o endereco de memoria de X
     P = X; //   Errado
    */

    P = &X;

    printf("%d\n", *P);

    return 0;
}