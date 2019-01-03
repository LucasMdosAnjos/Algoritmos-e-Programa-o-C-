Algoritmo "Programa 9"
// Disciplina  :  [Linguagem e Lógica de Programação]
// Professor   : Cláudio Carvilhe
// Descrição   : Status de Aprovado do aluno pela nota e faltas
// Autor(a)    : Ricardo Bertolin
// Data atual  : 20/04/2017
Var
n1,n2,aulas,faltas,razao:real

Inicio
escreval("Qual a nota 1?")
leia(n1)
escreval("Qual a nota 2?")
leia(n2)
escreval("Total de aulas?")
leia(aulas)
escreval("Quantas faltas?")
leia(faltas)
se(n1>= 0)e(n2>= 0)e(aulas>=0)e(faltas>=0)entao
se(faltas/aulas<0.25)entao
se((n1+n2)<8)entao
escreval("Reprovado por nota")
senao
se ((n1+n2) >=14)entao
escreval("Aprovado")
senao
escreval("Exame Final")
fimse
fimse
senao
escreval("Reprovado por faltas",faltas/aulas)
fimse
senao
escreval("Verifique a entrada de dados")
fimse
Fimalgoritmo
