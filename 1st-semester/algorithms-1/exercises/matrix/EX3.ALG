algoritmo "ex3"
var
   mata,matb:vetor [1..20,1..20] de inteiro
   i,j,k,l:inteiro
inicio
   para i de 1 ate 20 faca
      para j de 1 ate 20 faca
         escreva("Digite um numero:")
         leia(mata[i,j])
      fimpara
   fimpara
   para i de 1 ate 20 faca
      para j de 1 ate 20 faca
         escreva("Digite um numero:")
         leia(matb[i,j])
         j<-j+1
      fimpara
      i<-i+1
   fimpara
   para i de 1 ate 20 faca
      para j de 1 ate 20 faca
         para l de 1 ate 20 faca
            para k de 1 ate 20 faca
               se(mata[i,j] = matb[l,k])entao
                  escreval("Valor encontrado:",mata[i,j])
               fimse
               k<-k+1
            fimpara
            l<-l+1
         fimpara
         j<-j+1
      fimpara
      i<-i+1
   fimpara
fimalgoritmo