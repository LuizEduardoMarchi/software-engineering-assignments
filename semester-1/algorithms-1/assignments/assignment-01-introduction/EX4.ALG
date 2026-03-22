algoritmo "ex4"
var
   raio,altura,volume:real
   pi_valor:real
inicio
   pi_valor <- 3.14
   escreva("Informe o raio da base do cilindro: ")
   leia(raio)
   escreva("Informe a altura do cilindro: ")
   leia(altura)
   volume <- pi_valor * (raio ^ 2) * altura
   escreval("O volume do cilindro é: ", volume)
fimalgoritmo