algoritmo "ex3"
var
   dia,mes,ano:inteiro
   resultado:logico
funcao funcao_d_m_a (d,m,a:inteiro):logico
inicio
   se ((d >= 0) e (d <= 30)) entao
      se((m >= 1) e (m <= 12)) entao
         se(ano < 2025)entao
            retorne verdadeiro
         senao
            retorne falso
         fimse
      senao
         retorne falso
      fimse
   senao
      retorne falso
   fimse
fimfuncao

inicio
   escreva("Digite o dia: ")
   leia(dia)
   escreva("Digite o mes: ")
   leia(mes)
   escreva("Digite o ano: ")
   leia(ano)

   resultado <- funcao_d_m_a(dia,mes,ano)

   se (resultado) entao
      escreval("Data valida")
   senao
      escreval("Data invalida")
   fimse
fimalgoritmo