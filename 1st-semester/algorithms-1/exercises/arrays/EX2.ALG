algoritmo "ex2"
var
   imp:vetor [1..100] de inteiro
   cont,i:inteiro
inicio
      i<-1
      para cont de 1 ate 100 faca
           se(cont % 2 = 1)entao
                imp[i]<- cont
                i<-i+1
           fimse
      fimpara
      para i de 1 ate 50 faca
           escreva(imp[i],", ")
      fimpara
      escreva("FIM.")
fimalgoritmo