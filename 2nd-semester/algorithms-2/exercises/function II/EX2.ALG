algoritmo "ex2"
var
   a,b,c:real
   x1,x2:real
   resultado:logico

funcao equacao_segundo_grau (a,b,c:inteiro; var x1,x2:real):logico
var
   delta:real
inicio
   delta <-  b * b - 4 * a * c

   se (delta < 0) entao
      retorne falso
   senao
      x1 <- (-b + delta ^(1/2))/ (2 * a)
      x2 <- (-b - delta ^(1/2))/ (2 * a)
      retorne verdadeiro
   fimse
fimfuncao

inicio
   escreva("Digite o valor de a: ")
   leia(a)
   escreva("Digite o valor de b: ")
   leia(b)
   escreva("Digite o valor de c: ")
   leia(c)

   resultado <- equacao_segundo_grau(a,b,c,x1,x2)

   se (resultado) entao
      escreval("As raízes da equação são: ")
      escreval("x1 = ", x1)
      escreval("x2 = ", x2)
   senao
      escreval("Não existem raízes reais para esta equação.")
   fimse
fimalgoritmo