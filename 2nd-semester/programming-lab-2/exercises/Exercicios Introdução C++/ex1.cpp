#include <iostream>
using namespace std;

int main(){
    int h,m,s,aux;

    cout<<"Digite as horas:";
    cin>>h;

    cout<<"Digite os minutos:";
    cin>>m;

    cout<<"Digite os segundos:";
    cin>>s;

    s = (s + (m * 60) + (h * 3600));

    cout<<"O valor em segundos foi de:"<<s<<endl;

    return 0;
}
