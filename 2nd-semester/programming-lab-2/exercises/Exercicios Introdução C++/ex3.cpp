#include <iostream>

using namespace std;

int main(){

    float dep;

    cout<<"Digite o valor a ser depositado:";
    cin>>dep;

    dep = dep * 1.06;

    cout<<"O valor depositado corrigido apos 1 mes foi de:"<<dep<<endl;

    return 0;
}
