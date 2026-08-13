procedimento primo(n:inteiro)
declare
   i,cont: inteiro;
inicio
   contador <- 0
   para i de 1 ate n faca
        se (n mod i = 0) entao
            cont <- cont + 1;
        fimse;
        i <- i + 1;
   fimpara;

   se (contador = 2) entao
        escreval(n, " é primo");
   senao
        escreval(n, " não é primo");
   fimse;
fimprocedimento;
