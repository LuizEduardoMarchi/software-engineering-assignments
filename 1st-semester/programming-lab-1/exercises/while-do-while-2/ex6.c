#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    int n,a,b,c,i;
    a=0;
    b=1;
    printf("Digite ate qual termo sera feita a sequencia de fibonacci:");
    scanf("%d", &n);
    printf("%d ,", a);
    printf("%d ,", b);
    for(i=1;i<=n;i++,a=b,b=c){
        c=a+b;
        printf("%d ,", c);
        }
    printf("FIM");
}
