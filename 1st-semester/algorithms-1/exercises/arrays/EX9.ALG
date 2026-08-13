algoritmo "ex9"
var
   n:vetor [1..20] de inteiro
   i,m,p:inteiro
inicio
   m<-0
   para i de 1 ate 20 faca
      escreva("Digite o",i,"� numero inteiro:")
      leia(n[i])
      se(n[i]>m)entao
          m<-n[i]
          p<-i
      fimse
      i<-i+1
   fimpara
   escreva("O menor elemento de N � ", m, "e sua posi��o dentro do vetor �:",p)
fimalgoritmo