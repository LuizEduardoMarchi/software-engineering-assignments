algoritmo "ex4"
var
   anos, cigarros_dia, qtde_carteira: inteiro
   preco_carteira, total_gasto: real
inicio
   escreva("Anos fumando: ")
   leia(anos)
   escreva("Cigarros por dia: ")
   leia(cigarros_dia)
   escreva("Preco da carteira: ")
   leia(preco_carteira)
   escreva("Cigarros na carteira: ")
   leia(qtde_carteira)

   total_gasto <- (anos * 365 * cigarros_dia / qtde_carteira) * preco_carteira
   escreval("Total gasto ate agora: R$", total_gasto:4:2)
fimalgoritmo