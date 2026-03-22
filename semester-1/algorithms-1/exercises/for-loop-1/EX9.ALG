algoritmo "ex9"
var
   i, n, t1, t2, t3: inteiro
inicio
   escreva("Quantos termos da serie de Fibonacci? ")
   leia(n)
   t1 <- 1
   t2 <- 1
   se(n >= 1)entao
      escreva(t1)
   fimse
   se(n >= 2)entao
      escreva(" ,", t2)
   fimse
   para i de 3 ate n faca
      t3 <- t1 + t2
      escreva(" ,", t3)
      t1 <- t2
      t2 <- t3
   fimpara
fimalgoritmo