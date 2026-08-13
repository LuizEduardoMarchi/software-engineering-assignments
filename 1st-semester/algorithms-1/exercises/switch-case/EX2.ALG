algoritmo "ex2"
var
   num: inteiro
inicio
   escreva("Digite um numero: ")
   leia(num)
   se(num < 10) e (num >= 0)entao
      escolha (num % 2)
         caso 0
            escreval("Numero par menor que Dez")
         caso 1, -1
            escreval("Numero impar menor que Dez")
      fimescolha
   senao
      escreval("Numero fora do Intervalo")
   fimse
fimalgoritmo