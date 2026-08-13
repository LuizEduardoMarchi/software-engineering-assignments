algoritmo "ex6"
var 
   destino, tipo: inteiro
inicio
   escreval("1-Norte 2-Nordeste 3-Centro-Oeste 4-Sul")
   leia(destino)
   escreval("1-Ida 2-Ida e Volta")
   leia(tipo)
   se(destino = 1)entao
      se tipo = 1 entao escreval("R$ 500") senao escreval("R$ 900") fimse
      senao
         se(destino = 2)entao
            se(tipo = 1)entao
               escreval("R$ 350")
            senao
               escreval("R$ 650")
            fimse
         senao
            se(destino = 3)entao
               se(tipo = 1)entao
                  escreval("R$ 350")
               senao
                  escreval("R$ 600")
               fimse
            senao
               se(tipo = 1)entao
                  escreval("R$ 300")
               senao
                  escreval("R$ 550")
               fimse
            fimse
         fimse
      fimse
fimalgoritmo