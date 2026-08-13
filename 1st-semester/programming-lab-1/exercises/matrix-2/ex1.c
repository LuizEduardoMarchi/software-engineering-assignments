#include <stdio.h>
#include <locale.h>
#define tam 100
int main(){
    setlocale(LC_ALL,"portuguese");
    int mat[tam][tam], i, j, n, cont, permut=0;
    printf("Digite o valor para o tamanho da matriz:");
    scanf("%d", &mat);
    for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                printf("Digite um numero:");
                scanf("%d", &mat[i][j]);

            }
    }
    for(i = 0; i < n; i++){
        cont=0;
        for(j = 0; j < n; j++){
                if(mat[i][j] == 1){
                    cont++;
                }else
                    if(mat[i][j] != 0){
                        permut = 0;
                    }
        }
    if(cont != 1){
        permut = 0;
        }
    }
    for(j = 0; j < n; j++){
        cont=0;
        for(i = 0; i < n; i++){
                if(mat[i][j] == 1)
                    cont++;
        }
    if(cont != 1){
        permut = 0;
        }
    }
    if(permut!=0){
        printf("Matriz é de permutação");
    }else
        printf("Matriz nao é de permutação");
}
