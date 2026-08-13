algoritmo "ex1"
var
   n:inteiro
   resultado:inteiro
funcao recursividade (n:inteiro):inteiro
inicio
   se (n < 4 ) entao
      retorne n * 3 + 1
   senao
      retorne 2 * recursividade(n - 4) + 8
   fimse
fimfuncao

inicio
   escreva("Digite um numero: ")
   leia(n)
   resultado <- recursividade(n)
   escreva("O resultado é: ", resultado)
fimalgoritmo