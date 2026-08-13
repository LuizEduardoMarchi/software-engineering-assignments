#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    char sexo;
    float alt,pesoi;
    printf("Calculadora de peso ideal");
    printf("\nEscolha seu sexo");
    printf("\nDigite H para Homem e M para mulher:");
    sexo = getche();
    printf("\nDigite sua Altura:");
    scanf("%f", &alt);
    if(sexo=='H'||sexo=='h'){
        pesoi=72.7*alt - 58;
        printf("Seu peso ideal é:%.2f", pesoi);
    }else
        if(sexo=='M'||sexo=='m'){
        pesoi=62.1*alt-44.7;
        printf("O peso ideal para mulher é:%.2f", pesoi);
        }else
            printf("Sexo Invalido!");

}
