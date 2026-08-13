#include <iostream>
#include <locale.h>
#define tam 5

using namespace std;

int main (){
    setlocale(LC_ALL, "Portuguese");

    int matriz[tam][tam],i,j,x;

    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            cout<<"Digite o "<<j+1<<"° Numero:"<<endl;
            cin>>matriz[i][j];
        }
    }

    cout<<"Digite um numero para multiplicar a matriz:"<<endl;
    cin>>x;

    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            matriz[i][j] = matriz[i][j] * x;
        }
    }
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
