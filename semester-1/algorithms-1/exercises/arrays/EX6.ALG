algoritmo "EX6"
var
    vet:vetor[1..10] de inteiro
    i,cont,aux:inteiro
inicio
    para i de 1 ate 10 faca
        escreva("Digite o ", i, "° numero: ")
        leia(vet[i])
    fimpara
    para i de 1 ate 9 faca
      para cont de 1 ate 10 -i faca
         se(vet[cont]>vet[cont+1])entao
            aux<-vet[cont]
            vet[cont]<-vet[cont+1]
            vet[cont+1]<-aux
         fimse
      fimpara
   fimpara
    para i de 1 ate 10 faca
        escreva(vet[i], ", ")
    fimpara
    escreva("FIM!")
Fimalgoritmo
