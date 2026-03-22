#include <stdio.h>
void main (){
    float anos, meses, dias, soma_a, soma_m, soma_d;
    printf("escreva sua idade em anos:");
    scanf("%f", &anos);
    printf("escreva os meses:");
    scanf("%f", &meses);
    printf("escreva os dias:");
    scanf("%f", &dias);
    soma_a = anos * 12;
    soma_m = (soma_a + meses) * 30;
    soma_d = soma_m + dias;
    printf("Sua idade completa em dias é:%g", soma_d);

}
