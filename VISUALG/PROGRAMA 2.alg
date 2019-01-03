Algoritmo "Programa 2"
// Disciplina  :  [Linguagem e Lógica de Programação]
// Professor   : Cláudio Carvilhe
// Descrição   : Identificar pela idade quanto a menor, maior ou idoso
// Autor(a)    : Ricardo Bertolin
// Data atual  : 20/04/2017
Var
x:real

Inicio
escreval("Qual a idade?")
leia(x)
se(x>0)entao
   se(x<18)entao
      escreval("Menor de Idade")
   senao
      se(x>18)e(x<65)entao
         escreval("Maior de Idade")
      senao
      se(x>65)entao
         escreval("Idoso")
      fimse
   fimse
   fimse
senao
   escreval("A idade deve ser > 0")
fimse
Fimalgoritmo
