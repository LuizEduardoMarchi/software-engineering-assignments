algoritmo "ex4"
var
   i, num, contador: inteiro
inicio
   contador <- 0
   para i de 1 ate 10 faca
      escreva("Digite o ", i, "o numero: ")
      leia(num)
      se (num >= 30) e (num <= 90) entao
         contador <- contador + 1
      fimse
   fimpara
   escreval("Quantidade de numeros entre 30 e 90: ", contador)
fimalgoritmo