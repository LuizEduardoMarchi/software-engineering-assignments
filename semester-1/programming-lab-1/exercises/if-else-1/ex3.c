#include <stdio.h>
void main (){
    int n1, n2, dif;
    printf("Escreva o primeiro numero:");
    scanf("%d", &n1);
    printf("Escreva o segundo numero:");
    scanf("%d", &n2);
    if(n1 >= n2){
        dif = n1 - n2;
    }else{
        dif = n2 - n1;
        }
    printf("A diferença entre os numeros é:%d", dif);

}
