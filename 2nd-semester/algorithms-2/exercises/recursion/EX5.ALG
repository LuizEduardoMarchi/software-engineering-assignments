algoritmo "ex5"
var
   n,resultado:inteiro
funcao recursividade (n:inteiro):inteiro
inicio
      se (n <= 1) entao
         retorne 1
      senao
           retorne n * (recursividade(n - 1))
      fimse
fimfuncao

inicio
      escreva("Digite um numero inteiro qualquer: ")
      leia(n)

      resultado <- recursividade(n)
      escreva("O resultado é: ", resultado)
fimalgoritmo