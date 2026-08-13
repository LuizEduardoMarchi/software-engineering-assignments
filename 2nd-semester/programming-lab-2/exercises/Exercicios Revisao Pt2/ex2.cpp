#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
    float volume, raio, altura;

    cout<<"Digite o raio da lata:";
    cin>>raio;

    cout<<"Digite a altura da lata:";
    cin>>altura;

    volume = 3.14159 * (raio * raio) * altura;

    cout ;
    cout << "O Volume da lata é de:" << fixed << setprecision(2) << volume << endl;

    return 0;
}
