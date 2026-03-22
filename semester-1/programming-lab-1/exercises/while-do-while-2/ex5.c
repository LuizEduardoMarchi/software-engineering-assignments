#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    int n,i,result;
    printf("Digite um numero:");
    scanf("%d", &n);
    for(i=1;i*i<=n;i++){
        result=i*i;
        }
    if(result>=n){
        printf("O quadrado menor %d � igual a %d!", result, n);
    }else
        printf("O quadrano menor %d � menor que o numero %d", result, n);
}
