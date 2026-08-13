algoritmo "ex6"
var
   i, num, pares, impares: inteiro
inicio
   pares <- 0
   impares <- 0
   para i de 1 ate 200 faca
      escreva("Digite o ", i, "o numero: ")
      leia(num)
      se(num % 2 = 0)entao
         pares <- pares + 1
      senao
         impares <- impares + 1
      fimse
   fimpara
   escreval("Pares: ", pares, " | Impares: ", impares)
fimalgoritmo