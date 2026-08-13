algoritmo "ex4"
var
   metade:vetor [1..10] de real
   i,n:inteiro
inicio
      para i de 1 ate 10 faca
           escreva("Digite o", i,"°° numero inteiro:")
           leia(n)
           metade[i]<-n/2
      fimpara
      para i de 1 ate 10 faca
           escreval("A metade do", i,"° numero eh:", metade[i])
      fimpara
fimalgoritmo