algoritmo "ex8"
var 
   saldo, credito: real
inicio
   escreva("Digite seu saldo medio: ")
   leia(saldo)
   se(saldo <= 500)entao
      credito <- 0
   senao
      se(saldo <= 1000)entao
         credito <- saldo * 0.30
      senao
         se(saldo <= 3000)entao
            credito <- saldo * 0.40
         senao
            credito <- saldo * 0.50
         fimse
      fimse
   fimse
   escreval("Saldo: ", saldo, " Crédito: ", credito)
fimalgoritmo