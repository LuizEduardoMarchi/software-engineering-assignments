#include <stdio.h>
#include <locale.h>
void main (){
    setlocale(LC_ALL,"portuguese");
    int temp_s;
    float salario, salaf;
    printf("Digite o salario atual do funcionario:");
    scanf("%f", &salario);
    printf("Digite o tempo de serviço do funcionario em anos:");
    scanf("%d", &temp_s);
    if(temp_s<10)
        salaf=salario * 1.08;
    else
        salaf=salario * 1.1;
    printf("O salario reajustado comforme %d anos é de:%.2f",temp_s, salaf);
}
