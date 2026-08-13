#include <iostream>
#include <locale.h>
#define tam 5

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
    int matriz[tam][tam],i,j;
    float mediap=0,medias=0;

    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            cout<<"Digite o "<<j+1<<"° numero:";
            cin>>matriz[i][j];
        }
    }

    for(int i = 0; i < tam; i++){
        mediap += matriz[i][i];
    }

    for(int i = 0; i < tam; i++){
        medias += matriz[i][tam - 1 - i];
    }

    mediap = mediap / tam;
    medias = medias / tam;

    cout << "\nMédia da diagonal principal: " << mediap;
    cout << "\nMédia da diagonal secundária: " << medias << "\n";

    if(medias == mediap){
        cout<<"A media das diagonais são iguais";
    }else{
        cout<<"A media das diagonais sao diferentes";
    }
    return 0;
}
