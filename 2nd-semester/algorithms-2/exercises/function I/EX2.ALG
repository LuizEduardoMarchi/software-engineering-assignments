algoritmo "ex2"
var
   mat: vetor[1..10,1..10] de inteiro
   i,j,soma: inteiro

funcao soma_matriz(): inteiro
var
   i,j,soma: inteiro
inicio
   soma <- 0
   para i de 1 ate 3 faca
      para j de 1 ate 3 faca
         soma <- soma + mat[i,j]
      fimpara
   fimpara
   retorne soma
fimfuncao

inicio
   para i de 1 ate 3 faca
      para j de 1 ate 3 faca
         escreva("Digite o ", j ,"° item da ", i , "° linha: ")
         leia(mat[i,j])
      fimpara
   fimpara

   soma <- soma_matriz()
   escreval("A soma de todos os elementos da matriz é: ", soma)
fimalgoritmo
