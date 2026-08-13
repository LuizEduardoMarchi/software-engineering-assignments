algoritmo "ex5"
var
   n,modulado:inteiro
funcao modulo (n:inteiro):inteiro
inicio
   se (n < 0) entao
      retorne -n
   senao
      retorne n
   fimse
fimfuncao
inicio
   escreva("Digite um numero qualquer: ")
   leia(n)
   modulado <- modulo(n)
   escreva("O modulo de ", n, " é: ", modulado)
fimalgoritmo