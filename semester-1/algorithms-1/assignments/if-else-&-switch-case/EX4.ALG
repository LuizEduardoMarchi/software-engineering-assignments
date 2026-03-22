algoritmo "ex4"
var
   n1,n2,pri:inteiro
inicio
   n1<-0
   escreva("Digite um valor qualquer inteiro positivo(Digite -1 para sair)")
   leia(n1)
   n2<-n1
   enquanto ( n1 <> -1) faca
      se ( n1 >= 0 ) entao
         se(n1 < n2)entao
            n2<- n1
         fimse
      senao
           escreva("digite um valor inteiro positivo maior ou igual a 0")
      fimse
      escreva("Digite um valor qualquer inteiro positivo(Digite -1 para sair)")
      leia(n1)
   fimenquanto
      escreva("O menor valor digitado eh: ",n2)
fimalgoritmo