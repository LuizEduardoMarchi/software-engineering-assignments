algoritmo "ex5"
var
   i, num, maior, menor: inteiro
inicio
   para i de 1 ate 10 faca
      escreva("Digite o ", i, "o numero: ")
      leia(num)
      se(i = 1)entao
         maior <- num
         menor <- num
      senao
         se(num > maior)entao
            maior <- num
         fimse
         se(num < menor)entao
            menor <- num
         fimse
      fimse
   fimpara
   escreval("Maior: ", maior, " | Menor: ", menor)
fimalgoritmo