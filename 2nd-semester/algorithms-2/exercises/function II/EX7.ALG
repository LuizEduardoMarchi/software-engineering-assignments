algoritmo "ex7"
var
   n:inteiro
   resultado:logico

funcao par_impar (n:inteiro):logico
inicio
   se (n % 2 = 0) entao
      retorne verdadeiro
   senao
      retorne falso
   fimse
fimfuncao

inicio
   escreva("Digite um numero qualquer: ")
   leia(n)

   resultado <- par_impar(n)
   se (resultado) entao
      escreva("Numero par!!")
   senao
      escreva("Numero Impar!!")
   fimse
fimalgoritmo