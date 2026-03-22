algoritmo "ex9"
var 
   m: inteiro
inicio
   escreva("Digite um numero inteiro entre 1 e 12: ")
   leia(m)
   se(m = 1)entao
      escreval("Janeiro")
   senao
      se(m = 2)entao
         escreval("Fevereiro")
      senao
         se (m = 3)entao
            escreval("Marco")
         senao
            se (m = 4) entao
               escreval("Abril")
            senao
               se (m = 5) entao
                  escreval("Maio")
               senao
                  se (m = 6) entao
                     escreval("Junho")
                  senao
                     se (m  = 7) entao
                        escreval ("Julho")'
                     senao
                        se (m = 8) entao
                           escreval("Agosto")
                        senao
                           se (m = 9) entao
                              escreval("Setembro")
                           senao
                              se (m = 10) entao
                                 escreval("Outubro")
                              senao
                                 se(m = 11) entao
                                    escreval("Novembro")
                                 senao
                                    se(m = 12) entao
                                       escreval("Dezembro")
                                    senao
                                       escreval("Não existe mês com este número")
                                    fimse
                                 fimse
                              fimse
                           fimse
                        fimse
                     fimse
                  fimse
               fimse
            fimse
         fimse
      fimse
   fimse
fimalgoritmo