Algoritmo "Programa 7"
// Disciplina  :  [Linguagem e Lógica de Programação] 
// Professor   : Cláudio Carvilhe
// Descrição   : Classifica o status de eleitor pela idade
// Autor(a)    : Ricardo Bertolin
// Data atual  : 20/04/2017
Var
x:real

Inicio
escreval("Qual a idade?")
leia(x)
se(x>0)entao
se(x<16)entao
escreval("Não eleitor")
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