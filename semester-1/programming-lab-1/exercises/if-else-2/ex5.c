#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"portuguese");
    int idade;
    printf("Digite a sua idade:");
    scanf("%d", &idade);
     if(idade<=0)
         printf("Precisa ter pelo menos 1 ano para fazer plano de saúde!\n");
    else
    {
        if((idade>0)&&(idade<=10))
            printf("O valor do plano de saúde será de R$30!\n");
        else

        {
            if((idade>10)&&(idade<=29))
              printf("O valor do plano de saúde será de R$60!\n");
            else

            {
                if((idade>29)&&(idade<=45))
                    printf("O valor do plano de saúde será de R$120!\n");
                else

                {
                    if((idade>45)&&(idade<=59))
                        printf("O valor do plano de saúde será de R$150!\n");
                    else
                        printf("O valor do plano de saúde será de R$250!\n");
                 }
             }
         }
    }
}
