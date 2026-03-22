algoritmo "ex5"
var
   mat:vetor [1..5,1..5] de inteiro
   i,j:inteiro
inicio
   para i de 1 ate 5 faca
      para j de 1 ate 5 faca
         se(i=j)entao
            mat[i,j]<-1
         senao
            mat[i,j]<-0
         fimse
         j<-j+1
      fimpara
      i<-i+1
   fimpara
   para i de 1 ate 5 faca
      para j de 1 ate 5 faca
         escreva(mat[i,j]," ")
         j<-j+1
      fimpara
      escreval("")
      i<-i+1
   fimpara
fimalgoritmo