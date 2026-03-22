algoritmo "ex2"
var
   num, cont: inteiro
inicio
   cont <- 0
   repita
      escreva("Digite um numero (0 para sair): ")
      leia(num)
      se (num >= 100) e (num <= 200) entao
         cont <- cont + 1
      fimse
   ate num = 0
   escreval("Total de numeros entre 100 e 200: ", cont)
fimalgoritmo