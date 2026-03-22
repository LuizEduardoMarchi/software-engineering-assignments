#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    float f,temp;
    f=50;
    do{
        temp=5.0/9.0*(f-32);
        printf("\nA temperatura %.0f em graus centigrados é:%.1f",f,temp);
        f=f+1;
    }while(f<=70);
}
