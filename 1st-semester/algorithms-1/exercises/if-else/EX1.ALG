algoritmo "ex1"
var 
   a, b, c: real
inicio
    escreva("Digite o lado A: ")
    leia(a)
    escreva("Digite o lado B: ")
    leia(b)
    escreva("Digite o lado C: ")
    leia(c)
   se((a < b + c) e (b < a + c) e (c < a + b))entao
      se((a = b) e (b = c))entao
         escreval("Equilátero")
      senao
         se((a = b) ou (b = c) ou (a = c))entao
            escreval("Isósceles")
         senao
            escreval("Escaleno")
         fimse
      fimse
   senao
      escreval("Não formam um triângulo")
   fimse
fimalgoritmo