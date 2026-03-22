algoritmo "ex8"
var
   i, n: inteiro
inicio
   escreva("Digite o numero N: ")
   leia(n)
   escreval("Divisores de ", n, ":")
   para i de 1 ate n faca
      se n % i = 0 entao
         escreval(i)
      fimse
   fimpara
fimalgoritmo