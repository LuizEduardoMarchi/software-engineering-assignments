algoritmo "ex12"
var
   num, menor: inteiro
inicio
   escreva("Digite um numero (-1 para encerrar): ")
   leia(num)

   se num <> -1 entao
      menor <- num
      enquanto num <> -1 faca
         se (num < menor) e (num >= 0) entao
            menor <- num
         fimse
         escreva("Digite o proximo numero: ")
         leia(num)
      fimenquanto
      escreval("O menor valor digitado foi: ", menor)
   senao
      escreval("Nenhum valor valido foi inserido.")
   fimse
fimalgoritmo