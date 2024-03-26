#include <stdio.h>
#include <math.h>

int main() 
{
    int numero;

    printf("Insira um numero inteiro: ");
    scanf("%d", &numero);

    numero = fabs(numero);

    printf("O valor absoluto do numero inserido: %d\n", numero);

    return 0;
}