#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int mat[5][5],i,j,sdiag=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Digite um numero:");
            scanf("%d", &mat[i][j]);
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i==j){
                sdiag=sdiag+mat[i][j];
            }
        }
    }
    printf("O resultado da soma da diagonal principal é:%d", sdiag);
    return 0;
}
