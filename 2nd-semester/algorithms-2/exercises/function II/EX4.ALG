algoritmo "ex4"
var
   catA,catB,Hip:real

funcao calc_hipotenusa (catA,catB :real):real
inicio
   retorne ((1/2)*(catA * catA + catB * catB))
fimfuncao

inicio
   escreva("Digite o valor do cateto A: ")
   leia(catA)
   escreva("Digite o valor do cateto B: ")
   leia(catB)
   Hip <- calc_hipotenusa(catA,catB)
   escreva("O valor da hipotenusa é: ", Hip)
fimalgoritmo