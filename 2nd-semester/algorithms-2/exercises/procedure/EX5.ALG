algoritmo "ex5"
declare
   x,y,z:real
procedimento triangulos (a,b,c:inteiro)
declare

inicio
   se((a + b > c) e (b + c > a) e (a + c > b))entao
      se((a = b) e (b = c))entao
         escreva("Triangulo Equilatero!");
      senao
         se((a = b) ou (b = c) ou (c = a))entao
            escreva("Triangulo Isosceles!");
         senao
            escreva("Triangulo Escaleno!");
         fimse;
      fimse;
   senao
      escreva("Nao é um triangulo");
   fimse;
fimprocedimento;
inicio
   escreva("Digite um numero para X: ");
   leia(x);
   escreva("Digite um numero para Y: ");
   leia(y);
   escreva("Digite um numero para Z: ");
   leia(z);
   triangulos(x,y,z);
fimalgoritmo;