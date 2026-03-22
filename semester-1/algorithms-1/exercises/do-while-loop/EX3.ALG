algoritmo "ex3"
var
   op:inteiro
   chico,juca:real
inicio
      chico<-1.50
      juca<-1.10
      op<-0
      repita
      chico<-chico+0.02
      juca<-juca+0.03
      op<-op+1
      ate(juca>chico)
      escreva("Ser�o necess�rios ", op, " anos!")
fimalgoritmo