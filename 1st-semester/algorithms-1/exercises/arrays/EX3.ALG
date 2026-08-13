algoritmo "ex3"
var
   vet:vetor [1..100] de inteiro
   cont,i:inteiro
inicio
      i<-1
      para cont de 1 ate 500 faca
           se(cont % 5 = 0)entao
                vet[i]<- cont
                i<-i+1
           fimse
      fimpara
      para i de 1 ate 100 faca
           escreva(vet[i],", ")
      fimpara
      escreva("FIM.")
fimalgoritmo