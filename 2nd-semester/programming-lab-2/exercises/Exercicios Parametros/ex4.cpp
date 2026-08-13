/*Construa um programa contendo uma função que receba como parâmetro um valor inteiro
e positivo N e retorne o valor de S, obtido pelo seguinte cálculo:
            S = 1 + 1/1! + 1/2! 1/3! + ... + 1/N!                                   */

#include <iostream>
using namespace std;

float funcaos (int n) // Função que calcula o valor de S
{
    float soma = 1;
    int fat = 1;

    // Laço de contagem
    for (int i = 1; i <= n; i++)
    {
        fat *= i; // Calcula o fatorial
        soma += (float) 1.0 / fat; // Calcula o valor de S
    }

    return soma;
}


int main() // Função principal
{
    int n;

    cout << "Digite um numero inteiro qualquer: ";
    cin >> n;

    // Exibe os resultados
    cout << "O valor obtido foi: " << funcaos(n) << endl;
    cout << "\n\n";
}