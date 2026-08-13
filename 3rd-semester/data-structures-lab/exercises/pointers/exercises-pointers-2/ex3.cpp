#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void)
{
    int n;

    cout << "Digite o tamanho dos vetores: ";
    cin >> n;

    int *V1 = (int *) malloc(n * sizeof(int));

    int *V2 = (int *) malloc(n * sizeof(int));

    int *V3 = (int *) malloc(n * sizeof(int));

    int *pt1 = V1;
    int *pt2 = V2;
    int *pt3 = V3;

    for (int i = 0; i < n; i++)
    {
        cout << "1" << char(167) << " Vetor - " << "Digite o " << i + 1 << char(167) << " numero: ";
        cin >> *pt1;
        pt1++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "1" << char(167) << " Vetor - " << "Digite o " << i + 1 << char(167) << " numero: ";
        cin >> *pt2;
        pt2++;
    }

    pt1 = V1;
    pt2 = V2;

    for (int i = 0; i < n; i++)
    {
        *pt3 = *pt1 + *pt2;
        pt1++;
        pt2++;
        pt3++;
    }

    pt3 = V3;

    for (int i = 0; i < n; i++)
    {
        cout << *pt3++ << ", ";
    }

    free(V1);
    free(V2);
    free(V3);

    return 0;
}
