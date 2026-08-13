algoritmo "ex8"
declare
n:inteiro;
procedimento extenso (x:inteiro)
declare

inicio
   se((x >= 1) e (x <= 10))entao
      escolha(x)
      caso 1: escreva("Um");
      caso 2: escreva("Dois");
      caso 3: escreva("Tres");
      caso 4: escreva("Quatro");
      caso 5: escreva("Cinco");
      caso 6: escreva("Seis");
      caso 7: escreva("Sete");
      caso 8: escreva("Oito");
      caso 9: escreva("Nove");
      caso 10: escreva("Dez");
      fimescolha;
   senao
      escreva("Erro, Numero invalido");
   fimse;
fimprocedimento;
inicio
   escreva("Digite um numero qualquer: ");
   leia(n);
   extenso(n);
fimalgoritmo;G