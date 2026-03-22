algoritmo "ex1"
var
   numeros: vetor [0..50] de inteiro
   i: inteiro
inicio
   para i de 0 ate 50 faca
      numeros[i] <- i
   fimpara
   escreval("Listagem de valores armazenados no vetor (0 a 50):")
   escreval("-------------------------------------------------")
   para i de 0 ate 50 faca
      escreval("Posicao [", i, "] = ", numeros[i])
   fimpara 
fimalgoritmo