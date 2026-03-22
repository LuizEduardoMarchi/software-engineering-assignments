#include <stdio.h>
void main () {
    float volume, raio, altura;
    printf("Digite o raio da lata de oleo:");
    scanf("%f", &raio);
    printf("Digite a altura da lata:");
    scanf("%f", &altura);
    volume = 3.14159 * (raio * raio) * altura;
    printf("O volume da lata de oleo é:%f", volume);
}
