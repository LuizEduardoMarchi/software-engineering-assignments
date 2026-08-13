algoritmo "ex6"
var
   resultado:logico
   n:inteiro
funcao positivo_negativo (n:inteiro):logico
inicio
   se (n >= 0) entao
      retorne verdadeiro
   senao
      retorne falso
   fimse
fimfuncao

inicio
   escreva("Digite um numero qualquer: ")
   leia(n)

   resultado <- positivo_negativo(n)
   se (resultado) entao
      escreva("Numero positivo")
   senao
      escreva("Numero Negativo")
   fimse
fimalgoritmo