algoritmo "ex4"
var
   n:inteiro
   resultado:real
funcao recursividade (n:inteiro):real
inicio
      se (n = 1) entao
         retorne 1
      senao
           retorne (1 / n) + recursividade(n - 1)
      fimse
fimfuncao

inicio
      escreva("Digite um numero: ")
      leia(n)
      
      resultado <- recursividade(n)
      escreva("O resultado é:", resultado)
fimalgoritmo