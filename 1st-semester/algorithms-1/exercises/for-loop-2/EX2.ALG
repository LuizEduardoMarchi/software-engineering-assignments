algoritmo "ex2"
var
   i: inteiro
   graos_no_quadro, total_graos: real
inicio
   graos_no_quadro <- 1
   total_graos <- 1
   para i de 2 ate 64 faca
      graos_no_quadro <- graos_no_quadro * 2
      total_graos <- total_graos + graos_no_quadro
   fimpara
   escreval("O total de graos de trigo e: ", total_graos)
fimalgoritmo