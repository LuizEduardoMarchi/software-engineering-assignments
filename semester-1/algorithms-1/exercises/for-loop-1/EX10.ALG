algoritmo "ex10"
var
   i, n, t1, t2, t3, soma: inteiro
inicio
   escreva("Digite o 1o termo: ")
   leia(t1)
   escreva("Digite o 2o termo: ")
   leia(t2)
   escreva("Quantos termos deseja (minimo 3)? ")
   leia(n)
   
   se n < 3 entao
      escreval("Quantidade insuficiente para a serie.")
   senao
      soma <- t1 + t2
      escreva(t1, " ,", t2)
      para i de 3 ate n faca
         t3 <- t1 + t2
         escreva(" ,", t3)
         soma <- soma + t3
         t1 <- t2
         t2 <- t3
      fimpara
      escreval("")
      escreval("Soma total da serie: ", soma)
   fimse
fimalgoritmo