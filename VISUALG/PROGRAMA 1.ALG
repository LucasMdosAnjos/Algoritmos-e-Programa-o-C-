Algoritmo "Programa 1"
// Disciplina  :  [Linguagem e L�gica de Programa��o] 
// Professor   : Cl�udio Carvilhe
// Descri��o   : Calcula a �rea de um tri�ngulo
// Autor(a)    : Ricardo Bertolin
// Data atual  : 20/04/2017
Var
base,altura:real

Inicio
escreval("Qual a base em centimetros?")
leia(base)
escreval("Qual a altura em centimetros?")
leia(altura)
se(base>0)e(altura>0)entao
escreval(base*altura/2,"m^2")
senao
escreval("Raio deve ser > 0")
fimse
Fimalgoritmo
