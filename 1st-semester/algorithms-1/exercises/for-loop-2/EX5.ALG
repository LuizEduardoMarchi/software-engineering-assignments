algoritmo "ex5"
var
   i, idade, cont_50, cont_10_20, cont_peso_40: inteiro
   altura, peso, soma_altura_10_20, media_altura, percentual_peso: real
inicio
   cont_50 <- 0
   cont_10_20 <- 0
   cont_peso_40 <- 0
   soma_altura_10_20 <- 0
   
   para i de 1 ate 25 faca
      escreval("Dados da pessoa ", i, ":")
      escreva("Idade: ")
      leia(idade)
      escreva("Altura (m): ")
      leia(altura)
      escreva("Peso (kg): ")
      leia(peso)
      
      se idade > 50 entao
         cont_50 <- cont_50 + 1
      fimse
      
      se (idade >= 10) e (idade <= 20) entao
         soma_altura_10_20 <- soma_altura_10_20 + altura
         cont_10_20 <- cont_10_20 + 1
      fimse
      
      se peso < 40 entao
         cont_peso_40 <- cont_peso_40 + 1
      fimse
   fimpara
   
   se cont_10_20 > 0 entao
      media_altura <- soma_altura_10_20 / cont_10_20
   senao
      media_altura <- 0
   fimse
   
   percentual_peso <- (cont_peso_40 / 25) * 100
   
   escreval("Pessoas com mais de 50 anos: ", cont_50)
   escreval("Media de altura (10-20 anos): ", media_altura:4:2, " m")
   escreval("Percentagem de pessoas com menos de 40kg: ", percentual_peso:4:2, "%")
fimalgoritmo