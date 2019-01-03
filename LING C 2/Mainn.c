#include <stdio.h>

int main(){
    int valor1, valor2;
    printf("Entre com o primeiro valor:");
    scanf("%d", &valor1);
    fflush(stdin);
    printf("Entre com o segundo valor:");
    scanf("%d", &valor2);
    fflush(stdin);
    printf("A soma de %d + %d = %d\n", valor1, valor2, valor1 + valor2);
    return 0;
}
