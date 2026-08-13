#include <iostream>
#include <locale.h>
#define tam 10

using namespace std;

int main (){
    setlocale(LC_ALL, "portuguese");

    int vet[tam],i,aux = 0;

    for(i = 0; i < tam; i++){
        cout<<"Digite um numero qualquer:";
        cin>>vet[i];
    }
    for(i = 0; i < 5; i++){
        aux = vet[i];
        vet[i] = vet[tam - 1 - i];
        vet[tam - 1 - i] = aux;
    }
    for(i = 0; i < tam; i++){
        cout<<i<<"°"<<vet[i]<<endl;
    }

    return 0;
}
