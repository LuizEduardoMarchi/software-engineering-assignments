algoritmo "ex4"
var
   mat: vetor [1..6,1..6] de inteiro
   i,j,cont:inteiro
inicio
   cont<-0
   para i de 1 ate 6 faca
      para j de 1 ate 6 faca
         escreva("Digite um numero:")
         leia(mat[i,j])
         j<-j+1
      fimpara
      i<-i+1
   fimpara
   para i de 1 ate 6 faca
      para j de 1 ate 6 faca
         se(mat[i,j] > 10)entao
            cont<-cont+1
         fimse
         j<-j+1
      fimpara
      i<-i+1
   fimpara
   escreva("Existem ",cont," numeros maiores que 10")
fimalgoritmo