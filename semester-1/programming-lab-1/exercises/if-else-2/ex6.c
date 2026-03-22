#include <stdio.h>
#include <locale.h>
void main (){
    setlocale(LC_ALL,"portuguese");
    int n_iden,n1,n2,n3;
    float media,m_exe;
    printf("Digite o Número de identificação do aluno:");
    scanf("%d", &n_iden);
    printf("Digite a primeira nota do aluno:");
    scanf("%d",  &n1);
    printf("Digite a Segunda nota do aluno:");
    scanf("%d", &n2);
    printf("Digite a Terceira nota do aluno:");
    scanf("%d", &n3);
    printf("Digite a media de exercicios feitos pelo aluno:");
    scanf("%f", &m_exe);
    media=(n1+(n2*2)+(n3*3)+ m_exe)/7;
    if(media>=9)
        printf("\nO Aluno %d tem media de aproveitamento A!\n", n_iden);
    else
    {
        if((media<9)&&(media>=7,5))
            printf("\nO Aluno %d tem media de aproveitamento B!\n", n_iden);
        else
            {
             if((media<7)&&(media>=6))
                printf("\nO Aluno %d tem media de aproveitamento C!\n", n_iden);
             else
             {
                 if((media<6)&&(media>=4))
                    printf("\nO Aluno %d tem media de aproveitamento D!\n", n_iden);
                 else
                    printf("\nO Aluno %d tem media de aproveitamento E!\n", n_iden);
             }
        }
    }
}
