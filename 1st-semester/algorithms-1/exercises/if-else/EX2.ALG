algoritmo "ex2"
var 
   n1, n2, n3, n4, n5, media, media_exame: real
inicio
   escreva("Digite a primeira nota: ")
   leia(n1)
   escreva("Digite a segunda nota: ")
   leia(n2)
   escreva("Digite a terceira nota: ")
   leia(n3)
   escreva("Digite a quarta nota: ")
   leia(n4)
   media <- (n1 + n2 + n3 + n4) / 4
   se(media >= 7)entao
      escreval("APROVADO. Média: ", media)
   senao
      escreva("Exame. Digite a 5a nota: ")
      leia(n5)
      media_exame <- (media + n5) / 2
      se(media_exame >= 5)entao
         escreval("Aprovado com Exame. Média Final: ", media_exame)
      senao
         escreval("REPROVADO. Média Final: ", media_exame)
      fimse
   fimse
fimalgoritmo