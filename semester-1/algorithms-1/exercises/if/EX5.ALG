algoritmo "ex5"
var 
   n1, n2, soma: real
inicio
   escreva("Digite o primeiro numero: ")
   leia(n1)
   escreva("Digite o segundo numero: ")
   leia(n2)
   soma <- n1 + n2
   se(soma > 20)entao 
      escreval(soma + 8) 
   senao 
      escreval(soma - 5)
   fimse
fimalgoritmo