#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int mat[5][5],i,j,x;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Digite um numero:");
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Digite um numero para multiplicar a matriz:");
    scanf("%d", &x);
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
                mat[i][j]=x+mat[i][j];
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
        printf("%d ,",mat[i][j]);
        }
    printf("\n");
    }

    return 0;
}

