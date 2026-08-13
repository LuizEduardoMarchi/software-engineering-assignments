algoritmo "ex1"
var
   a,b,c:inteiro
   delta,x1,x2:real
inicio
   escreva("Digite o Valor de A:")
   leia(a)
   escreva("Digite o Valor de B:")
   leia(b)
   escreva("Digite o Valor de C:")
   leia(c)
   delta<-(-b^2)-4*a*c
   escreval("Delta eh:", delta)
   se(delta>=0)entao
      x1<-((-b)+delta^1/2)/(2*a)
      x2<-((-b)-delta^1/2)/(2*a)
      escreval("O valor de X1 eh:",x1)
      escreval("O valor de x2 eh:",x2)
   senao
        escreva("O Valor de delta eh negativo")
   fimse
fimalgoritmo