algoritmo "ex5"
var
   n,res:inteiro
funcao n_fatorial (n:inteiro):inteiro
var
   resultado:inteiro
   i:inteiro
inicio
      resultado <- 1
      para i de n ate 1 passo -1 faca
           resultado <- i * resultado
      fimpara
      retorne resultado
fimfuncao

inicio
      escreva("Digite um valor para calcular seu fatorial: ")
      leia(n)
      
      res <- n_fatorial(n)
      escreva("O fatorial de ", n, " é:", res)
fimalgoritmo