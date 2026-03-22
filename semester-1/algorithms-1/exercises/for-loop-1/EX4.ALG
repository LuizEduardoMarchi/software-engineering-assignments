algoritmo "ex4"
var
   i: inteiro
   num: real
inicio
   para i de 1 ate 15 faca
      escreva("Digite o ", i, "o numero: ")
      leia(num)
      se(num >= 0)entao
         escreval("Raiz quadrada: ", raizq(num))
      senao
         escreval("Nao existe raiz real de numero negativo.")
      fimse
   fimpara
fimalgoritmo