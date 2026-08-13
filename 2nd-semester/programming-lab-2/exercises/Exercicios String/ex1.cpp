#include <string.h>
#include <iostream>

using namespace std;

int main(){

    char frase[50];

    cout << "Digite uma frase em maiusculo:";
    gets(frase);

    cout << "\n" << strlwr(frase) << endl;

    return 0;
}
