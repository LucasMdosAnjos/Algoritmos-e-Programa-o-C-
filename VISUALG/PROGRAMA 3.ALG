Algoritmo "Programa 3"
// Disciplina  :  [Linguagem e Lógica de Programação]
// Professor   : Cláudio Carvilhe
// Descrição   : Calcula a area do Cilindro
// Autor(a)    : Ricardo Bertolin
// Data atual  : 20/04/2017
Var
raio,altura,area:real

Inicio
escreval("Qual o raio do Cilindro?")
leia(raio)
escreval("Qual a altura do Cilindro?")
leia(altura)
se(raio > 0)e(altura > 0)entao
   area <- 2*3.14*raio*(raio+altura)
   escreval("Area do Cilindro:",area)
   senao
   escreval("O raio e altura devem ser > 0")
fimse
Fimalgoritmo
