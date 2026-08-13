#include <iostream>
#define tam 10

using namespace std;

int main(){

    int vet[tam],i,cont_maior=0, cont_menor=0;
    float media;

    for(i = 0; i < tam; i++){
        cout<<"Digite um numero qualquer:";
        cin>>vet[i];
    }
    for(i = 0; i < tam; i++){
        media += vet[i];
    }
    media = media/10;
    for(i = 0; i < tam; i++){
        if(vet[i] >= media){
            cont_maior++;
        }else
            cont_menor++;
    }

    cout<<"A Media foi de:"<<media<<endl;
    cout<<"A quantidade de numeros menores que a media foi de:"<<cont_menor<<endl;
    cout<<"A quantidade de numeros maiores ou igual a media foi de:"<<cont_maior<<endl;

    return 0;
}
