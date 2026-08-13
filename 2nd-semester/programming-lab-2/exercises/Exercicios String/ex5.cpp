#include <iostream>
#include <string.h>
#define tam 100

using namespace std;

int main(){

    char nome[tam],maiornome[tam],menornome[tam];
    int n = 0;
    int nomescoma = 0;

    strcpy(maiornome,nome);
    strcpy(menornome,nome);

    if (nome[strlen(nome) - 1] == 'a' || nome[strlen(nome) - 1] == 'A'){
                nomescoma++;
            }

    while(n < 10){
            cout << "Digite o seu nome:";
            gets(nome);

            if(strlen(nome) > strlen(maiornome)){
                strcpy(maiornome,nome);
            }

            if(strlen(nome) < strlen(menornome)){
                strcpy(menornome,nome);
            }

            if (nome[strlen(nome) - 1] == 'a' || nome[strlen(nome) - 1] == 'A'){
                nomescoma++;
            }
        n++;
    }

    cout << "O maior nome foi:" << maiornome << endl;
    cout << "O menor nome foi:" << menornome << endl;
    cout << "A quantidade de nomes que terminam com A foram:" << nomescoma << endl;

    return 0;
}
