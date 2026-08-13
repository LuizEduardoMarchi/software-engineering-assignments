#include <stdio.h>
#include <locale.h>
#define tam 3
int main(){
    setlocale(LC_ALL, "portuguese");
    int mat[tam][tam],transposta[tam][tam],i,j;
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            printf("Digite um numero:");
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\nMatriz original!\n");
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            printf("%d, ", mat[i][j]);
        }
    printf("\n");
    }
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            transposta[j][i] = mat[i][j];
        }
    }
    printf("\n\nMatriz Transposta!\n");
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            printf("%d, ",transposta[i][j]);
        }
    printf("\n");
    }
    return 0;
}

