Algoritmo "Programa 10"
// Disciplina  :  [Linguagem e Lógica de Programação]
// Professor   : Cláudio Carvilhe
// Descrição   : Status de IMC com base em peso e altura
// Autor(a)    : Ricardo Bertolin
// Data atual  : 20/04/2017
Var
peso,altura,imc:real

Inicio
escreval("Qual o peso em kg?")
leia(peso)
escreval("Qual a altura em metros?")
leia(altura)
se(peso > 0)e(altura > 0)entao
   imc <- peso/(altura*altura)
   escreval("imc:",imc)
   se(imc < 20)entao
      escreval("Abaixo do peso")
   senao
      se(imc<25)entao
         escreval("Peso normal")
      senao
         se (imc<30)
            entao
            escreval("Sobre peso")
         senao
            se(imc<40) entao
               escreval("Obeso")
            senao
               escreval("Obesidade morbida")
            fimse
         fimse
      fimse
   fimse
senao
   escreval("O peso e a altura devem ser > 0")
fimse
Fimalgoritmo
