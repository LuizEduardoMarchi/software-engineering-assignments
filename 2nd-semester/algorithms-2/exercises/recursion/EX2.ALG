algoritmo "ex2"
var
   base,expoente:inteiro
   resultado:inteiro
funcao recursividade (base,expo:inteiro):inteiro
inicio
      se (expo = 1) entao
         retorne base
      senao
           retorne base * recursividade(base,expo -1)
      fimse
fimfuncao

inicio
      escreva("Digite um numero para a base: ")
      leia(base)
      escreva("Digite um numero para o expoente: ")
      leia(expoente)
      
      resultado <- recursividade(base,expoente)
      escreva("O resultado é: ", resultado)
fimalgoritmo