algoritmo "ex10"
var
   popA, popB: real
   anos: inteiro
inicio
   popA <- 5000000
   popB <- 7000000
   anos <- 0
   enquanto popA <= popB faca
      popA <- popA + (popA * 0.03)
      popB <- popB + (popB * 0.02)
      anos <- anos + 1
   fimenquanto
   escreval("Serao necessarios ", anos, " anos para o Pais A ultrapassar o Pais B.")
fimalgoritmo