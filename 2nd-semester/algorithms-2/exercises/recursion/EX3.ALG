algoritmo "ex3"
var
   n,resultado:inteiro
funcao recursividade (n:inteiro):inteiro
inicio
      se (n <= 1) entao
         retorne n
      senao
           retorne n + recursividade(n - 1)
      fimse
fimfuncao

inicio
      escreva("Digite um numero: ")
      leia(n)
      
      resultado <- recursividade(n)
      escreva("O resultado da soma é: ", resultado)
fimalgoritmo