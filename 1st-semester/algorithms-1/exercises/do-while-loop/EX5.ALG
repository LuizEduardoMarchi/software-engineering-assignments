algoritmo "ex5"
var
   n:real
inicio
   repita
      escreval("digite um Numero qualquer ou (-999 para encerrar o programa):")
      leia(n)
      se(n=-999)entao
         escreva("Programa finalizado!")
      senao
         n<-n*3
         escreval("o Resultado �:",n)
      fimse
   ate(n=-999)
fimalgoritmo