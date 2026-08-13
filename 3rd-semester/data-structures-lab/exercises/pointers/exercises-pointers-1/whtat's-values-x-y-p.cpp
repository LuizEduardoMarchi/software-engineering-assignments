#include <iostream>
using namespace std;

int main(void)
{
    int x, y;
    int *p;

    y = 0;

    p = &y; // p recebe o endereco de memoria de y

    x = *p; // x vai receber o conteudo de memoria de p

    x = 4;

    (*p)++; // Y eh incrementado em 1

    x--;

    (*p) += x; // Y eh somado com o valor de X

    return 0;
}

// Reposta final X = 3, Y = 4 e P = 4 ou endereco de memoria de Y