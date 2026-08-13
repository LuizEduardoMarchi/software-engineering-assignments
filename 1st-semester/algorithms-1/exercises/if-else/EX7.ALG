algoritmo "ex7"
var 
   compra, venda: real
inicio
   escreva("Digite o valor da compra: ")
   leia(compra)
   se(compra < 10)entao
      venda <- compra * 1.70
   senao
      se((compra >= 10) e (compra < 30))entao
         venda <- compra * 1.50
      senao
         se((compra >= 30) e (compra < 50))entao
            venda <- compra * 1.40
         senao
            venda <- compra * 1.30
         fimse
      fimse
   fimse
   escreval("Valor da venda: ", venda)
fimalgoritmo