 #include <stdio.h>
 #include <locale.h>
 
 void main(){
    setlocale(LC_ALL,"portuguese");
    int soma,impar,m,cont;
    printf("Digite um numero a ser calculado:");
    scanf("%d", &m);
    for(soma=0,impar=1,cont=0;m<=soma,cont<=3;impar=impar+2,cont++){
        printf("%d ,", impar);
        soma=soma*m;
        }
 }
