#include <stdio.h>
#include <locale.h>
#define tam 5
int main(){
    setlocale(LC_ALL, "portuguese");
    int mat[tam][tam],i,j,sdiagpri=0,sdiagsec=0;
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            printf("Digite um numero:");
            scanf("%d", &mat[i][j]);
        }
    }
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            if(i==j){
                sdiagpri=sdiagpri+mat[i][j];            
            }
        }
    }
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            if(i+j==tam-1){
                sdiagsec=sdiagsec+mat[i][j];            
            }
        }
    }
    if(sdiagpri!=sdiagsec){
        printf("A soma das diagonais s�o diferentes!!");
    }
    else{
        printf("A soma das diagonais s�o iguais!!");
    }
    return 0;
}
