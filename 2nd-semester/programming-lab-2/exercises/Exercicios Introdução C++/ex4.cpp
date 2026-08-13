#include <iostream>

using namespace std;

int main(){

    float total_vendas, salario;

    cout << "Digite o salario do funcionario:";
    cin >> salario;

    cout << "Digite o valor total de vendas deste mes:";
    cin >> total_vendas;

    salario = salario + (total_vendas * 0.05);

    cout << "O salario do funcionario sera de:" << salario << endl;

    return 0;
}
