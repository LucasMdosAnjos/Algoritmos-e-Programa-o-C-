Algoritmo "Programa 7"
// Disciplina  :  [Linguagem e L�gica de Programa��o] 
// Professor   : Cl�udio Carvilhe
// Descri��o   : Classifica o status de eleitor pela idade
// Autor(a)    : Ricardo Bertolin
// Data atual  : 20/04/2017
Var
x:real

Inicio
escreval("Qual a idade?")
leia(x)
se(x>0)entao
se(x<16)entao
escreval("N�o eleitor")
senao
se(x < 18)ou (x > 65) entao
escreval("Eleitor facultativo")
senao
escreval("Eleitor")
fimse
fimse
senao
escreval("A idade deve ser > 0")
fimse
Fimalgoritmo