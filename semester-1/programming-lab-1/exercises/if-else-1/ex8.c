#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    int n1,n2,n3,n4,m;
    printf("Digite a primeira nota do aluno:");
    scanf("%d", &n1);
    printf("Digite a segunda nota do aluno:");
    scanf("%d", &n2);
    printf("Digite a Terceira nota do aluno:");
    scanf("%d", &n3);
    printf("Digite a quarta nota do aluno:");
    scanf("%d", &n4);
    m=(n1+n2+n3+n4)/4;
    printf("A media final é:%d", m);
    if(m>=6)
        printf("\nAPROVADO!");
    else
        printf("\nREPROVADO!");
}
