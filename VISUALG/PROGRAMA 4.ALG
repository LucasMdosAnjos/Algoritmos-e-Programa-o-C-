Algoritmo "Programa 4"
// Disciplina  :  [Linguagem e Lógica de Programação]
// Professor   : Cláudio Carvilhe
// Descrição   : Calcular AT,QL e CT utilizando QC,CU,H,R.
// Autor(a)    : Ricardo Bertolin
// Data atual  : 20/04/2017
Var
QC,CU,H,R,AT,QL,CT:real

Inicio
escreval("Qual a Quantidade de Cilindros")
leia(QC)
escreval("Qual o Custo por Unidade?")
leia(CU)
escreval("Qual a Altura do Cilindro?")
leia(H)
escreval("Qual o raio do Cilindro?")
leia(R)
se(QC>0)e(CU>0)e(H>0)e(R>0)entao
   AT <- (2*3.14*R*(R+H)/15)
    QL <- (AT*QC)
     CT <- (QL*CU)
   escreval("Area total dos Cilindros:",AT)
   escreval("Quantidade total de Latas:",QL)
   escreval("Custo total:",CT)
   senao
   escreval("Valores devem ser > 0")
fimse
Fimalgoritmo
