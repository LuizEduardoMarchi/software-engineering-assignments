algoritmo "ex4"
var 
   idade: inteiro
inicio
   escreva("Digite sua idade: ")
   leia(idade)
   se(idade >= 65)entao
      escreval("Pessoa idosa")
   senao
      se(idade >= 18)entao
         escreval("Maior de idade")
      senao
         escreval("Menor de idade")
      fimse
   fimse
fimalgoritmo