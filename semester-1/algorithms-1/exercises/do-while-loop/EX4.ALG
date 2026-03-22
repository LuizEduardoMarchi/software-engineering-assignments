algoritmo "ex4"
var
   cod,tpin:inteiro
   vi,vf:real
inicio
      escreval("Digite o codigo do cliente")
      leia(cod)
      enquanto cod>0 faca
      escreval("Digite o tipo de investimento")
      escreval("1- Poupan�a - 1,5%")
      escreval("2- Poupan�a Plus - 2%")
      escreval("3- Fundos de renda fixa - 4%")
      leia(tpin)
      escreval("Digite o valor a ser investido pelo cliente:")
      leia(vi)
      escolha(tpin)
      caso 1
           vf<-vi*1.015
           escreval("O valor final do investimento do cliente",cod, " foi de:", vf)
      caso 2
           vf<-vi*1.02
           escreval("O valor final do investimento do cliente",cod, " foi de:", vf)
      caso 3
           vf<-vi*1.04
           escreval("O valor final do investimento do cliente",cod, " foi de:", vf)
      outrocaso
               escreval("Codigo de investimento invalido")
      fimenquanto
      escreva("programa encerado")
fimalgoritmo