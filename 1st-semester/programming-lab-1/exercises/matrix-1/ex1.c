#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    int vet[5][5],i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Digite um numero:");
            scanf("%d", &vet[i][j]);
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            vet[i][j] = vet[i][j]*2;
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d  ",vet[i][j]);
        }
    printf("\n");
    }
    return 0;
}
