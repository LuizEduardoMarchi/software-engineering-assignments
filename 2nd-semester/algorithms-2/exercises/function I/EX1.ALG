algoritmo "ex1"
var
   raio,volume:real
funcao cal_volume(raio:real):real
var
inicio
      retorne (4/3 * 3.14 * (raio * raio * raio))
fimfuncao

inicio
      escreva("Digite o raio da esfera: ")
      leia(raio)
      volume <- cal_volume(raio)
      escreva("O volume total é: ", volume)
fimalgoritmo