algoritmo "ex9"
var 
   a, b: inteiro
inicio
   escreva("Digite o primeiro numero: ")
   leia(a)
   escreva("Digite o segundo numero: ")
   leia(b)
   se (b <> 0) e (a % b = 0) entao
      escreval(a, " é divisível por ", b)
   senao
      escreval("Não é divisível ou divisão inválida")
   fimse
fimalgoritmo