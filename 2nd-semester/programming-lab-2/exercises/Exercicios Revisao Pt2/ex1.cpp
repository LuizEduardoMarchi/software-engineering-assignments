#include <iostream>

using namespace std;

int main (){

    float peso = 0, m_peso = 0;

    do{
       cout<<"Digite seu peso:"<<endl;
        cin>>peso;
        if(peso > m_peso){
            m_peso = peso;
        }

    }while(peso != 0);

    cout<<"O maior peso foi:"<<m_peso<<endl;

    return 0;
}
