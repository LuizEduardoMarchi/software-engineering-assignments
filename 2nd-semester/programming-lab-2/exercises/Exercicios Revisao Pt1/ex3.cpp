#include <iostream>
using namespace std;

int main(){
    int flag;
    float salario, val_fin, valorfi;

    cout << "digite seu salario:";
    cin >> (salario);

    cout << "Digite o valor desejado do financiamento:";
    cin >> (val_fin);

    valorfi = salario * 0.3;
    if(val_fin <= valorfi){
        cout << "Financiamento Concedido!";
    }else
        cout << "Financiamento Negado!";

    return 0;
}
