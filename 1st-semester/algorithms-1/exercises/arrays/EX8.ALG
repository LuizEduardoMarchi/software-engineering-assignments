algoritmo "ex8"
var
   veta,vetb:vetor [1..5] de inteiro
   vets:vetor [1..10] de inteiro
   i,cont,aux:inteiro
inicio
   para i de 1 ate 5 faca
      escreva("Digite o", i,"° numero inteiro qualquer:")
      leia(veta[i])
   fimpara
   para i de 1 ate 5 faca
      escreva("Digite o", i,"° numero inteiro qualquer:")
      leia(vetb[i])
   fimpara
   para i de 1 ate 5 faca
      vets[i]<-veta[i]
      vets[i+5]<-vetb[i]
   fimpara
   para i de 1 ate 9 faca
      para cont de 1 ate 10 -i faca
         se(vets[cont]>vets[cont+1])entao
            aux<-vets[cont]
            vets[cont]<-vets[cont+1]
            vets[cont+1]<-aux
         fimse
      fimpara
   fimpara
   para i de 1 ate 10 faca
        escreva(vets[i]," ,")
   fimpara
   escreva("FIM!")
fimalgoritmo