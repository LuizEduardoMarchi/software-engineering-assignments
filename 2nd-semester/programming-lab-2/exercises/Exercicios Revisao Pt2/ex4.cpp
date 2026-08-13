#include <iostream>

using namespace std;

int main(){

    int i,n,soma=0;

    cout << "Digite um numero inteiro qualquer:";
    cin >> n;

    for(i = 1; i <= n; i++){
        soma += i * 2;
    }
    cout << "O resultado final foi:" << soma <<endl;

    return 0;

}
