algoritmo "ex10"
var 
    ca, cb, h: real
inicio
   escreva("Cateto adjacente: ")
   leia(ca)
   escreva("Cateto oposto: ")
   leia(cb)
   h <- raizq((ca ^ 2) + (cb ^ 2))
   escreval("A hipotenusa e: ", h:4:2)
fimalgoritmo