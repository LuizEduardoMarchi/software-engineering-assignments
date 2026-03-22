algoritmo "ex10"
var 
   a, b, c, aux: inteiro
inicio
   escreva("Digite o primeiro numero: ")
   leia(a)
   escreva("Digite o segundo numero: ")
   leia(b)
   escreva("Digite o terceiro numero: ")
   leia(c)
   se(a > b)entao
      aux <- a; a <- b; b <- aux
   fimse
   se(a > c)entao
      aux <- a; a <- c; c <- aux
   fimse
   se(b > c)entao
      aux <- b; b <- c; c <- aux
   fimse
   escreval(a, b, c)
fimalgoritmo