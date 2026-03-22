algoritmo "ex7"
var
   vet:vetor[1..500] de real
   i:inteiro
   maior:real
inicio
      maior<-0
      para i de 1 ate 500 faca
           escreva("Digite um numero inteiro qualquer:")
           leia(vet[i])
           se(vet[i]>maior)entao
              maior<-vet[i]
           fimse
           i<-i+1
      fimpara
      para i de 1 ate 500 faca
           vet[i]<-vet[i]/maior
           escreva(vet[i],", ")
           i<-i+1
      fimpara
fimalgoritmo