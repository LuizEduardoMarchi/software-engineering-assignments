#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");

    int cod, cont = 0;
    float valor;

    cout << "Digite o codigo do produto a ser calculado o desconto:";
    cin >> cod;

    cout << "Digite o valor do produto:";
    cin >> valor;

    switch (cod){
    case 1001:
        valor = valor * 0.78;
    break;
    case 1254:
        valor = valor * 0.70;
    break;
    case 1548:
        valor = valor * 0.68;
    break;
    case 1687:
        valor = valor * 0.63;
    break;
    case 1923:
        valor = valor * 0.60;
    break;
    default:
        cout << "Codigo Invalido!";
        cont = 1;
    }
    if(cont != 1)
        cout << "O valor do produto de codigo " << cod << " é:" << valor << endl;

    return 0;

}
