#include <stdio.h>
#include <locale.h>
void main (){
    setlocale(LC_ALL,"portuguese");
    float hrt,valhr,sal;
    int hrex;
    printf("Digite quantas horas trabalhadas:");
    scanf("%f", &hrt);
    printf("Digite o valor da hora de trabalho:");
    scanf("%f", &valhr);
    if(hrt>40){
        hrex=hrt-40;
        sal=(40*valhr)+(hrex*valhr*1.5);
    }else{
        sal=hrt * valhr;
    }
    printf("O Salario é de:%.2f", sal);

}
