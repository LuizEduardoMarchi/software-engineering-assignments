#include <iostream>
using namespace std;

int main(){
    int stq_a,stq_max,stq_min;
    float stq_med;

    cout<<"Digite a quantidade atual de estoque:";
    cin>>(stq_a);

    cout<<"Digite a quantidade maxima de estoque:";
    cin>>(stq_max);

    cout<<"Digite a quantidade minina de estoque:";
    cin>>(stq_min);

    stq_med = (stq_max + stq_min)/2;

    if(stq_med > stq_a){
        cout<<"Nao Efetuar compra de novo estoque!!";
    }else
        cout<<"Efetuar compra de estoque!!";

    return 0;

}
