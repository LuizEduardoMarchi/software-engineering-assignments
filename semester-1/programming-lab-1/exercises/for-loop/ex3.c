#include <stdio.h>

void main ()
{
    int N, numero, numero_ant, compr_max, compr_temp, i;
    printf("\nInforme o valor de N: ");
    scanf("%d", &N);
    compr_max = 1;
    compr_temp = 1;
    printf("\nInforme uma sequencia de %d numeros\n", N);
    printf("\n1%c numero: ", 167);
    scanf("%d", &numero);
    for(i = 2; i <= N; i++){
        numero_ant = numero;
        printf("\n%d%c numero: ", i, 167);
        scanf("%d", &numero);
        if(numero > numero_ant)
            compr_temp++;
        else
        {
            if(compr_max < compr_temp)
                compr_max = compr_temp;
            compr_temp = 1;
        }
    }
    if(compr_max < compr_temp)
        compr_max = compr_temp;
    printf("\nComprimento do Segmento Crescente Maximo: %d\n\n", compr_max);

}
