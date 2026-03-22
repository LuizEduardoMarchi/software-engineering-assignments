algoritmo "ex3"
var
   categoria: caractere
   salario, novo_salario: real
inicio
   escreva("Digite o salario atual: ")
   leia(salario)
   escreva("Digite a categoria do funcionario: ")
   leia(categoria)
   categoria <- maiusc(categoria)
   escolha categoria
      caso "A", "C", "F", "H"
         novo_salario <- salario * 1.10
      caso "B", "D", "E", "I", "J", "T"
         novo_salario <- salario * 1.15
      caso "K", "G"
         novo_salario <- salario * 1.25
      caso "L", "M", "N", "O", "P", "Q", "R", "S"
         novo_salario <- salario * 1.35
      caso "U", "V", "X", "Y", "W", "Z"
         novo_salario <- salario * 1.50
      outrocaso
         escreval("Categoria invalida.")
         novo_salario <- salario
   fimescolha
   escreval("O novo salario e: R$", novo_salario:4:2)
fimalgoritmo