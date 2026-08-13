#include <stdio.h>
#include <locale.h>
#define tam 20
int main(){
    setlocale(LC_ALL,"portuguese");
    char veta[tam],vetb[tam],aux;
    int i;
    for(i=0;i<tam;i++){
        printf("Digite o %d° caractere do vetor A:",i+1);
        scanf(" %c", &veta[i]);
    }
    for(i=0;i<tam;i++){
        printf("Digite o %d° caractere do vetor B:",i+1);
        scanf(" %c", &vetb[i]);
    }
    printf("\nVetor A antes da troca: ");
    for(i = 0; i < tam; i++) {
        printf("%c ", veta[i]);
    }
    printf("\nVetor B antes da troca: ");
    for(i = 0; i < tam; i++) {
        printf("%c ", vetb[i]);
    }
    for(i=0;i<tam;i++){
        aux=veta[i];
        veta[i]=vetb[tam-1-i];
        vetb[tam-1-i]=aux;
    }
    printf("\n\nVetor A depois da troca: ");
    for(i = 0; i < tam; i++) {
        printf("%c ", veta[i]);
    }

    printf("\nVetor B depois da troca: ");
    for(i = 0; i < tam; i++) {
        printf("%c ", vetb[i]);
    }

    return 0;
}
