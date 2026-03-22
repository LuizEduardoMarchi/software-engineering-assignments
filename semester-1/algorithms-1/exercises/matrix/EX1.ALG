algoritmo "ex1"
var
   veta:vetor [1..12, 1..12] de inteiro
   soma,i,j:inteiro
inicio
   para i de 1 ate 12 faca
      para j de 1 ate 12 faca
         escreva("Digite um numero:")
         leia(veta[i,j])
         j<-j+1
      fimpara
      i<-i+1
   fimpara
   para i de 1 ate 12 faca
      soma<-0
      escreva("linha:",i)
      para j <- 1 ate 12 faca
         soma <- soma+veta[i,j]
         j<-j+1
      fimpara
      escreva("O resultado da soma �:", soma)
      i<-i+1
   fimpara
fimalgoritmo