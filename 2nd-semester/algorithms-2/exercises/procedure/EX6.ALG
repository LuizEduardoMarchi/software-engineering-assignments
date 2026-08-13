algoritmo "ex6"

procedimento divisores (n:inteiro)
declare
   i:inteiro;
inicio
      escreva("Digite um numero: ");
      leia(n);
      para i de 1 ate n faca
           se(n % i = 0)entao
                escreva(n, " / ", i " = 0");
           fimse;
      fimpara;
fimprocedimento;