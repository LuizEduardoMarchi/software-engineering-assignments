algoritmo "ex3"
var
   sal_n, sal_a:real
   cat:inteiro
inicio
      escreva("Digite o salario atual do funcionario:")
      leia(sal_a)
      escreval("1- A,C,F,H")
      escreval("2- B,D,E,I,J,T")
      escreval("3- K,G")
      escreval("4- L,M,N,O,P,Q,R,S")
      escreval("5- U,V,X,Y,W,Z")
      escreva("Digite a categoria do funcionario de 1 a 5:")
      leia(cat)
      escolha(cat)
      caso 1
           sal_n<-sal_a*1.1
           escreva("O salario atual do funcionario eh:",sal_n)
      caso 2
           sal_n<-sal_a*1.15
           escreva("O salario atual do funcionario eh:",sal_n)
      caso 3
           sal_n<-sal_a*1.25
           escreva("O salario atual do funcionario eh:",sal_n)
      caso 4
           sal_n<-sal_a*1.35
           escreva("O salario atual do funcionario eh:",sal_n)
      caso 5
           sal_n<-sal_a*1.5
           escreva("O salario atual do funcionario eh:",sal_n)
      outrocaso
               escreva("Categoria do funcionario invalida")
      fimescolha
fimalgoritmo