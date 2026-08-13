#include <iostream>

using namespace std;

int main(){

    float nota;

    cout << "Digite a nota do aluno de 0 a 10:";
    cin >> nota;

    if(nota < 0 || nota > 10)
        {
        cout << "Nota Invalida!" << endl;

    }else
        if(nota >= 0 && nota < 5)
            {
            cout << "Nota Ruim" << endl;

            }else
                if(nota >= 5 && nota < 8)
                {
                cout << "Nota Regular" << endl;

                    }else
                        cout << "Nota Bom" << endl;
    return 0;
}
