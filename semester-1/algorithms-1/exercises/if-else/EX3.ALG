algoritmo "ex3"
var 
   cargo: inteiro
   salario, novo, dif: real
inicio
   escreva("Salário: ")
   leia(salario)
   escreva("Código do Cargo: ")
   leia(cargo)
   se(cargo = 101)entao
      novo <- salario * 1.10
   senao
      se(cargo = 102)entao
         novo <- salario * 1.20
      senao
         se(cargo = 103)entao
            novo <- salario * 1.30
         senao
            novo <- salario * 1.40
         fimse
      fimse
   fimse
   dif <- novo - salario
   escreval("Antigo: ", salario, " Novo: ", novo, " Diferença: ", dif)
fimalgoritmo