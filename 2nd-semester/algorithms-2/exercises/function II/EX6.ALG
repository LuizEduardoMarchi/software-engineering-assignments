algoritmo "ex6"
var
   mat: vetor [1..5,1..5] de inteiro
   i,j:inteiro
   maior_elemento:inteiro
   
funcao maior_numero ():inteiro
var
   i,j:inteiro
   maior_elemento:inteiro
inicio
      maior_elemento <- -1
      para i de 1 ate 5 passo 1 faca
           para j de 1 ate 5 passo 1 faca
                se (mat[i,j] > maior_elemento) entao
                   maior_elemento <- mat[i,j]
                fimse
           fimpara
      fimpara
      retorne maior_elemento
fimfuncao

inicio
      para i de 1 ate 5 passo 1 faca
           para j de 1 ate 5 passo 1 faca
                escreva("Digite o ", j, " numero da linha ", i, " :")
                leia(mat[i,j])
           fimpara
      fimpara

      maior_elemento <- maior_numero()
      escreva("O maior numero da matriz é: ", maior_elemento)
fimalgoritmo