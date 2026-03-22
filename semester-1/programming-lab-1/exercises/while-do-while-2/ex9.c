#include <stdio.h>

void main (){
    int i, j;
    printf("\nSaida Gerada:\n\n");
    for(i = 1; i <= 6; i++){
        for(j = 1; j <= i; j++){
            printf("  %d", j);
        }
        printf("\n");
    }
}
