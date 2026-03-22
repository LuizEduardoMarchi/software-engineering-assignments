algoritmo "ex2"
var
   veta:vetor [1..10, 1..10] de inteiro
   i,j:inteiro
inicio
   para i de 1 ate 10 faca
      para j de 1 ate 10 faca
         escreva("Digite um numero:")
         leia(veta[i,j])
         j<-j+1
      fimpara
      i<-i+1
   fimpara
   para i de 1 ate 10 faca
      para j de 1 ate 10 faca
         se(i<>j)entao
           escreva(veta[i,j],", ")
         fimse
      fimpara
      escreval()
   fimpara
fimalgoritmo