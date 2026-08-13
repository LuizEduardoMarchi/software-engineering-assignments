algoritmo "ex1"
var
   mat: vetor[1..5,1..5] de inteiro
   preenchido:logico
funcao preencher_matriz ():logico
var
   i,j:inteiro
inicio
   para i de 1 ate 5 passo 1 faca
      para j de 1 ate 5 passo 1 faca
         escreva("Digite o ", j ,"° item da ", i , "° linha: ")
         leia(mat[i,j])
      fimpara
   fimpara
   retorne verdadeiro
fimfuncao

procedimento soma_diag_principal ()
var
   i,j:inteiro
   soma:inteiro
inicio
   soma <- 0
   para i de 1 ate 5 passo 1 faca
      para j de 1 ate 5 passo 1 faca
         se (i = j) entao
            soma <- soma + mat[i,j]
         fimse
      fimpara
   fimpara
   escreval(" A soma da diagonal principal é: ",soma)
fimprocedimento

procedimento mostrar_valores ()
var
   i,j:inteiro
inicio
   para i de 1 ate 5 passo 1 faca
      para j de 1 ate 5 passo 1 faca
         escreva(mat[i,j]," ")
      fimpara
      escreval()
   fimpara
fimprocedimento

inicio
   preenchido <- preencher_matriz()
   soma_diag_principal()
   mostrar_valores()
fimalgoritmo