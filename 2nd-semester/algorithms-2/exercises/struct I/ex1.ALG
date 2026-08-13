//Ex1: Uma pessoa cadastrou um conjunto de 15 registros contendo o
//nome da loja, telefone e preço de um eletrodoméstico.Desenvolver
//um algoritmo que permita exibir qual foi a média dos preços
//cadastrados e uma relação contendo o nome e o telefone das lojas
//cujo preço estava abaixo da média

algoritmo "ex1"

tipo preco_medio = registro
   nome:caractere
   telefone:caractere
   preco:real
fimregistro

var
   conjunto:vetor [1..15] de preco_medio
   i:inteiro
   media,soma:real
inicio
   soma <- 0
   para i de 1 ate 5 faca
      escreva("Digite o nome da", i ," loja: ")
      leia(conjunto[i].nome)
      escreva("Digite o telefone da", i ," loja: ")
      leia(conjunto[i].telefone)
      escreva("Digite o preco: ")
      leia(conjunto[i].preco)
      soma <-  soma + conjunto[i].preco
   fimpara

   media <- soma / 5
   escreval("A media de precos foi de:", media)

   para i de 1 ate 5 faca
      se(conjunto[i].preco < media)entao
         escreval("---Loja com o preço abaixo da media---")
         escreval("Loja: ", conjunto[i].nome)
         escreval("Telefone: ", conjunto[i].telefone)
         escreval("Preco: ", conjunto[i].preco)
         escreval(" ")
      fimse
   fimpara

fimalgoritmo