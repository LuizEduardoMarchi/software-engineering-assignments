algoritmo "ex4"
var
   n:inteiro
procedimento mes (x:inteiro)
var

inicio
   se((x > 1) e (x < 12))entao
      escolha(x)
      caso 1:
         escreva("Janeiro");
      caso 2:
         escreva("Fevereiro");
      caso 3:
         escreva("Março");
      caso 4:
         escreva("Abril");
      caso 5:
         escreva("Maio");
      caso 6:
         escreva("Junho");
      caso 7:
         escreva("Julho");
      caso 8:
         escreva("Agosto");
      caso 9:
         escreva("Setembro");
      caso 10:
         escreva("Outubro");
      caso 11:
         escreva("Novembro");
      caso 12:
         escreva("Dezembro");
      fimescolha;
   senao
      escreva("Numero invalido");
   fimse;
fimprocedimento;
inicio
      escreva("Digite um numero de 1 a 12");
      escreva("para descobrir o mes correspondente:");
      leia(n);
      mes(n);
fimalgoritmo;
