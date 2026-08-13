algoritmo "ex11"
var
   num, soma: inteiro
inicio
   soma <- 0
   escreva("Digite um numero (-1 para encerrar): ")
   leia(num)
   enquanto num <> -1 faca
      se num > 0 entao
         soma <- soma + num
      fimse
      escreva("Digite o proximo numero: ")
      leia(num)
   fimenquanto
   escreval("A soma total dos numeros positivos e: ", soma)
fimalgoritmo