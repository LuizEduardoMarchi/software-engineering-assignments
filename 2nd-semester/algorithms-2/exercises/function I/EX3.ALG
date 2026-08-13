algoritmo "ex3"
var
   matA: vetor [1..5,1..5] de inteiro
   i,j:inteiro
   soma:inteiro
funcao soma_acima_principal ():inteiro
var
   soma:inteiro
   i,j:inteiro
inicio
      soma <- 0
      para i de 1 ate 5 passo 1 faca
           para j de 1 ate 5 passo 1 faca
                se (i < j) entao
                   soma <- soma + matA[i,j]
                fimse
           fimpara
      fimpara
      
      retorne soma
fimfuncao

inicio
      para i de 1 ate 5 passo 1 faca
           para j de 1 ate 5 passo 1 faca
                escreva("Digite o ", j ,"° item da ", i , "° linha: ")
                leia(matA[i,j])
           fimpara
      fimpara

      soma <- soma_acima_principal()
      escreva("O resultado da soma dos elementos acima da diagonal principal é: ", soma)
fimalgoritmo