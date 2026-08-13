#include <iostream>
#include <string.h>
#define tam 100

using namespace std;

 int main(){

    char frase[tam];

    cout << "Digite uma frase:";
    gets(frase);

    for(int i = strlen(frase) - 1; i >= 0; i--){
        cout << frase[i];
    }

    return 0;
 }
