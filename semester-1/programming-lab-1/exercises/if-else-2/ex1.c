#include <stdio.h>
#include <locale.h>
void main (){
    setlocale(LC_ALL,"portuguese");
    float n1,n2,n3,n4,m;
    printf("Digite a primeira nota do aluno:");
    scanf("%f", &n1);
    printf("Digite a segunda nota do aluno:");
    scanf("%f", &n2);
    printf("Digite a terceira nota do aluno:");
    scanf("%f", &n3);
    printf("Digite a quarta nota do aluno:");
    scanf("%f", &n4);
    m=(n1+n2+n3+n4)/4;
    if(m>=6)
        printf("Aprovado! Media:%.1f", m);
    else
        if(m<6||m>=3){
            printf("Exame! Media:%.1f", m);
        }else
            printf("REPROVADO! Media:%.1f", m);

}
