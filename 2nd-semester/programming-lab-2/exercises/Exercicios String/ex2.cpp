#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char str1[50],str2[50];

    cout << "Digite uma string:";
    gets(str1);

    cout << "Digite outra string:";
    gets(str2);

    cout << "\n" << strcat(str1,str2);
    cout << "\n" << str2 << endl;

    return 0;
}
