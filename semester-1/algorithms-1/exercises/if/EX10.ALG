algoritmo "ex10"
var 
   a, b: real
inicio
   escreva("Digite o primeiro numero: ")
   leia(a)
   escreva("Digite o segundo numero: ")
   leia(b)
   se(a > b)entao
      escreval("Maior: ", a, " Menor: ", b)
   senao
      se b > a entao
         escreval("Maior: ", b, " Menor: ", a)
      senao
         escreval("Os números são iguais")
      fimse
   fimse
fimalgoritmo