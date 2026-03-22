#include <stdio.h>

void main (){
    int i, j;
    printf("\nSaida Gerada:\n\n");
    for(i = 6; i >= 1; i--){
        for(j = 6; j >= i; j--){
            printf("  %d", j);
        }
        printf("\n");
    }
}
