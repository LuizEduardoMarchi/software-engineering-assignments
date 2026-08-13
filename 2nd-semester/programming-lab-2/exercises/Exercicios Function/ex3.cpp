#include <iostream>
#include <iomanip>
using namespace std;

void valors (float n)
{
    float s = 0;

    for(int i = 1; i <= n; i++)
    {
        s = s + (1 / i);
    }
    cout << "O valor final foi: " << setprecision(2) << s << endl;
}

int main()
{
    float n;

    cout << "Digite um numero qualquer: ";
    cin >> n;

    valors(n);

    return 0;
}