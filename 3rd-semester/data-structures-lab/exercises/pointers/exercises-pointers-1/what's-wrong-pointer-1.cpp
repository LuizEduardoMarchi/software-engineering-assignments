#include <iostream>
using namespace std;

int main(void)
{
    int X;
    int *P;

    X = 10;

    //  Erro esta na atribuicao, onde X deveria esta atribuindo o endereco de memoria para a variavel P
    *P = X; //  Errado

    P = &X; //  Certo

    return 0;
}