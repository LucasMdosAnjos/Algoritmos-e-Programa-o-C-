Algoritmo "Programa 6"
// Disciplina  :  [Linguagem e Lógica de Programação] 
// Professor   : Cláudio Carvilhe
// Descrição   : Converte de métrica para imperial
// Autor(a)    : Ricardo Bertolin
// Data atual  : 20/04/2017
Var
x:real

Inicio
escreval("Qual o comprimento em metros?")
leia(x)
se(x>0)entao
escreval(x*39.37, "pol")
escreval(x*3.28, "ft")
escreval(x*1.09, "yd")
senao
escreval("0 comprimento deve ser > 0")
fimse
Fimalgoritmo