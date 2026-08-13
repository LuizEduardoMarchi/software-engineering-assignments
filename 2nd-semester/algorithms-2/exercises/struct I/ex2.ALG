//Dados os seguintes campos de um registro: nome, dia de
//aniversário e mês de aniversário, desenvolver um algoritmo
//que mostre em cada um dos meses do ano quem são as pessoas
//que fazem aniversário, exibir também o dia. Considere um
//conjunto de 40 pessoas

algoritmo "ex2"
tipo aniversario = registro
   nome:caractere
   dia:inteiro
   mes:inteiro
fimregistro

var
   i,j:inteiro
   conjunto:vetor [1..40] de aniversario
inicio
   para i de 1 ate 40 faca
      escreva("Digite o seu nome: ")
      leia(conjunto[i].nome)
      repita
         escreva("Digite o dia do seu aniversario: ")
         leia(conjunto[i].dia)
      ate((conjunto[i].dia >= 1) e (conjunto[i].dia <=31))
      repita
         escreva("Digite o mes do seu aniversario: ")
         leia(conjunto[i].mes)
      ate((conjunto[i].mes >= 1) e (conjunto[i].mes <=12))
   fimpara

   para i de 1 ate 12 faca
      escreval("Mes:", i)
      para j de 1 ate 40  faca
         se(conjunto[j].mes = i)entao
            escreval("Nome: ", conjunto[j].nome)
            escreval("Dia: ", conjunto[j].dia)
            escreval(" ")
         fimse
      fimpara
   fimpara

fimalgoritmo