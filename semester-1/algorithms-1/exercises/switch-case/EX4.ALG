algoritmo "ex4"
var
   opcao: inteiro
   base, altura, lado, raio, resultado: real
inicio
   escreval("Escolha uma operacao:")
   escreval("1 - Calcular a area de um triangulo")
   escreval("2 - Calcular a area de um retangulo")
   escreval("3 - Calcular o volume de uma esfera")
   leia(opcao)
   escolha opcao
      caso 1
         escreva("Informe a base: ")
         leia(base)
         escreva("Informe a altura: ")
         leia(altura)
         resultado <- (base * altura) / 2
         escreval("Area do triangulo: ", resultado:4:2)
      caso 2
         escreva("Informe o lado: ")
         leia(lado)
         resultado <- lado * lado
         escreval("Area do retangulo: ", resultado:4:2)
      caso 3
         escreva("Informe o raio: ")
         leia(raio)
         resultado <- (4/3) * 3.1415 * (raio ^ 3)
         escreval("Volume da esfera: ", resultado:4:2)
      outrocaso
         escreval("Opcao invalida.")
   fimescolha
fimalgoritmo