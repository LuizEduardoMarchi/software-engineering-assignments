#include <iostream>
using namespace std;

void segundos (int hr, int mins, int segs)
{
    int segundos = 0;

    segundos = ((hr * 3600) + (mins * 60) + segs);

    cout << "Os segundos totais foram: " << segundos;
}


int main()
{
    int hr,mins,segs;

    cout << "Digite as horas: ";
    cin >> hr;

    cout << "Digite os minutos: ";
    cin >> mins;

    cout << "Digite os segundos: ";
    cin >> segs;

    segundos(hr,mins,segs);

    return 0;
}

