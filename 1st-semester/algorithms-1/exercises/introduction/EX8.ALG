algoritmo "ex8"
var 
    a, b, c, delta, x1, x2: real
inicio
   escreva("Informe A, B e C: ")
   leia(a, b, c)
   delta <- (b ^ 2) - (4 * a * c)
   
   se (delta >= 0) entao
      x1 <- (-b + raizq(delta)) / (2 * a)
      x2 <- (-b - raizq(delta)) / (2 * a)
      escreval("Raizes: X1=", x1:4:2, " e X2=", x2:4:2)
   senao
      escreval("Nao existem raizes reais (Delta negativo).")
   fimse
fimalgoritmo