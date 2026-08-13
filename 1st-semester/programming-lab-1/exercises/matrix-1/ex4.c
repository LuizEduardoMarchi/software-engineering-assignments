#include <stdio.h>
#include <locale.h>
#define tam 5
int main(){
    setlocale(LC_ALL, "portuguese");
    int mat[tam][tam],i,j,x;
    for(i=0;i<tam;i++){
        for(j=0;j<5;j++){
            printf("Digite um numero:");
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Digite um numero para multiplicar a matriz:");
    scanf("%d", &x);

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(j==1){
                mat[i][j]=mat[i][j]*x;
            }
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d, ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
