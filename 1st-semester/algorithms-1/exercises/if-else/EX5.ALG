algoritmo "ex5"
var 
   idade: inteiro
inicio
   escreva("Digite sua idade: ")
   leia(idade)
   se((idade >= 5) e (idade <= 7))entao
      escreval("Infantil A")
   senao
      se((idade >= 8) e (idade <= 10))entao
         escreval("Infantil B")
      senao
         se((idade >= 11) e (idade <= 13))entao
            escreval("Juvenil A")
         senao
            se((idade >= 14) e (idade <= 17))entao
               escreval("Juvenil B")
            senao
               se(idade >= 18)entao
                  escreval("Sênior")
               fimse
            fimse
         fimse
      fimse
   fimse
fimalgoritmo