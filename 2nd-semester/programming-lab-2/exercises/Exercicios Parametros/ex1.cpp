/*Elabore um programa contendo uma função que receba as três notas de um aluno como
parâmetros e uma letra. Se a letra for A, a função deverá calcular a média aritmética das
notas do aluno; se for P, deverá calcular a média ponderada, com pesos 5, 3 e 2. A média
calculada deverá ser devolvida ao programa principal para, então, ser mostrada. */

#include <iostream>
using namespace std;

int mediaA (int n1, int n2, int n3)
{
    float media = (n1 + n2 + n3) / 3.0;;

    return media;
}

int mediaP (int n1, int n2, int n3)
{
    float media = (5 * n1 + 3 * n2 + 2 * n3) / 10.0;

    return media;
}

int main() {

    int nota1,nota2,nota3;
    char tipomedia;
    
    cout << "Digite a primeira Nota: ";
    cin >> nota1;

    cout << "Digite a segunda Nota: ";
    cin >> nota2;
    
    cout << "Digite a terceira Nota: ";
    cin >> nota3;
    
    do {
        cout << "Digite (A - Media Aritmetica ou P - Media Ponderada): ";
        cin >> tipomedia;
        tipomedia = toupper(tipomedia);
    } while (tipomedia != 'A' && tipomedia != 'P'); 

    if(tipomedia == 'A')
    {
        cout << mediaA(nota1,nota2,nota3);
    }else{
        cout << mediaP(nota1,nota2,nota3);
    }

    return 0;
}