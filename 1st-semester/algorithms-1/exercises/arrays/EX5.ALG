algoritmo "ex5"
var
   s:vetor [1..20] de inteiro
   i,a,produto:inteiro
inicio
      para i de 1 ate 20 faca
           escreva("Digite o", i,"° numero inteiro:")
           leia(s[i])
      fimpara
      escreva("Digite um numero para calcular o produto dos vetores:")
      leia(a)
      para i de 1 ate 20 faca
           produto<-s[i]*a
           escreval("O produto entre", s[i]," e", a ," eh:", produto)
      fimpara
fimalgoritmo