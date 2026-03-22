algoritmo "ex2"
var 
   n1, n2, soma: inteiro
inicio
   escreva("Digite o primeiro numero: ")
   leia(n1)
   escreva("Digite o segundo numero: ")
   leia(n2)
   soma <- n1 + n2
   se(soma > 10)entao 
      escreval(soma) 
   senao 
      escreval("Valor menor que 10") 
   fimse
fimalgoritmo