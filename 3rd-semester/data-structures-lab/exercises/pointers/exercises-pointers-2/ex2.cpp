#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void)
{
     int a[9];
    for (int i = 0; i < 9; ++i)
    {
        a[i] = 8 - i;
        cout << a[i] << ", ";
    }

    for (int i = 0; i < 9; ++i)
        {
            a[i] = a[a[i]];
        }
    cout << "\n" << endl;

    for(int i = 0; i < 9; i++)
    {
     cout << a[i] << ", ";
    }

    cout << "\n" << endl;

    return 0;
}
