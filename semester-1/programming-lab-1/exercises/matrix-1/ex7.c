#include <stdio.h>
#include <locale.h>
#define tam 5
int main(){
    setlocale(LC_ALL, "portuguese");
    int mat[tam][tam],i,j,simetria=1;
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            printf("Digite um numero:");
            scanf("%d", &mat[i][j]);
        }
    }
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            if(mat[i][j]!=mat[j][i])
                simetria=0;
                break;
        }
        if(simetria==0){
            break;
        }
    }
    if(simetria!=0){
        printf("\n\nA matriz é simetrica!!\n\n");
    }else
        printf("\n\nA matriz não é simetrica!!\n\n");
}
