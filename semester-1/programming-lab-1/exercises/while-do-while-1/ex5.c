#include <stdio.h>

void main (){
    int termo = 0;
    int N;
    int i = 1;
    printf("\nInforme a qtde de termos para a sequencia: ");
    scanf("%d", &N);
    printf("\n\nSequencia de %d termos :", N);
    while(i <= N){
        termo = termo + i;
        i++;
        printf("  %d", termo);
    }
    printf("\n\n");
}
