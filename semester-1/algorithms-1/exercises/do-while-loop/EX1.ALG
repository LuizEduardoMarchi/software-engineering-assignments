algoritmo "ex1"
var
   num, soma, media: real
   cont: inteiro
inicio
   soma <- 0
   cont <- 0
   escreva("Digite um numero (negativo para sair): ")
   leia(num)
   enquanto num >= 0 faca
      soma <- soma + num
      cont <- cont + 1
      escreva("Digite o proximo numero: ")
      leia(num)
   fimenquanto
   se cont > 0 entao
      media <- soma / cont
      escreval("A media dos numeros digitados e: ", media)
   senao
      escreval("Nenhum numero positivo foi digitado.")
   fimse
fimalgoritmo