algoritmo "ex9"
var
   num, quadrado: inteiro
inicio
   repita
      escreva("Digite um numero positivo: ")
      leia(num)
      quadrado <- num * num
      escreval("O quadrado de ", num, " e ", quadrado)
   ate (num % 6 = 0) e (num > 0)
fimalgoritmo