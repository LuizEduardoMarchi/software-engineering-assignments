#include <stdio.h>
#include <locale.h>
void main (){
    setlocale(LC_ALL, "portuguese");
    int n, resto;
    n=0;
    while(n<=10)
    {
        printf("%d\n", n);
        n=n+2;

    }

}
