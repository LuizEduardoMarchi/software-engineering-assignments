algoritmo "ex3"
var
   massa_inicial, massa_atual: real
   tempo_total: inteiro
inicio
   escreva("Informe a massa inicial em gramas: ")
   leia(massa_inicial)
   massa_atual <- massa_inicial
   tempo_total <- 0
   enquanto massa_atual >= 0.05 faca
      massa_atual <- massa_atual / 2
      tempo_total <- tempo_total + 50
   fimenquanto
   escreval("Massa final: ", massa_atual, " g")
   escreval("Tempo necessario: ", tempo_total, " segundos.")
fimalgoritmo