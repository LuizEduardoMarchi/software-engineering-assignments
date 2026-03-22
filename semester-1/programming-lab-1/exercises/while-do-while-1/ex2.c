#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    float n;
    printf("Digite um numero qualquer:");
    scanf("%f", &n);
    while(n>1)
        n=(n/2);
        printf("%f\n", n);
}
