algoritmo "ex4"
var
   anos,meses,dias:inteiro
   tempo_dias:inteiro
funcao calcular_tempo (anos,meses,dias:inteiro):inteiro
inicio
      retorne (dias + meses * 30 + anos * 360)
fimfuncao

inicio
      escreva("Digite o dia: ")
      leia(dias)
      escreva("Digite o mes: ")
      leia(meses)
      escreva("Digite o ano: ")
      leia(anos)
      
      tempo_dias <- calcular_tempo(dias,meses,anos)
      escreva("O tempo em dias é:", tempo_dias)
fimalgoritmo