algoritmo "ex7"
var
   i, n, fat: inteiro
inicio
   escreva("Digite N: ")
   leia(n)
   fat <- 1
   para i de 1 ate n faca
      fat <- fat * i
   fimpara
   escreval("O fatorial de ", n, " e: ", fat)
fimalgoritmo