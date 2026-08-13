#include <iostream>
using namespace std;

void media(float a, float b)
{
    float m;
    m = (a + b) / 2;
    cout << "A media final foi: " << m;
}
int main()
{
    float n1,n2;

    cout << "Digite o primeiro numero: ";
    cin >> n1;

    cout << "Digite o segundo numero: ";
    cin >> n2;

    media (n1,n2);

    return 0;
}