algoritmo "ex3"
var
   distancia,velocidade,temp:real
inicio
   escreva("Digite a distância a ser percorrida (km): ")
   leia(distancia)
   escreva("Digite a velocidade média do veículo (km/h): ")
   leia(velocidade)
   se (velocidade > 0) entao
      temp <- distancia / velocidade
      escreval("O tempo estimado de viagem é de ", temp, " horas.")
   senao
      escreval("A velocidade deve ser maior que zero.")
   fimse
fimalgoritmo