algoritmo "ex10"
var
   temp:vetor [1..121] de inteiro
   menort,maiort,ndias, i:inteiro
   mediat:real
inicio
      menort<-40
      maiort<-0
      mediat<-0
      ndias<-0
      para i de 1 ate 121 faca
           escreva("digite a",i,"° temperatura:")
           leia(temp[i])
           se(temp[i]>maiort)entao
               maiort<-temp[i]
           fimse
           se(temp[i]<menort)entao
               menort<-temp[i]
           fimse
           mediat<-mediat+temp[i]
      fimpara
      mediat<-mediat/121
      para i de 1 ate 121 faca
           se(temp[i]<mediat)entao
               ndias<-ndias+1
           fimse
      fimpara
      escreval("A menor temperatura registrada foi:",menort)
      escreval("A maior temperatura registrada foi:",maiort)
      escreval("A temperatura media foi de:",mediat)
      escreval("O numero de dias que a temperatura foi inferior a media foi de:", ndias)
fimalgoritmo