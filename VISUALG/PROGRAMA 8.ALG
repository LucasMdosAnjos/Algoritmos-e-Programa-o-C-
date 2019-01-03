Algoritmo "Programa 8"
// Disciplina  :  [Linguagem e Lógica de Programação] 
// Professor   : Cláudio Carvilhe
// Descrição   : Status de Aprovado do aluno pela nota
// Autor(a)    : Ricardo Bertolin
// Data atual  : 20/04/2017
Var
n1,n2:real

Inicio
escreval("Qual a nota 1?")
leia(n1)
escreval("Qual a nota 2?")
leia(n2)
se(n1>= 0)e(n2>= 0)entao
se((n1+n2)<8)entao
escreval("Reprovado")
senao
se ((n1+n2) >=14)entao
escreval("Aprovado")
senao
escreval("Exame Final")
fimse
fimse
senao
escreval("As notas devem ser >= 0")
fimse
Fimalgoritmo